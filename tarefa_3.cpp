#include <iostream>
#include <locale.h>
#include <windows.h>

//Programa Dev-C++
//Elaborado por Diana Freixo

using namespace std;

// Cria a classe Calculadora
class Calculadora {
	//variáveis membro
	//Nota: Quando as variáveis membro são definidas estas por defeito ficam com acesso privado, para alterar acrescenta-se o especificador public
	public:
		float n1;
		float n2;
		
		
	//Criar 4 métodos
	void adicao() {	
		cout << "\nResultado da Adição de " << n1 << " + " << n2 << ": " << n1 + n2 <<endl<<endl; 
		
	}
	
	void subtracao() {
		cout << "\nResultado da Subtração de " << n1 << " - " << n2 << ": " << n1 - n2 <<endl<<endl; 
	}
	
	void multiplicacao() {
		cout << "\nResultado da Multiplicação de " << n1 << " x " << n2 << ": " << n1 * n2 <<endl<<endl; 
	}
	
	void divisao() {
		
		if (n2 == 0)
		
		cout << "\nResultado da Divisão de " << n1 << " / " << n2 << ": Math Error" <<endl<<endl;
	
		else
			cout << "\nResultado da Divisão de " << n1 << " / " << n2 << ": " << n1/n2 <<endl<<endl;
		
	}	
};

	
int main() {	
	setlocale(LC_ALL, "Portuguese");
	
	Calculadora resultado; //Cria o objeto(instância) da classe Aluno
	
	int opcao;

	do{
	    cout<<"Digite dois números: "<<endl;
		cin >> resultado.n1 >> resultado.n2;
	    cout << "\n**** Escolha uma operação aritmética ****"<<endl<<endl;
	    cout<<"1 - Adição"<<endl;
	    cout<<"2 - Subtração"<<endl;
	    cout<<"3 - Multiplicação"<<endl;
	    cout<<"4 - Divisão"<<endl;
	    cout<<"0 - Sair"<<endl<<endl;
	    cout<<"Digite a sua escolha: ";
	    cin >> opcao;
	    switch(opcao){
	        case 1:
	            resultado.adicao();
	            break;
	        case 2:
	            resultado.subtracao();
	            break;
	        case 3:
	            resultado.multiplicacao();
	            break;
	        case 4:
	            resultado.divisao();
	            break;
	        case 0:
	            exit(0);
	        default:
	            cout<<endl<<"Opção inválida."<<endl<<endl;
	            Sleep(2000);
	    }
    }while(opcao!=0);
	
	system("pause");
	return 0;
}


