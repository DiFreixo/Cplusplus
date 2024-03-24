#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

/*Precisamos prototipar as fun��es para que elas funcionem, ou seja, presisamos
apresentar a fun��o para o programa.

void � tipo de retorno  + Nome da fun��o e os argumentos
*/
void somarNumeros(int numero1, int numero2);
int somarTresNumeros(int numero1, int numero2, int numero3);
void funcaoMensagem();


int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	funcaoMensagem();
	
	somarNumeros(12, 20);

	int n1, n2, n3, soma;
	
	cout << "\nDigite o primeiro n�mero: ";
	cin >> n1;
	cout << "Digite o segundo n�mero: ";
	cin >> n2;
	cout << "Digite o terceiro n�mero: ";
	cin >> n3;
	
	soma = somarTresNumeros(n1, n2, n3);
	
	cout << "Total soma 3 n�meros: " << soma << endl;
	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
} 

 int somarTresNumeros(int numero1, int numero2, int numero3){
 	
 	return numero1 + numero2 + numero3;
 	
 }



void somarNumeros (int numero1, int numero2){
	
	cout << "N�mero 1: " << numero1 << endl;
	cout << "N�mero 2: " << numero2 << endl;
	cout << "Total: " << numero1 + numero2 << endl;
}


void funcaoMensagem(){
	
	cout << "Curso de L�gica de Progrmama��o!\n\n";
}
