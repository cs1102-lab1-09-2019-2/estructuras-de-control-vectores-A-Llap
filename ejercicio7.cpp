/*
 El usuario puede escoger de 5 opciones (de 1 a 5). Entonces pregunta por dos
 valores enteros para el calculo
 MENU:
 1.- suma
 2.- resta
 3.- multiplicar
 4.- dividir
 5.- modulo
 Ingresa una opcion: 1
 Ingresa los dos numeros: 5 96
 Resultado: 111
 Continuar? y
 // Si el usuario ingresa 'y' a la pregunta Continuar? el usuario puede escoger otra opcion.
 */

#include <iostream>
#include <stdexcept> //Validar en la division por 0
using std::cout;
using std::cin;
using std::invalid_argument;

void mostrarMenu();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);


void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Add\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  6.- Modulo\n";
}

int main() {
  mostrarMenu();
  int opcion, a, b, c;
  char continuar='y';
  do {
  cout << "Ingresa una opción: ";
  cin >> opcion;
  cout << "\n";
  cout << "Ingresa los dos números: ";
  cin >> a >> b;
  
  if (opcion == 1){c=a+b; cout << "Resultado: "<<c<<"\n";}
  else if (opcion == 2){c=a-b; cout << "Resultado: "<<c<<"\n";}
  else if (opcion == 3){c=a*b; cout << "Resultado: "<<c<<"\n";}
  else if (opcion == 4){c=a/b; cout << "Resultado: "<<c<<"\n";}
  else if (opcion == 6){c=a%b; cout << "Resultado: "<<c<<"\n";}
  else{cout << "Opción inválida\n";}

  cout << "\nContinuar? ";
  cin >> continuar;
  } while (continuar == 'y');
    return 0;
}
