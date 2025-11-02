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
   break;
  }
}