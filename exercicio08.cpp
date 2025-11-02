#include <iostream>
using namespace std;

int comparacao(int y) {
    if (y >= 20) {
        return y* 0.45; 
    } else {
        return y* 0.30; 
    }
}

int main() {
    int produto;
    cout << "Preco do produto: ";
    cin >> produto;
    int venda= comparacao(produto);
    cout << "O valor de venda eh R$ " << venda+ produto << endl;

}
