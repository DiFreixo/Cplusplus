#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

#include "AlunoAlterar.h"

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

	Aluno *dadosAluno1=new Aluno(1);
	dadosAluno1->imprimirDadosNoEcra(); //exibir dados no ecrã
	
	dadosAluno1->nome="Amanda"; //Altero o valor do nome
	dadosAluno1->imprimirDadosNoEcra(); //exibir dados no ecrã

//...............................................
	string nomeAluno;
	int idadeAluno;
	string sexoAluno;
	
	cout << "\n\nDigite o nome do aluno: \n";
	cin >> nomeAluno;
	
	cout << "\n\nDigite a idade do aluno: \n";
	cin >> idadeAluno; 
	
	cout << "\n\nDigite o sexo do aluno: \n";
	cin >> sexoAluno;  

	dadosAluno1->nome=nomeAluno; //Altero o valor do nome
	dadosAluno1->idade=idadeAluno; //Altero o valor do nome
	dadosAluno1->sexo=sexoAluno; //Altero o valor do nome
	
	dadosAluno1->imprimirDadosNoEcra(); //exibir dados no ecrã

	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 
