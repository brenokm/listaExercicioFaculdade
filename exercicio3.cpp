#include <iostream>
//Faça um algoritmo que leia um número inteiro e retorne se o número é par o ímpar.
using namespace std;
int comparacao(int x) {
    if (x % 2 > 0){
        return x;
    }      
}
int main() {
    int a, b;

    cout << "Insira o numero: ";
    cin >> a;

    int maior = comparacao(a);

    if (maior == 0){
        cout << "O numero eh par" << endl;
    }    
    else{
        cout << "O numero eh impar" << endl;
    }
}
