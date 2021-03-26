#include <iostream>
using namespace std;

const int nMax = 10;

int main()
{
  int n;
  do {
    cout << "Entrez un nombre entre 1 et " << nMax << ": ";
    cin >> n;
  } while (n < 1 || n > nMax);

  return 0;
}