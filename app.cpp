#include <fstream>
#include <iostream>

#include "Person.h"

using namespace std;

int OdczytPliku() {
  string zmienna;
  ifstream odczyt("plik.txt");
  odczyt >> zmienna;
  return atoi(zmienna.c_str());
}

int main() {
  Person::ostatni_id = OdczytPliku();
  cout << "Z pliku odczytano ostatnie ID: " << OdczytPliku() << endl;

  Person czlowiek1;
  Person::info();
  czlowiek1.przedstaw();

  Person czlowiek2("Pawel", "Nowak", "14.08.2002");
  Person::info();
  czlowiek2.przedstaw();

  Person czlowiek3("Milosz", "Nowacki", "16.08.2002");
  Person::info();
  czlowiek3.przedstaw();

  Person czlowiek4("Waldemar", "Nowacki", "15.08.2002");
  Person::info();
  czlowiek4.przedstaw();

  Person czlowiek5;
  Person::info();
  czlowiek5.przedstaw();

  ofstream zapis("plik.txt", ios::trunc);
  zapis << Person::ostatni_id;
  zapis.close();
  return 0;
}
