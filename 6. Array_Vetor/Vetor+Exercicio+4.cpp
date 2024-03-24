#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	/*Exerc�cio
		Crie um algoritmo que contenha um vetor de 5 n�meros inteiros,  
		depois solicite ao usu�rio a entrada desses n�meros e no final 
		mostre quantos n�meros possuem valor maior, menor e igual ao primeiro n�mero do vetor.

	*/
	
	int vetor[5], posicao, maior, menor, igual;
	
	maior = 0;
	menor = 0;
	igual = 0;	
	
	//for = para
	for( posicao = 0; posicao < 5; posicao++ ){
		
		cout << "Digite o n�mero da posi��o " << posicao << ": \n";
		cin >> vetor[posicao];
		
	}
	
	
	for( posicao = 0; posicao < 5; posicao++ ){
		
		//if = se
		//Contando valores maiores que o primeiro n�mero
		if( vetor[posicao] > vetor[0]){ //Posi��o 0 � o primeiro n�mero
			
			maior++;
			
		}
		
		//Contando valores maiores que o primeiro n�mero
		if( vetor[posicao] < vetor[0]){ //Posi��o 0 � o primeiro n�mero
			
			menor++;
			
		}
		
		//Contando valores IGUAIS que o primeiro n�mero
		if( vetor[posicao + 1] == vetor[0]){ //Posi��o 0 � o primeiro n�mero
			
			igual++;
			
		}
		
		cout << "Maiores: " << vetor[posicao] << "\n";
		cout << "Menores: " << vetor[posicao] << "\n";
		cout << "Iguais: " << vetor[posicao + 1] << "\n";
		
	}
	
	cout << "\n\nTotal de n�meros maiores que " << vetor[0] << ": " << maior;
	cout << "\nTotal de n�meros menores que " << vetor[0] << ": " << menor;
	cout << "\nTotal de n�meros iguais a " << vetor[0] << ": " << igual << "\n";
			
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}
