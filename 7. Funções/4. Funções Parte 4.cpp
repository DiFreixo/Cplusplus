#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

void contarAteDez(int numero, int incremento=1);

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");
	
	int contador;
	contador=1;
	 
	cout << " -------- Resultado com WHILE ------ \n";
	
	while(contador<=10){
		cout << "Número while: " << contador << "\n";
		contador++;
	}
	
	cout << "\n\n";
//----------------------------------------------------------------

	contarAteDez(30);



	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 

void contarAteDez(int numero, int incremento){
	cout << "Número Função: " << incremento << "\n";
	
	if(numero>incremento){
		
		contarAteDez(numero, ++incremento);
	}
	
}
