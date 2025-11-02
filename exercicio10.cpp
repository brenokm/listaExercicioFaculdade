#include <iostream>
using namespace std;

string comparacao(int y) {
    if (y>99&&y<201) {
        return "o numero "+ to_string(y)+ " esta entre 100 e 200"; 
    } else {
        return "o numero "+ to_string(y)+" nao esta entre 100 e 200";
    }
}

int main() {

    int numero;
   cout<<"insira o numero: ";
   cin>>numero;

   string verific = comparacao (numero);
   cout << verific << endl;
}