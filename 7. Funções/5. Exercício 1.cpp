#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int somarNumeros(int numeroRecebido);

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

 /*Exerc�cio de Recursividade
  Crie um algoritmo usando Recursividade que solicite ao utilizador que digite
  um n�mero e em seguida, calcule a somat�ria do 1 ao n�mero que o utilizador 
  digitou.
  
  Ex: Se digitar 5: 1 + 2 + 3 + 4 + 5 = 15
*/


	int numero, soma;
	cout << "Digite um n�mero: ";
	cin >> numero;
	
	soma = somarNumeros(numero);
	
	cout << "A soma dos n�meros de 1 at� " << numero << " �: " << soma <<endl;
	
		
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
}


int somarNumeros(int numeroRecebido){
	
	int resultado;
	
	if(numeroRecebido==1){
		return(1);
		
	}else{
		resultado = numeroRecebido + somarNumeros(numeroRecebido -1);
		
	}
	
	return(resultado);
	
}
