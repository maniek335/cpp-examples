#include "Person.h"

int Person::ostatni_id;
int Person::ile_obiektow;

Person::Person() {
  imie = "nieznane";
  nazwisko = "nieznane";
  miasto = "nie podano";
  plec = 'K';
  data_ur = "nie podano";
  id = ++ostatni_id;
  ile_obiektow++;
}

Person::Person(string arg_imie, string arg_nazwisko, string arg_data_ur) {
  imie = arg_imie;
  nazwisko = arg_nazwisko;
  miasto = "Wagrowiec";
  plec = 'M';
  data_ur = arg_data_ur;
  id = ++ostatni_id;
  ile_obiektow++;
}

Person::~Person() {
  ile_obiektow--;
  cout << "zaglada czlowieka" << endl;
}

void Person::info() {
  cout << "Ostanio nadany ID wynosi: " << ostatni_id << endl;
  cout << "obiektow w systemie: " << ile_obiektow << endl;
}

void Person::przedstaw() {
  cout << "ID: " << id << endl;
  cout << imie << " " << nazwisko << " " << data_ur << " " << miasto << " "
       << plec << endl;
}
