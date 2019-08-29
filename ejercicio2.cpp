#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


int moda(vector<int> &lista);
vector <int> leerConsola();

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

int moda(vector<int> &lista) {
  int mayor=0, numrepeticiones, indicemoda;
    /*
    La moda es el elemento que mas se repite en la lista de elementos
     */
    for(int i=0 ; i<lista.size() ; i++){
        numrepeticiones=0;
        for(int j=0 ; j<lista.size() ; j++){
            if(lista[i]==lista[j] && i!=j){
                numrepeticiones++;
            }               
        }
        if(numrepeticiones>=mayor){
        mayor=numrepeticiones;//guardamos el mayor por el momento
        indicemoda=i;    
        }
    }
    return lista[indicemoda];
}


int main() {
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}
