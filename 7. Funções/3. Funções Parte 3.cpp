#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

//prototipa = Apresentar
void funcaoNome(string nome="Diana");
void funcaoIdade(int idade=24);

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

 //Ao inv�s de passar os parametros aqui, omitimos os valores e colocamos
 //o valor na hora de prototipar
	funcaoNome();
	funcaoIdade();

	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 

void funcaoNome(string nome){
	
	cout << "Nome: " << nome << "\n";
}


void funcaoIdade(int idade){
	
	cout << "Idade: " << idade << "\n";
}


