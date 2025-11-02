
#include <iostream>
using namespace std;

bool comparacao(int x) {
    if ((x >24) &&(x<40) || (x>40) &&(x<81)){
        return x;
    } 

}
int main() {
    int a;

    cout << "Insira o numero: ";
    cin >> a;

    int maior = comparacao(a);

    if (maior == 1){
        cout << "O numero nao se encaixa em nenhum dos requisitos" << endl;
    }    
    else{
       if(a==40){
      cout << "O numero eh igual a 40" << endl;
       }
       else if(a<25){
        cout << "O numero menor que 25" << endl;

       }
       else{
        cout << "O numero maior que 80" << endl;
       }
    }
}