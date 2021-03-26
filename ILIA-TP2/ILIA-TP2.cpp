#include <iostream>
using namespace std;

const int nMax = 10;

void sum(int n);
void avr(int n);
void max(int n);
void min(int n);

int main()
{
  setlocale(LC_ALL, "fr_be");
  int n,operation;
  do {
    cout << "Entrez un nombre entre 1 et " << nMax << ": ";
    cin >> n;
  } while (n < 1 || n > nMax);
  do {
    cout << "Quelle opération?" << endl
      << "1: Somme de   " << n << " réels" << endl
      << "2: Moyenne de " << n << " entiers" << endl
      << "3: Maximum de " << n << " chaînes de texte" << endl
      << "4: Recherche du minimum d'une matrice de caractères " << n << "x" << n << endl;
    cin >> operation;
  } while (operation < 1 || operation > 4);
  switch (operation)
  {
  case 1:
    sum(n);
    break;
  case 2:
    avr(n);
    break;
  case 3:
    max(n);
    break;
  case 4:
    min(n);
    break;
  default:
    break;
  }
  return 0;
}

void sum(int n) {
  cout << "Somme";
}

void avr(int n) {
  cout << "Moyenne";
}

void max(int n) {
  cout << "Maximum";
}

void min(int n) {
  cout << "Minimum";
}