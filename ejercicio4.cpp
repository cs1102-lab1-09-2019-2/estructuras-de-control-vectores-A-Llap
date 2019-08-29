/*
Escribir un programa que imprima lo siguiente:

12*****
123****
1234***
12345**
123456*
1234567

*/

#include <iostream>
using std::cout;

int main() {
  for (int i=3; i<9;i++){
    for (int j=1;j<i;j++){
      cout << j;
    }
    for (int j=1;j<(9-i);j++){
      cout << "*";
    }
    cout << "\n";
  }

    return 0;
  }
