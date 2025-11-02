/*1) Escreva um algoritmo que leia dois números e exiba o maior deles.
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
    return 0;
}

2) Escreva um algoritmo para ler um número inteiro e retornar se ele é maior, igual ou menor que zero.
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
3) Faça um algoritmo que leia um número inteiro e retorne se o número é par o ímpar.

#include <iostream>
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


4) Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que
80, menor que 25 ou igual a 40.

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

5) Elabore um algoritmo para testar se uma senha digita é igual a “batata frita”. Se a senha estiver correta
escreva “Acesso permitido”, do contrário emita a mensagem “Você não tem acesso ao sistema”.
#include <iostream>
using namespace std;

bool comparacao(string x){
  return(x == "batata frita")?false:true;

  //return(x == "batata frita")?true:false;
  //assim retorna false
  //return(x == "batata frita")?false:true;
  //assim retorna true(??????)
}

int main() {
string a;

cout<<"Digite a senha: ";
cin>>a;

bool senha = comparacao(a);

if(senha){
  cout<<"Acesso permitido"<<endl;
}
else{
  cout<<"Acesso negado"<<endl;
}

}

6) Escrever um algoritmo que leia três valores inteiros distintos e os escreva em ordem crescente.
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
7) Escrever um algoritmo para uma empresa que decide dar um reajuste a seus funcionários de acordo
com os seguintes critérios:

#include <iostream>

using namespace std;

int main() {
    string matriz[4][2]; 

    for (int l = 0; l < 4; l++) {  
        cout << "Digite o NOME do funcionario " << l+1 << ": ";
        cin >> matriz[l][0]; 
        cout << "Digite o SALARIO do funcionario " << l+1 << ": ";
        cin >> matriz[l][1]; 

        cout << endl;
    }
    
     //salario minimo 2025 R$ 1.518,00
    float salario, minimo, resultado;
    
    cout<<"digite o valotr do salario minimo: ";

    minimo = 1518.00;
    cout<<"digite o salario do funcionario LUCAS: ";
    cin>>salario;

    
   if(salario <= minimo * 3){
    cout << "parabens, voce teve 50 porcento de aumento de salario!!" << endl;
    cout << "salario antigo: " << salario << endl;
    cout << "Valor da porcentagem: " << (resultado = salario * 0.5) << endl;
    cout << "salario + aumento: " << salario + resultado << endl;
}
    else if((salario>minimo *3) &&  (salario<=minimo * 10)){
    cout << "parabens, voce teve 20 porcento de aumento de salario!!" << endl;
    cout << "salario antigo: " << salario << endl;
    cout << "Valor da porcentagem: " << (resultado = salario * 0.2) << endl;
    cout << "salario + aumento: " << salario + resultado << endl;
  }
    else if((salario>minimo *10) &&  (salario<=minimo * 20)){
    cout << "parabens, voce teve 15 porcento de aumento de salario!!" << endl;
    cout << "salario antigo: " << salario << endl;
    cout << "Valor da porcentagem: " << (resultado = salario * 0.15) << endl;
    cout << "salario + aumento: " << salario + resultado << endl; 
  }
    else{
    cout << "parabens, voce teve 10 porcento de aumento de salario!!" << endl;
    cout << "salario antigo: " << salario << endl;
    cout << "Valor da porcentagem: " << (resultado = salario * 0.10) << endl;
    cout << "salario + aumento: " << salario + resultado << endl;
    }
    
}


8) Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for
menor que R$ 20,00; caso contrário, o lucro será de 30%. Elabore um algoritmo que leia o valor do
produto e imprima o valor de venda para o produto.

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



********************9) A concessionária de veículos “CARANGO VELHO” está vendendo os seus veículos com desconto.
Faça um algoritmo que calcule e exiba o valor do desconto e o valor a ser pago pelo cliente. O
desconto deverá ser calculado de acordo com o ano do veículo. Até 2000 - 12% e acima de 2000 - 7%.










10) Faça um algoritmo que receba um número e diga se este número está no intervalo entre 100 e 200.


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

***********11) O Botafogo Futebol Clube deseja aumentar o salário de seus jogadores. O reajuste deve obedecer a
seguinte tabela:

SALÁRIO ATUAL (R$)      AUMENTO
0,00 a 5.000,00         20%
5.000,01 a 15.000,00    10%
acima de 15.000,00      0%

Escrever um algoritmo que leia o nome e o salário atual de um jogador, e exiba o nome, o salário atual e o
salário reajustado.


**************12) Faça um algoritmo para calcular a conta final de um hóspede de um hotel fictício,
considerando que:
▪ Serão lidos o nome do hóspede, o tipo do apartamento utilizado (A, B, C ou D), o número de diárias
utilizadas pelo hóspede e o valor do consumo interno do hóspede;
▪ O valor da diária é determinado pela seguinte tabela:

TIPO DO APTO. VALOR DA DIÁRIA (R$)
A 150,00
B 100,00
C 75,00
D 50,00

▪ O valor total das diárias é calculado pela multiplicação do número de diárias utilizadas pelo valor da
diária;
▪ O subtotal é calculado pela soma do valor total das diárias e o valor do consumo interno;
▪ O valor da taxa de serviço equivale a 10% do subtotal;
▪ A total geral resulta da soma do subtotal com a taxa de serviço.
▪ Escreva a conta final contendo: o nome do hóspede, o tipo do apartamento, o número de diárias
utilizadas, o valor unitário da diária, o valor total das diárias, o valor do consumo interno, o subtotal, o
valor da taxa de serviço e o total geral.*/