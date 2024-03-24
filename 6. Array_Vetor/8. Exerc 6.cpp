#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/* Exercício
		Crie uma matriz 3x3 e solicite que o utilizador digite os números.
		Em seguida, multiplique cada número por 2. Imprima a matriz original 
		e a matriz com os números multiplcados por 2. 	
	*/
	
	int matriz[3][3], l, c;	
	
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


	//mostra a matriz multiplicada por 2
	cout << "\nValores da Matriz multiplicados por 2: \n";
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			
        	cout <<  2*matriz[l][c] << " ";
		}
		
		cout << "\n";
	}
	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 
