#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int verificaMenorNumero(int n1, int n2);

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exercício de Funções 1
		Crie uma função que receba dois números inteiros e
		retorne o menor número entre eles.
	*/
	
		int numero1, numero2, resultado;
		
		cout << "Digite o primeiro número: ";
		cin >> numero1;
		cout << "Digite o segundo número: ";
		cin >> numero2;
		
		resultado = verificaMenorNumero(numero1,numero2);
		
		cout << "\n\nO menor número é " << resultado << "\n";

	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 

int verificaMenorNumero(int n1, int n2){
	
	if(n1>n2){
		return n2;
		
	}else{
		return n1;
	}
}
