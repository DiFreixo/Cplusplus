#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int somarNumeros(int numeroRecebido);

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

 /*Exercício de Recursividade
  Crie um algoritmo usando Recursividade que solicite ao utilizador que digite
  um número e em seguida, calcule a somatória do 1 ao número que o utilizador 
  digitou.
  
  Ex: Se digitar 5: 1 + 2 + 3 + 4 + 5 = 15
*/


	int numero, soma;
	cout << "Digite um número: ";
	cin >> numero;
	
	soma = somarNumeros(numero);
	
	cout << "A soma dos números de 1 até " << numero << " é: " << soma <<endl;
	
		
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
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
