#include <iostream>
/*Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for
menor que R$ 20,00; caso contrário, o lucro será de 30%. Elabore um algoritmo que leia o valor do
produto e imprima o valor de venda para o produto.*/
using namespace std;

float comparacao(float y) {
    if (y < 20) {
        return y* 0.45; 
    } else {
        return y* 0.30; 
    }
}

int main() {
    float produto;
    cout << "Preco do produto: ";
    cin >> produto;
    float venda= comparacao(produto);
    cout << "O valor de venda eh R$ " << venda+ produto << endl;

}
