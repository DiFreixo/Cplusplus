#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

//prototipa = Apresentar
void funcaoNome(string nome="Diana");
void funcaoIdade(int idade=24);

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

 //Ao invés de passar os parametros aqui, omitimos os valores e colocamos
 //o valor na hora de prototipar
	funcaoNome();
	funcaoIdade();

	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 

void funcaoNome(string nome){
	
	cout << "Nome: " << nome << "\n";
}


void funcaoIdade(int idade){
	
	cout << "Idade: " << idade << "\n";
}


