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