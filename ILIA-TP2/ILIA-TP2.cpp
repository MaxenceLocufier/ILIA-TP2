#include <iostream>
using namespace std;

const int nMax = 10;

void sum(int);
void avr(int);
void max(int);
void min(int);

void fill_array(double[], int);
void fill_array(int[], int);
void fill_array(string[], int);
void fill_array(char[][nMax], int);

void print_array(double[], int);
void print_array(int[], int);
void print_array(string[], int);
void print_array(char[][nMax], int);

double sum_array(double[], int);
double average_array(int[], int);
string max_array(string[], int);
char min_array(char[][nMax], int);

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

#pragma region Operations

void sum(int n) {
  double tab[nMax];
  fill_array(tab, n);
  print_array(tab, n);
  cout << "Somme: " << sum_array(tab, n) << endl;
}

void avr(int n) {
  int tab[nMax];
  fill_array(tab, n);
  print_array(tab, n);
  cout << "Moyenne: " << average_array(tab, n) << endl;
}

void max(int n) {
  string tab[nMax];
  fill_array(tab, n);
  print_array(tab, n);
  cout << "Maximum: " << max_array(tab, n) << endl;
}

void min(int n) {
  char mat[nMax][nMax];
  fill_array(mat, n);
  print_array(mat, n);
  cout << "Minimum: '" << min_array(mat, n) << "'\n";
}

#pragma endregion


#pragma region ArrayOperations

void fill_array(double tab[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "Nombre " << i << ": ";
    cin >> tab[i];
  }
}

void fill_array(int tab[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "Nombre " << i << ": ";
    cin >> tab[i];
  }
}

void fill_array(string tab[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "Texte " << i << ": ";
    cin >> tab[i];
  }
}

void fill_array(char mat[][nMax], int n) {
  string s;
  for (int i = 0; i < n; i++) {
    do {
      cout << "Ligne " << i << ": ";
      cin >> s;
    } while (s.length() != n);
    strncpy_s(mat[i],s.c_str(), n);
  }
}

void print_array(double tab[], int n) {
  cout << "[";
  for (int i = 0; i < n; i++) {
    cout << tab[i] << (i == n - 1 ? "]\n" : ", ");
  }
}

void print_array(int tab[], int n) {
  cout << "[";
  for (int i = 0; i < n; i++) {
    cout << tab[i] << (i == n - 1 ? "]\n" : ", ");
  }
}

void print_array(string tab[], int n) {
  cout << "[";
  for (int i = 0; i < n; i++) {
    cout << tab[i] << (i == n - 1 ? "]\n" : ", ");
  }
}

void print_array(char tab[][nMax], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      cout << tab[i][j] << " ";
    cout << endl;
  }
}

double sum_array(double tab[], int n) {
  double s = 0;
  for (int i = 0; i < n; i++) {
    s += tab[i];
  }
  return s;
}

double average_array(int tab[], int n) {
  double s = 0;
  for (int i = 0; i < n; i++) {
    s += tab[i];
  }
  return s/n;
}

string max_array(string tab[], int n) {
  string max = tab[0];
  for (int i = 1; i < n; i++) {
    if (max < tab[i]) max = tab[i];
  }
  return max;
}

char min_array(char tab[][nMax], int n) {
  char min = tab[0][0];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (tab[i][j] < min) min = tab[i][j];
  return min;
}

#pragma endregion