#include <iostream>
using namespace std;
int comparacao(int x, int y) {
    if (x > y){
        return x;
    }        
}
int main() {
    int a, b;

    cout << "Insira o primeiro numero: ";
    cin >> a;

    cout << "Insira o segundo numero: ";
    cin >> b;

    int maior = comparacao(a, b);

    if (a == b){
        cout << "Os numeros sao equivalentes." << endl;
    }    
    else{
        cout << "O maior numero eh: " << maior << endl;
    }
}