#include <iostream>

using namespace std;

class Person {
 public:
  int id;
  string firstname;
  string lastname;
  string birthdate;
  char gender;
  string city;

  static void info();
  static int last_id;
  static int object_count;
  void introduce();
  Person(string firstname = "",
         string lastname = "",
         string birthdate = "",
         char gender = '\0',
         string city = "");
  ~Person();
};
