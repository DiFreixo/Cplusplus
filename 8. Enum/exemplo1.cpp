#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");
	
	cout <<"-------- Exemplo 1 -------- \n\n";
	//Enum s� retorna n�mero inteiro
	//Podemos inserir textos, mas o que o Enum representa s�o os n�meros inteiros
	enum Roupas{meia, camisa, jaqueta, pijama};
	
	Roupas roupaSelecionada;
	
	roupaSelecionada = camisa;
	
	cout << roupaSelecionada << endl;
	
	cout <<"-------- Exemplo 2 -------- \n\n";
	enum Calcado{tenis=10, sapato, chinelo, sandalia};

	Calcado calcadoSelecionado;
	
	calcadoSelecionado=chinelo;
	
	cout << calcadoSelecionado << endl;
	
	
	cout <<"-------- Exemplo 3 -------- \n\n";
	
	enum Alimentos{pacoteArroz=5, pacoteFeijao=3, pacoteAcucar=2, pacoteCafe=1, pacoteBolacha};
	
	Alimentos alimentoSelecionado;
	
	alimentoSelecionado=pacoteBolacha;
	
	cout << alimentoSelecionado << endl;
	
	//Impede o fecho do ecr� ap�s execu��o do c�digo para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;	
	
	
} 
