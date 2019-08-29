#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


double promedio(vector<int> &lista);
vector <int> leerConsola();

vector<int> leerConsola() {
  vector<int> nums;
  int x;

    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    do {
      cout << "Ingrese un entero positivo, escriba -1 si ya no quiere ingresar mas numeros:";
      cin >> x;
      nums.insert(nums.end(), x);

    } while (x != -1);
    return nums;
}


double promedi(vector<int> lista) {
  double promedio=0;
    /*
    El promedio es la suma de todos los elementos dividido entre el total de elementos
     */
    for (int i=0; i < lista.size();i++){
      promedio=lista[i]+promedio;
      
    }
    promedio = promedio / lista.size();
    return promedio;
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    double promedio_elemento = promedi(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
    return 0;

}
