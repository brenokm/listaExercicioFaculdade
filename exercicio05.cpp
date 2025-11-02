#include <iostream>
using namespace std;
//Elabore um algoritmo para testar se uma senha digita é igual a “batata frita”. Se a senha estiver correta escreva “Acesso permitido”, do contrário emita a mensagem “Você não tem acesso ao sistema”.
string comparacao(string x){
  if(x =="batata frita"){
   return "Acesso permitido";
  }
  else{
  return "Voce nao tem acesso ao sistema";
  }
}

int main() {
string a;

cout<<"Digite a senha: ";
getline(cin, a);
// "cin>>" só salva a primeira palavra

string senha = comparacao(a);

cout<<senha;

}