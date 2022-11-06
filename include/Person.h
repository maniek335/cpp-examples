#include <iostream>

using namespace std;

class Person {
 public:
  string imie, nazwisko, miasto, data_ur;
  char plec;
  int id;
  static void info();
  static int ostatni_id;
  static int ile_obiektow;
  void przedstaw();
  Person();
  Person(string imie, string nazwisko, string data_ur);
  ~Person();
};
