#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

void nomeSobrenome(string txtNome, string txtSobrenome);

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exerc�cio de fun��es 2
		Crie uma fun��o que receba o nome e sobrenome,
		depois junte ambos e imprima-os no ecr�.
	*/


	string nome, sobrenome, resultado;
	
	cout << "Digite o seu nome: ";
	cin >> nome;
	cout << "Digite o seu sobrenome: ";
	cin >> sobrenome;
	
	nomeSobrenome(nome,sobrenome);
	 
	
	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
} 

void nomeSobrenome(string txtNome, string txtSobrenome){
	
	cout << "\n\nNome: " << txtNome << " "<< txtSobrenome << "\n";
}
	

