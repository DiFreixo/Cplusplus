#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/* Exercício
		Crie uma matriz 3x3 e solicite que o utilizador digite os números.
		Em seguida, conte e imprima quantos números maiores que 5 existem na matriz.	
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
	
	
	//Verificar quantos números maiores que 5 existem
	
	contador = 0;
	cout << "\n\nNúmeros da matriz maiores que 5:\n";
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			
			if(matriz[l][c] > 5){
				contador ++;
				cout << matriz[l][c] << endl;
			}       	
        	
		}
	}

	cout << "\nQuantidade de números maiores que 5: " << contador << "\n";

	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 
