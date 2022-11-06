#include <iostream>

using namespace std;

class Person {
 public:
  int id;
  string firstname;
  string lastname;
  string birthday;
  char gender;
  string city;

  static void info();
  static int last_id;
  static int object_count;
  void introduce();
  Person(string firstname = "nieznane",
         string lastname = "nieznane",
         string birthday = "nie podano",
         char gender = 'K',
         string city = "nie podano");
  ~Person();
};
