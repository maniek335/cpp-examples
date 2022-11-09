#include "Person.h"

int Person::last_id;
int Person::object_count;

Person::Person(string f, string l, string d, char g, string c) {
  firstname = f;
  lastname = l;
  birthdate = d;
  gender = g;
  city = c;
  id = ++last_id;
  object_count++;
}

Person::~Person() {
  object_count--;
  cout << "Person destruction with ID: " << id << endl;
}

void Person::info() {
  cout << string(50, '-') << endl;
  cout << "Last ID: " << last_id << endl;
  cout << "Object count: " << object_count << endl;
  cout << string(50, '=') << endl;
}

void Person::introduce() {
  cout << string(50, '-') << endl;
  cout << "ID: " << id << endl;
  cout << "First Name: " << firstname << endl;
  cout << "Last Name: " << lastname << endl;
  cout << "Birth Date: " << birthdate << endl;
  cout << "City: " << city << endl;
  cout << "Gender: " << gender << endl;
  cout << string(50, '=') << endl;
}
