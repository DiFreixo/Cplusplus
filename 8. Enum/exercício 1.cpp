#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exerc�cio Enum
		Crie um algoritmo usando o enum que armazene as letras do alfabeto de A a K
		e ap�s isso use um for para imprimir os n�meros de 0 a 10 usando o enum.
	*/
	
	enum Letras{A,B,C,D,E,F,G,H,I,J,K};
	
	int contador;
	
	for(contador=A; contador<=K; contador++){
		cout << "Posi��o " << contador <<endl;
	}
	
	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 
