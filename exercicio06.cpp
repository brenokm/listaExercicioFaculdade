#include <iostream>
using namespace std;

string ordenar(int a, int b, int c) {
    int menor, meio, maior;

    if (a< b && a < c){
        menor = a;}
    else if (b < a && b < c){
        menor = b;}
    else{
        menor = c;
      }

    if (a> b && a > c){
        maior = a;
      }
    else if (b> a && b > c){
        maior = b;
      }
    else{
        maior = c;
      }

    meio = (a+ b+ c)-(menor+ maior);

    return to_string(menor) + ", " + to_string(meio) + ", " + to_string(maior);
}

int main() {
    int a, b, c;
    cout<< "Digite tres numeros diferentes: "<<endl;
    cin>> a;
    cin>> b; 
    cin>> c;

    cout << "Ordem crescente: " << ordenar(a, b, c)<<endl;
}