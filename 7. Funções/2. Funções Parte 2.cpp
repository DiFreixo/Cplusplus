#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

void somaNumeros(int numero1, int numero2);
void somaNumeros(int valor1, int valor2, int valor3);

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	somaNumeros(10,2);
	somaNumeros(10, 5, 20);


	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 

void somaNumeros(int numero1, int numero2){
	
	cout << "Total 1: " << numero1 + numero2 << endl << endl;
}

void somaNumeros(int valor1, int valor2, int valor3){
	
	cout << "Total 2: " << valor1 + valor2 + valor3 << endl << endl;
}
