#include <iostream>
/*Escrever um algoritmo para uma empresa que decide dar um reajuste a seus funcionários de acordo
com os seguintes critérios:
I. 50% para aqueles que ganham menos do que três salários mínimos;
II. 20% para aqueles que ganham entre três até dez salários mínimos;
III. 15% para aqueles que ganham acima de dez até vinte salários mínimos;
IV. 10% para os demais funcionários.
Obs: Leia o valor do salário mínimo e imprima os valores dos reajustes obedecendo os critérios*/
using namespace std;

int main() {
    /*string matriz[4][2]; 

    for (int l = 0; l < 4; l++) {  
        cout << "Digite o NOME do funcionario " << l+1 << ": ";
        cin >> matriz[l][0]; 
        cout << "Digite o SALARIO do funcionario " << l+1 << ": ";
        cin >> matriz[l][1]; 

        cout << endl;
    }
    
     //salario minimo 2025 R$ 1.518,00
    float salario, minimo, resultado;*/
    
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
