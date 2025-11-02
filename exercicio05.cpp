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