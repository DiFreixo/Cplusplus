#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");


	cout << "\n ------- Exemplo 1 ------ \n\n";
	
	int matriz[2][3];
	int linha, coluna;
	
	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[0][2] = 3;
	matriz[1][0] = 4;
	matriz[1][1] = 5;
	matriz[1][2] = 6;
	
	for(linha=0; linha<2; linha++){
		
		for(coluna=0; coluna<3; coluna++){
			
				cout << matriz[linha][coluna] << " ";
			
		}
		
		cout << "\n";
	}
	
	
	cout << "\n\n ------- Exemplo 2 ------ \n\n";
	
	
	string matrizLetras[2][3];
	int linha1, coluna1;
	
	matrizLetras[0][0] = "A";
	matrizLetras[0][1] = "B";
	matrizLetras[0][2] = "C";
	matrizLetras[1][0] = "D";
	matrizLetras[1][1] = "E";
	matrizLetras[1][2] = "F";
	
	for(linha1=0; linha1<2; linha1++){
		
		for(coluna1=0; coluna1<3; coluna1++){
			
				cout << matrizLetras[linha1][coluna1] << " ";
			
		}
		
		cout << "\n";
	}
	
	
	cout << "\n\n ------- Exemplo 3 ------ \n\n";
	
	int matriz2[10][8];
	int linha2, coluna2;
	
	for(linha2=0; linha2<10; linha2++){
		for(coluna2=0; coluna2<8; coluna2++){
			
		 matriz2[linha2][coluna2] = coluna2	;
			
			cout << matriz2[linha2][coluna2] << " ";	
		}
		
		cout << "\n";
	}
	
	
	
	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 
