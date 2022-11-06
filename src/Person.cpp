#include "Person.h"

int Person::last_id;
int Person::object_count;

Person::Person(string f, string l, string d, char g, string c) {
  firstname = f;
  lastname = l;
  birthday = d;
  gender = g;
  city = c;
  id = ++last_id;
  object_count++;
}

Person::~Person() {
  object_count--;
  cout << "zaglada czlowieka" << endl;
}

void Person::info() {
  cout << "Ostanio nadany ID wynosi: " << last_id << endl;
  cout << "obiektow w systemie: " << object_count << endl;
}

void Person::introduce() {
  cout << "ID: " << id << endl;
  cout << firstname << " " << lastname << " " << birthday << " " << city << " "
       << gender << endl;
}
