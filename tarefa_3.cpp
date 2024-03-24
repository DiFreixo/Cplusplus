#include <iostream>
#include <locale.h>
#include <windows.h>

//Programa Dev-C++
//Elaborado por Diana Freixo

using namespace std;

// Cria a classe Calculadora
class Calculadora {
	//vari�veis membro
	//Nota: Quando as vari�veis membro s�o definidas estas por defeito ficam com acesso privado, para alterar acrescenta-se o especificador public
	public:
		float n1;
		float n2;
		
		
	//Criar 4 m�todos
	void adicao() {	
		cout << "\nResultado da Adi��o de " << n1 << " + " << n2 << ": " << n1 + n2 <<endl<<endl; 
		
	}
	
	void subtracao() {
		cout << "\nResultado da Subtra��o de " << n1 << " - " << n2 << ": " << n1 - n2 <<endl<<endl; 
	}
	
	void multiplicacao() {
		cout << "\nResultado da Multiplica��o de " << n1 << " x " << n2 << ": " << n1 * n2 <<endl<<endl; 
	}
	
	void divisao() {
		
		if (n2 == 0)
		
		cout << "\nResultado da Divis�o de " << n1 << " / " << n2 << ": Math Error" <<endl<<endl;
	
		else
			cout << "\nResultado da Divis�o de " << n1 << " / " << n2 << ": " << n1/n2 <<endl<<endl;
		
	}	
};

	
int main() {	
	setlocale(LC_ALL, "Portuguese");
	
	Calculadora resultado; //Cria o objeto(inst�ncia) da classe Aluno
	
	int opcao;

	do{
	    cout<<"Digite dois n�meros: "<<endl;
		cin >> resultado.n1 >> resultado.n2;
	    cout << "\n**** Escolha uma opera��o aritm�tica ****"<<endl<<endl;
	    cout<<"1 - Adi��o"<<endl;
	    cout<<"2 - Subtra��o"<<endl;
	    cout<<"3 - Multiplica��o"<<endl;
	    cout<<"4 - Divis�o"<<endl;
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
	            cout<<endl<<"Op��o inv�lida."<<endl<<endl;
	            Sleep(2000);
	    }
    }while(opcao!=0);
	
	system("pause");
	return 0;
}


