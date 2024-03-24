#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exercício Enum
		Crie um algoritmo usando o enum que armazene as letras do alfabeto de A a K
		e após isso use um for para imprimir os números de 0 a 10 usando o enum.
	*/
	
	enum Letras{A,B,C,D,E,F,G,H,I,J,K};
	
	int contador;
	
	for(contador=A; contador<=K; contador++){
		cout << "Posição " << contador <<endl;
	}
	
	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 
