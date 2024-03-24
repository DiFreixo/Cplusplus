#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exerc�cio
		Crie um algoritmo que contenha um vetor de 5 n�meros inteiros
		depois solicite ao utilizador que digite os 5 n�meros, em seguida
		imprima os n�meros na ordem inversa em que foram digitados.
	*/
	
	int vetor[5], contador;
	
	for(contador=0; contador<5; contador++){
		
		cout << "Digite o " << contador + 1 << " n�mero:\n";
		cin >> vetor[contador]	;
	}

	
	
	cout << "N�meros digitados na ordem inversa.\n";
	for (contador=4; contador>=0; contador-- ){
		
		cout << contador + 1 << "� n�mero: "<< vetor[contador] << endl;
	}
	


	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 
