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