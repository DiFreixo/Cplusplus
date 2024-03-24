#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/* Exerc�cio
		Crie uma matriz 3x3 e solicite que o utilizador digite os n�meros.
		Em seguida, exiba a soma dos valores da matriz na diagonal.	
	*/
	
	int matriz[3][3], l, c;
	int somaDE, somaDD, i;
	
	somaDE=0;
	somaDD=0;
	
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
	
	
	//soma da diagonal Esquerda
	cout << "\nValores da diagonal esquera: \n";
	for(i=0; i<3; i++){
			
		cout << matriz[i][i] << " / ";
		
		somaDE =  somaDE + matriz[i][i];		
	}
	
	cout << "\nSoma dos valores da diagonal esquerda: " << somaDE << endl << endl;
	
	//soma da diagonal Direita

	cout << "\nValores da diagonal direita: \n";
	for(i=0; i<3; i++){
		
		cout << matriz[i][2-i] << " / ";
		
		somaDD = somaDD + matriz[i][2-i];	
			
		}
		
	
	cout << "\nSoma dos valores da diagonal direita: " << somaDD << endl << endl;	

	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 
