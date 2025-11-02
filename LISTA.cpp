

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


















********************9) A concessionária de veículos “CARANGO VELHO” está vendendo os seus veículos com desconto.
Faça um algoritmo que calcule e exiba o valor do desconto e o valor a ser pago pelo cliente. O
desconto deverá ser calculado de acordo com o ano do veículo. Até 2000 - 12% e acima de 2000 - 7%.

#include <iostream>
using namespace std;

float coragem(float y) {
    if(y>=2000){
      return y*0.12;
    }
    else{
     return y*0.07;
    }
}

int main() {
    

    float entrada,PEUGEOT= 19000.00,CHEVETAO = 5000.00, CORSA = 11514.00,MAREA =15000.00;
    int escolha;
    cout<<"-----CARANGO VELHO-----"<<endl;
    cout<<"1-Peugeot 307"<<endl;
    cout<<"2-Chevetao"<<endl;
    cout<<"3-Corsa"<<endl;
    cout<<"4-Fiat Marea"<<endl;
    cout<<"-----CARANGO VELHO-----"<<endl;
    cout<<"Escolha: "<<endl; 
    cin>>escolha;
     
    switch (escolha)
    {
    case 1:{
    cout<<"Peugeot"<<endl;
    cout<<"Preco R$19.000."<<endl;
    cout<<"Infome o valor de entrada: ";
    cin>>entrada;

    float desconto = coragem(entrada);

    if (entrada>=2000){
      cout<<"Voce teve 12 porcento de desconto!!!"<<endl;
      cout <<"Valor do desconto: R$ " << desconto << endl;
      cout<<"Preco restante: "<< PEUGEOT-desconto;      
    }
    else{
      cout<<"Voce teve 7 porcento de desconto!!!"<<endl;
      cout<<desconto<<endl;
      cout<<"Preco restante: "<< PEUGEOT-desconto;        
    }

  }break;




   case 2:{
   
    cout<<"Chevette"<<endl;
    cout<<"Preco R$: "<<CHEVETAO<<endl;
    cout<<"Infome o valor de entrada: ";
    cin>>entrada;

    float desconto = coragem(entrada);

    if (entrada>=2000){
      cout<<"Voce teve 12 porcento de desconto!!!"<<endl;
      cout <<"Valor do desconto: R$ " << desconto << endl;
      cout<<"Preco restante: "<< CHEVETAO-desconto;      
    }
    else{
      cout<<"Voce teve 7 porcento de desconto!!!"<<endl;
      cout<<desconto<<endl;
      cout<<"Preco restante: "<< CHEVETAO-desconto;        
    }

    
  }break;
    case 3:{
      
    cout<<"Corsa"<<endl;
    cout<<"Preco R$: "<<CORSA<<endl;
    cout<<"Infome o valor de entrada: ";
    cin>>entrada;

    float desconto = coragem(entrada);

    if (entrada>=2000){
      cout<<"Voce teve 12 porcento de desconto!!!"<<endl;
      cout <<"Valor do desconto: R$ " << desconto << endl;
      cout<<"Preco restante: "<< CORSA-desconto;      
    }
    else{
      cout<<"Voce teve 7 porcento de desconto!!!"<<endl;
      cout<<desconto<<endl;
      cout<<"Preco restante: "<< CORSA-desconto;        
    }

    }
    break;
    case 4:{
      
    cout<<"FIAT Marea"<<endl;
    cout<<"Preco R$: "<<MAREA<<endl;
    cout<<"Infome o valor de entrada: ";
    cin>>entrada;

    float desconto = coragem(entrada);

    if (entrada>=2000){
      cout<<"Voce teve 12 porcento de desconto!!!"<<endl;
      cout <<"Valor do desconto: R$ " << desconto << endl;
      cout<<"Preco restante: "<< MAREA-desconto;      
    }
    else{
      cout<<"Voce teve 7 porcento de desconto!!!"<<endl;
      cout<<desconto<<endl;
      cout<<"Preco restante: "<< MAREA-desconto;        
    }

    }
    break;


    default:{
    cout<<"fora do horario comercial";}
    break;
    }
    
}











***********11) O Botafogo Futebol Clube deseja aumentar o salário de seus jogadores. O reajuste deve obedecer a
seguinte tabela:

SALÁRIO ATUAL (R$)      AUMENTO
0,00 a 5.000,00         20%
5.000,01 a 15.000,00    10%
acima de 15.000,00      0%

Escrever um algoritmo que leia o nome e o salário atual de um jogador, e exiba o nome, o salário atual e o
salário reajustado.
#include <iostream>
using namespace std;

float calculo(float y)
{
  if (y >= 0.0 && y <= 5000.00)
  {
    return y * 0.20;
  }
  else if (y > 5000.00 && y <= 15000.00)
  {
    return y * 0.10;
  }
  else
  {
    return 0.0;
  }
}

int main()
{

  string nome;
  float salario;

  cout << "Nome do jogador: ";
  cin >> nome;
  cout << "Salario atual do jogador: ";
  cin >> salario;

  if (salario == 0.0)
  {
    cout << "salario nulo" << endl;
  }
  else
  {

    float reajuste = calculo(salario);

    cout << "jogador: " << nome << endl;
    cout << "salario atual: " << salario << endl;
    cout << "salario reajustado: " << salario + reajuste << endl;
    if (reajuste == 0.0)
    {
      cout << "sem porcentagem para reajuste" << endl;
    }
  }
}






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
valor da taxa de serviço e o total geral.


