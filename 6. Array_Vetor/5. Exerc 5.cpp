#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exerc�cio
	  Crie um algoritmo que leia uma matriz de 2 x 2
	  usando um comando for e multiplique os elementos por 2 
	  e emprime o resultado.
	*/
	
	int matriz[2][2], linha, coluna;
	
	// Preencher a matriz
	for(linha=0; linha<2; linha++){
		for(coluna=0; coluna<2; coluna++){
		
		 cout << "Digite um valor [" << linha << "]["<< coluna << "]:\n";	
	     cin >> matriz[linha][coluna];
	     
	     }
	     
	     //cout << "\n";
	}


	// Mostrar a matriz
	cout << "Valores da Matriz:\n";
	for(linha=0; linha<2; linha++){
		for(coluna=0; coluna<2; coluna++){
		
		 cout << matriz[linha][coluna] << " ";
	     
	     }   
	     cout << "\n";
	}
	
	
		// Matiz multiplicada por 2
	cout << "Valores da Matriz multiplicados por 2:\n";
	for(linha=0; linha<2; linha++){
		for(coluna=0; coluna<2; coluna++){
		
		 cout << 2 * matriz[linha][coluna] << " ";
	     
	     }   
	     cout << "\n";
	}


	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 
