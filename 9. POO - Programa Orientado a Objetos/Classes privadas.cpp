#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

#include "AlunoPrivado.h"

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	Aluno *dadosAluno=new Aluno(1);
	//imprimir dados no ecr�
	dadosAluno->exibirDadosNoEcra();
	
	dadosAluno->nome = "Pedro Ramos"; //estou a alterar o nome que � p�blico
	dadosAluno->setidade(23);
	dadosAluno->exibirDadosNoEcra();
	
	cout << "\n\n ................. Imprime P�blicos e Privados ........................ \n\n";

	cout << dadosAluno->nome <<"\n";
	cout << dadosAluno->getidade() <<"\n";
	
	
	
	
	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 
