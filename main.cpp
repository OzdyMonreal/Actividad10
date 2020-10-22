#include <iostream>
#include "laboratorio.h"

using namespace std;

int main() {
  Computadora comp1;
  Computadora comp2;
  Computadora comp3;

  cin >> comp1;
  fflush(stdin);
  cin >> comp2;
  fflush(stdin);
  cin >> comp3;
  fflush(stdin);

  Laboratorio lab;

  lab << comp1 << comp2 << comp3;

  lab.mostrar();
  lab.respaldar();
  
  return 0;
}
