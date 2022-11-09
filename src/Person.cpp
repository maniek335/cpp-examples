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

  cout << "First Name: ";
  cout << (firstname.empty() ? "N/A" : firstname) << endl;

  cout << "Last Name: ";
  cout << (lastname.empty() ? "N/A" : lastname) << endl;

  cout << "Birth Date: ";
  cout << (birthdate.empty() ? "N/A" : birthdate) << endl;

  cout << "City: ";
  cout << (city.empty() ? "N/A" : city) << endl;

  cout << "Gender: ";
  cout << ((gender == '\0') ? "N/A" : string(1, gender)) << endl;

  cout << string(50, '=') << endl;
}
