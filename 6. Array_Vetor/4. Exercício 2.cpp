#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exercício
		Crie um algoritmo que contenha um vetor de 5 valores inteiros
		depois solicite ao utilizador que digite os 5 números para preencher
		esse vetor em seguida exiba no ecrã os valores ímpares desse vetor.
	*/

	int vetor[5], i, impar[5], contador;
	
	for(i=0; i<5; i++){
		
		cout << "Digite o " << i+1 << "º número:\n";
		cin >> vetor[i];
		
		if(vetor[i]%2!=0){
			impar[contador] = vetor[i];
			contador++;
		}
	}
	
	
	cout << "Os números ímpares do vetor são:\n";
	for(i=0; i<contador; i++){
		
		cout << impar[i] << endl;
	}
	
	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 
