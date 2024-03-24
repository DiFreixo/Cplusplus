#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

class Aluno{
	
	public:
		//objetos da classe
		string nome= "Maria Eduarda";
		int idade = 29;
		string sexo= "Feminino";
		
		string estado;
		
		//chamamos a classe
		void verificaEstado(string estadoAluno);
};

//método
void Aluno::verificaEstado(string estadoAluno){
	
	if(estadoAluno=="SP"){
		this -> estado = "São Paulo";
		
	}else if(estadoAluno=="SC"){
		this -> estado = "Santa Catarina";
	
	}else if(estadoAluno=="RJ"){
		this -> estado = "Rio de Janeiro";
	}
}

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

	Aluno *dadosAluno = new Aluno();

	cout << "Nome: " << dadosAluno -> nome << "\n";
	cout << "Idade: " << dadosAluno -> idade << "\n";	
	cout << "Sexo: " << dadosAluno -> sexo << "\n";

	dadosAluno -> verificaEstado("SP");
	cout << "Estado: " << dadosAluno -> estado << "\n";
	
	dadosAluno -> verificaEstado("RJ");
	cout << "Estado: " << dadosAluno -> estado << "\n";
	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 
