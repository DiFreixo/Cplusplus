#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");
	
	cout <<"-------- Exemplo 1 -------- \n\n";
	//Enum só retorna número inteiro
	//Podemos inserir textos, mas o que o Enum representa são os números inteiros
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
	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
	
} 
