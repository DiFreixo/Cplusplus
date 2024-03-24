#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

void contarAteDez(int numero, int incremento=1);

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");
	
	int contador;
	contador=1;
	 
	cout << " -------- Resultado com WHILE ------ \n";
	
	while(contador<=10){
		cout << "N�mero while: " << contador << "\n";
		contador++;
	}
	
	cout << "\n\n";
//----------------------------------------------------------------

	contarAteDez(30);



	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 

void contarAteDez(int numero, int incremento){
	cout << "N�mero Fun��o: " << incremento << "\n";
	
	if(numero>incremento){
		
		contarAteDez(numero, ++incremento);
	}
	
}
