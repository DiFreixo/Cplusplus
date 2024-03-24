#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exercício
		Crie um algoritmo que contenha um vetor de 5 números inteiros
		depois solicite ao utilizador que digite os 5 números, em seguida
		imprima os números na ordem inversa em que foram digitados.
	*/
	
	int vetor[5], contador;
	
	for(contador=0; contador<5; contador++){
		
		cout << "Digite o " << contador + 1 << " número:\n";
		cin >> vetor[contador]	;
	}

	
	
	cout << "Números digitados na ordem inversa.\n";
	for (contador=4; contador>=0; contador-- ){
		
		cout << contador + 1 << "º número: "<< vetor[contador] << endl;
	}
	


	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 
