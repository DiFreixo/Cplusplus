#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int verificaMenorNumero(int n1, int n2);

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exerc�cio de Fun��es 1
		Crie uma fun��o que receba dois n�meros inteiros e
		retorne o menor n�mero entre eles.
	*/
	
		int numero1, numero2, resultado;
		
		cout << "Digite o primeiro n�mero: ";
		cin >> numero1;
		cout << "Digite o segundo n�mero: ";
		cin >> numero2;
		
		resultado = verificaMenorNumero(numero1,numero2);
		
		cout << "\n\nO menor n�mero � " << resultado << "\n";

	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 

int verificaMenorNumero(int n1, int n2){
	
	if(n1>n2){
		return n2;
		
	}else{
		return n1;
	}
}
