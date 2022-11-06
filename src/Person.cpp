#include "Person.h"

int Person::ostatni_id;
int Person::ile_obiektow;

Person::Person(string f, string l, string d, char g, string c) {
  imie = f;
  nazwisko = l;
  data_ur = d;
  plec = g;
  miasto = c;
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
