#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

void nomeSobrenome(string txtNome, string txtSobrenome);

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

	/*Exercício de funções 2
		Crie uma função que receba o nome e sobrenome,
		depois junte ambos e imprima-os no ecrã.
	*/


	string nome, sobrenome, resultado;
	
	cout << "Digite o seu nome: ";
	cin >> nome;
	cout << "Digite o seu sobrenome: ";
	cin >> sobrenome;
	
	nomeSobrenome(nome,sobrenome);
	 
	
	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 

void nomeSobrenome(string txtNome, string txtSobrenome){
	
	cout << "\n\nNome: " << txtNome << " "<< txtSobrenome << "\n";
}
	

