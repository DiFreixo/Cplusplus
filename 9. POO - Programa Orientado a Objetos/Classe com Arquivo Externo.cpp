#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

#include "Aluno.h"

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	Aluno *dadosAluno1=new Aluno(1);
	Aluno *dadosAluno2=new Aluno(2);
	Aluno *dadosAluno3=new Aluno(3);
	Aluno *dadosAluno4=new Aluno(4);
	
	dadosAluno1->exibirDadosNoEcra();
	dadosAluno2->exibirDadosNoEcra(); 
	dadosAluno3->exibirDadosNoEcra(); 
	dadosAluno4->exibirDadosNoEcra();  

	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 
