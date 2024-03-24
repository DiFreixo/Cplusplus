#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exerc�cio
	  Crie um algoritmo que contenha um vetor de 5  n�meros interios,
	  depois solicite ao utilizador a entrada desses n�meros e no final
	  mostre quantos n�meros possuem valor maior, menor e igual ao primeiro 
	  n�mero do vetor.
	*/

	int vetor[5], i, maior, menor, igual;
	int qtdMaior, qtdMenor, qtdIgual;
	qtdMaior=0;
	qtdMenor=0;
	qtdIgual=0; 
	
	for(i=0; i<5; i++){
		
		cout << "Digite um n�mero [" << i+1 << "]: \n";
		cin >> vetor[i];
		
		if(i==0){
			maior=vetor[i];
			menor=vetor[i];
			igual=vetor[i];
						
		}else if(vetor[i] > maior){
			qtdMaior = qtdMaior +1;
			
		}else if(vetor[i] < menor){
			qtdMenor = qtdMenor +1;
			
		}else{
			qtdIgual = qtdIgual +1;
		}
		
	}
	
	cout << "Quantidade de n�meros maiores, menores ou iguais a " << vetor[0] << ":" << endl;
	cout << "Maior: " << qtdMaior << endl;
	cout << "Menor: " << qtdMenor << endl;
	cout << "Igual: " << qtdIgual << endl;
	 
	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 
