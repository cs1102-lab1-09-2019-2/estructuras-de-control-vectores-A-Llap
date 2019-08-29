#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


vector<int> leerConsola() {
  vector<int> nums;
  int x;

    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    do {
      cout << "Ingrese un entero positivo, escriba -1 si ya no quiere ingresar mas numeros:";
      cin >> x;
      if (x != -1){
      nums.insert(nums.end(), x);
      }
    } while (x != -1);
    return nums;
}


double mediana(vector<int> lista) {
  int size = lista.size();
  double mediana;
    /*
    Si el vector es 3, 9, 11, 15
    Si el número de observaciones es par,
     la mediana corresponde al promedio de los dos valores centrales.
     Por ejemplo, en la muestra 3, 9, 11, 15, la mediana es (9+11)/2=10.
     (v[4/2 -1] + v[4/2])/2 = (v[1] + v[2])/2 = (9+11)/2

    Si el vector es 3, 9, 11, 15, 16
    Si el numero de observaciones es impar,
     Por ejemplo, en la muestra 3, 9, 11, 15, 16, la mediana es 11
     v[4/2] = v[2] = 11
     */

    if (size % 2 == 0){
      mediana= ((lista[size/2 - 1] + lista[size/2]) / 2);
    }
    else{
      mediana = lista[(size - 1)/2];
    }
    return mediana;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    double mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
    return 0;
}
