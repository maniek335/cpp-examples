#include <fstream>
#include <iostream>

using namespace std;

class osoba {
 public:
  string imie, nazwisko, miasto, data_ur;
  char plec;
  int id;
  static void info();
  static int ostatni_id;
  static int ile_obiektow;
  void przedstaw();
  osoba();
  osoba(string imie, string nazwisko, string data_ur);
  ~osoba();
};

int osoba::ostatni_id;
int osoba::ile_obiektow;

osoba::osoba() {
  imie = "nieznane";
  nazwisko = "nieznane";
  miasto = "nie podano";
  plec = 'K';
  data_ur = "nie podano";
  id = ++ostatni_id;
  ile_obiektow++;
}

osoba::osoba(string arg_imie, string arg_nazwisko, string arg_data_ur) {
  imie = arg_imie;
  nazwisko = arg_nazwisko;
  miasto = "Wagrowiec";
  plec = 'M';
  data_ur = arg_data_ur;
  id = ++ostatni_id;
  ile_obiektow++;
}

osoba::~osoba() {
  ile_obiektow--;
  cout << "zaglada czlowieka" << endl;
}

void osoba::info() {
  cout << "Ostanio nadany ID wynosi: " << ostatni_id << endl;
  cout << "obiektow w systemie: " << ile_obiektow << endl;
}

void osoba::przedstaw() {
  cout << "ID: " << id << endl;
  cout << imie << " " << nazwisko << " " << data_ur << " " << miasto << " "
       << plec << endl;
}

int OdczytPliku() {
  string zmienna;
  ifstream odczyt("plik.txt");
  odczyt >> zmienna;
  return atoi(zmienna.c_str());
}

int main() {
  osoba::ostatni_id = OdczytPliku();
  cout << "Z pliku odczytano ostatnie ID: " << OdczytPliku() << endl;

  osoba czlowiek1;
  osoba::info();
  czlowiek1.przedstaw();

  osoba czlowiek2("Pawel", "Nowak", "14.08.2002");
  osoba::info();
  czlowiek2.przedstaw();

  osoba czlowiek3("Milosz", "Nowacki", "16.08.2002");
  osoba::info();
  czlowiek3.przedstaw();

  osoba czlowiek4("Waldemar", "Nowacki", "15.08.2002");
  osoba::info();
  czlowiek4.przedstaw();

  osoba czlowiek5;
  osoba::info();
  czlowiek5.przedstaw();

  ofstream zapis("plik.txt", ios::trunc);
  zapis << osoba::ostatni_id;
  zapis.close();
  return 0;
}
