#include <fstream>
#include <iostream>

#include "Person.h"

using namespace std;

int readFile() {
  string result;
  ifstream file("plik.txt");
  file >> result;
  return atoi(result.c_str());
}

int main() {
  Person::last_id = readFile();
  cout << "Z pliku odczytano ostatnie ID: " << readFile() << endl;

  Person czlowiek1;
  Person::info();
  czlowiek1.introduce();

  Person czlowiek2("Pawel", "Nowak", "14.08.2002", Gender::Male, "Wagrowiec");
  Person::info();
  czlowiek2.introduce();

  Person czlowiek3("Milosz", "Nowacki", "16.08.2002", Gender::Male, "Wagrowiec");
  Person::info();
  czlowiek3.introduce();

  Person czlowiek4("Waldemar", "Nowacki", "15.08.2002", Gender::Male, "Wagrowiec");
  Person::info();
  czlowiek4.introduce();

  Person czlowiek5;
  Person::info();
  czlowiek5.introduce();

  ofstream file("plik.txt", ios::trunc);
  file << Person::last_id;
  file.close();
  return 0;
}
