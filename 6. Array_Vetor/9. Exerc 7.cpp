#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/* Exerc�cio
		Crie uma matriz 3x3 e solicite que o utilizador digite os n�meros.
		Em seguida, conte e imprima quantos n�meros maiores que 5 existem na matriz.	
	*/
	
	int matriz[3][3], l, c, contador;
	
	//preenche a matriz
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			
			cout << "Digite um valor [" << l << "][" << c << "]: \n";
			cin >> matriz[l][c];
		}
	}
	
	
	//mostra a matriz
	cout << "\nValores da Matriz: \n";
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			
			if(matriz[l][c]<10){
				
				cout << "0";
			} 
			
        	cout <<  matriz[l][c] << " ";
		}
		
		cout << "\n";
	}
	
	
	//Verificar quantos n�meros maiores que 5 existem
	
	contador = 0;
	cout << "\n\nN�meros da matriz maiores que 5:\n";
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			
			if(matriz[l][c] > 5){
				contador ++;
				cout << matriz[l][c] << endl;
			}       	
        	
		}
	}

	cout << "\nQuantidade de n�meros maiores que 5: " << contador << "\n";

	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 