#include <iostream>
using namespace std;

class despesas
{
public:
  float calcular(float x)
  {
    return x * 0.10;
  }
};

int main()
{
  despesas obj;
  string nome;
  char tipo;
  int diaria;
  float A = 150.00, B = 100.00, C = 75.00, D = 50.00, diasHotel, interno;

  cout << "Nome do Hospede: ";
  cin >> nome;
  cout << "Tipo de apartamento do Hospede: " << endl;
  cout << "A - 150,00" << endl;
  cout << "B - 100,00" << endl;
  cout << "C - 75,00" << endl;
  cout << "D - 50,00" << endl;
  cout << "Escolha: ";
  cin >> tipo;
  cout << "Informe o número de diárias: ";
  cin >> diaria;
  cout << "Qual foi o valor do consumo interno?";
  cin >> interno;

  switch (tipo)
  {
  case 'A':
  case 'a':
    if (interno != 0.0)
    {
      
      cout << "Nome do hospede: " << nome << endl;
      cout << "Tipo de apartamento: A" << endl;
      cout << "Valor do consumo interno: "<<interno<<endl;
      diasHotel = interno+(A * diaria);
      cout << "Valores dos dias no estabelecimento + consumo interno: " << diasHotel <<endl;
      float taxas = obj.calcular(diasHotel);
      cout << "Valor da taxa de servico: " << taxas << endl;
      cout << "Valores + taxa de servico de 10%: " << diasHotel + taxas<< endl;
    }
    else
    {
      cout << "nome do hospede: " << nome << endl;
      cout << "tipo de apartamento: B" << endl;
      diasHotel = A * diaria;
      cout << "Valores dos dias no estabelecimento: " << diasHotel <<endl;
      float taxas = obj.calcular(diasHotel);
      cout << "Valor da taxa de servico: 0" << endl;
      cout << "Valores + taxa de servico de 10%: " << diasHotel + 0.0<< endl;
    }
  break;


  case 'B':
  case 'b':
   if (interno != 0.0)
    {
      
      cout << "Nome do hospede: " << nome << endl;
      cout << "Tipo de apartamento: B" << endl;
      cout << "Valor do consumo interno: "<<interno<<endl;
      diasHotel = interno+(B * diaria);
      cout << "Valores dos dias no estabelecimento + consumo interno: " << diasHotel <<endl;
      float taxas = obj.calcular(diasHotel);
      cout << "Valor da taxa de servico: " << taxas << endl;
      cout << "Valores + taxa de servico de 10%: " << diasHotel + taxas<< endl;
    }
    else
    {
      cout << "nome do hospede: " << nome << endl;
      cout << "tipo de apartamento: B" << endl;
      diasHotel = B * diaria;
      cout << "Valores dos dias no estabelecimento: " << diasHotel <<endl;
      float taxas = obj.calcular(diasHotel);
      cout << "Valor da taxa de servico: 0" << endl;
      cout << "Valores + taxa de servico de 10%: " << diasHotel + 0.0<< endl;
    }
  break;
  case 'C':
  case 'c':
 if (interno != 0.0)
    {
      
      cout << "Nome do hospede: " << nome << endl;
      cout << "Tipo de apartamento: C" << endl;
      cout << "Valor do consumo interno: "<<interno<<endl;
      diasHotel = interno+(C * diaria);
      cout << "Valores dos dias no estabelecimento + consumo interno: " << diasHotel <<endl;
      float taxas = obj.calcular(diasHotel);
      cout << "Valor da taxa de servico: " << taxas << endl;
      cout << "Valores + taxa de servico de 10%: " << diasHotel + taxas<< endl;
    }
    else
    {
      cout << "nome do hospede: " << nome << endl;
      cout << "tipo de apartamento: C" << endl;
      diasHotel = C* diaria;
      cout << "Valores dos dias no estabelecimento: " << diasHotel <<endl;
      float taxas = obj.calcular(diasHotel);
      cout << "Valor da taxa de servico: 0" << endl;
      cout << "Valores + taxa de servico de 10%: " << diasHotel + 0.0<< endl;
    }
    break;
  case 'D':
  case 'd':
    if (interno != 0.0)
    {
      
      cout << "Nome do hospede: " << nome << endl;
      cout << "Tipo de apartamento: D" << endl;
      cout << "Valor do consumo interno: "<<interno<<endl;
      diasHotel = interno+(D * diaria);
      cout << "Valores dos dias no estabelecimento + consumo interno: " << diasHotel <<endl;
      float taxas = obj.calcular(diasHotel);
      cout << "Valor da taxa de servico: " << taxas << endl;
      cout << "Valores + taxa de servico de 10%: " << diasHotel + taxas<< endl;
    }
    else
    {
      cout << "nome do hospede: " << nome << endl;
      cout << "tipo de apartamento: D" << endl;
      diasHotel = D * diaria;
      cout << "Valores dos dias no estabelecimento: " << diasHotel <<endl;
      float taxas = obj.calcular(diasHotel);
      cout << "Valor da taxa de servico: 0" << endl;
      cout << "Valores + taxa de servico de 10%: " << diasHotel + 0.0<< endl;
    }
    break;
  default:
    cout << "Tipo inválido" << endl;
   
  }
}
