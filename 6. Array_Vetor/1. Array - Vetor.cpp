#include <iostream> //Entrada e saída de dados
#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){	
	
	//Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");

	cout << " -------- Exemplo 1 -------- \n\n";
	string comodaGavetas[4];
	int posicao;
	
	comodaGavetas[0] = "Camisas";
	comodaGavetas[1] = "Calças";
	comodaGavetas[2] = "Jaquetas";
	comodaGavetas[3] = "Meias";
	
	cout << "Gaveta 1: " << comodaGavetas[0] << endl;
	cout << "Gaveta 2: " << comodaGavetas[1] << endl;
	cout << "Gaveta 3: " << comodaGavetas[2] << endl;
	cout << "Gaveta 4: " << comodaGavetas[3] << endl;
	
	cout << "\n -------- Exemplo 2 -------- \n\n";

	for(posicao=0; posicao<4; posicao++){
		
		cout << "Gaveta " << posicao +1 << " : " << comodaGavetas[posicao] << endl;
		
	}
	
	
	cout << "\n -------- Exemplo 3 -------- \n\n";
	
	int tamanho = 10;
	int posicao2, contador;
	string letrasAlfabeto[tamanho] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
	
	for(posicao2=0, contador=1; posicao2<tamanho; posicao2++, contador++){
		
		cout << "Letra " << contador << " : " << letrasAlfabeto[posicao2] << endl;
		
	}
	
	
	
	
	
	
	//Impede o fecho do ecrã após execução do código para dar tempo de testar e ver o resultado
	system("pause");
	
	//Tipo de retorno da função main que é um inteiro
	return 0;	
	
} 
