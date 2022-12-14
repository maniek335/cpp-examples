#include <iostream>

using namespace std;

enum class Gender {
  Undefined,
  Male,
  Female
};

class Person {
 public:
  int id;
  string firstname;
  string lastname;
  string birthdate;
  Gender gender;
  string city;

  static int last_id;
  static int object_count;

  Person(string firstname = "",
         string lastname = "",
         string birthdate = "",
         Gender gender = Gender::Undefined,
         string city = "");
  ~Person();

  void introduce();

  static void info();
};
