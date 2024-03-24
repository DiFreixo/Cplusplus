#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exerc�cio
		Crie um algoritmo que contenha um vetor de 5 valores inteiros
		depois solicite ao utilizador que digite os 5 n�meros para preencher
		esse vetor em seguida exiba no ecr� os valores �mpares desse vetor.
	*/

	int vetor[5], i, impar[5], contador;
	
	for(i=0; i<5; i++){
		
		cout << "Digite o " << i+1 << "� n�mero:\n";
		cin >> vetor[i];
		
		if(vetor[i]%2!=0){
			impar[contador] = vetor[i];
			contador++;
		}
	}
	
	
	cout << "Os n�meros �mpares do vetor s�o:\n";
	for(i=0; i<contador; i++){
		
		cout << impar[i] << endl;
	}
	
	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 
