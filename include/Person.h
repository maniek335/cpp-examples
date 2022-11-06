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
  Person(string imie="nieznane", string nazwisko="nieznane", string data_ur="nie podano", char plec='K', string miasto="nie podano");
  ~Person();
};
