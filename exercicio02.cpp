#include <iostream>
using namespace std;
bool comparacao(int x) {
    if (x == 0)
        return true;
    else
        return false;
}
int main() {
    int a, b;

    cout << "Insira o numero: ";
    cin >> a;

    int maior = comparacao(a);

    if (maior == 1){
        cout << "O numero eh igual a 0" << endl;
    }    
    
    else{
      if (a>0)
      {
         cout << "O numeros eh maior que 0" << endl;
      }
      else{
      cout << "O numeros eh menor que 0" << endl;
      }
      
    }
 
}