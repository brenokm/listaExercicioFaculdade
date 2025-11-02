#include <iostream>
using namespace std;
/*O Botafogo Futebol Clube deseja aumentar o salário de seus jogadores. O reajuste deve obedecer a
seguinte tabela:
________________________________
|SALÁRIO ATUAL (R$)    |AUMENTO|
|0,00 a 5.000,00       |20%    |
|5.000,01 a 15.000,00  |10%    |
|acima de 15.000,00    |0%     |

Escrever um algoritmo que leia o nome e o salário atual de um jogador, e exiba o nome, o salário atual e o
salário reajustado.*/
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