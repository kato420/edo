#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int s;
  cout << "Tamaño: ";
  cin >> s;
  int *lista = new int[s];
  delete[] lista;
  return 0;
}
