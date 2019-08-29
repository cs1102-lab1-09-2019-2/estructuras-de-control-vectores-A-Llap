/*

 Leer tres numeros del usuario separados por espacio: 10 15 20
 Y encuentra el mayor valor: 30

 */
#include <iostream>

using namespace std;

int main() {
    double a, b, c, mayor;
    cin >> a>>b>>c;
    if (a<b){
      mayor = b;
    }else{
      mayor = a;
    }
    if (mayor < c){
      mayor = c;
    cout << "Mayor: " << mayor;
    }else{
      cout << "Mayor: " << mayor;
    }

return 0;
}
