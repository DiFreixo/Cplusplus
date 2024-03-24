#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

#include "AlunoPrivado.h"

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

	Aluno *dadosAluno=new Aluno(1);
	//imprimir dados no ecrã
	dadosAluno->exibirDadosNoEcra();
	
	dadosAluno->nome = "Pedro Ramos"; //estou a alterar o nome que é público
	dadosAluno->setidade(23);
	dadosAluno->exibirDadosNoEcra();
	
	cout << "\n\n ................. Imprime Públicos e Privados ........................ \n\n";

	cout << dadosAluno->nome <<"\n";
	cout << dadosAluno->getidade() <<"\n";
	
	
	
	
	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 
