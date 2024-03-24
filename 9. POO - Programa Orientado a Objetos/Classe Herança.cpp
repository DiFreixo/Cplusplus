#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

#include "Heranca.h"

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	AlunoEscolaFilho *dadosEscolaFilho = new AlunoEscolaFilho();
	
	dadosEscolaFilho->imprimirNaTela();
	
	AlunoEscolaNeto *dadosNeto = new AlunoEscolaNeto();
	dadosNeto -> imprimirNaTela();  //imprimir no ecr�
	
	//alteramos os dados da EscolaNeto
	dadosNeto->nome="Alfredo Alves";
	dadosNeto->idade=38;
	dadosNeto -> imprimirNaTela();
	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 
