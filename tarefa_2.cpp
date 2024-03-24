/*Programa usado Dev-C++
1. Pretende-se desenvolver, em C++, um programa que recolha os dados de uma possível
encomenda. A empresa fabrica o produto X na forma de 4 modelos (Pequeno, Médio, 
Grande e Muito Grande).

Possível Layout:
Modelo		Descrição	Quantidade		Preço	Total
 1			 Pequeno 		10 			  5 	 50
 2 			 Médio 			5 			  2 	 10
…
-------------------------------------------------------------------------------------------------------
 									     	Total 60
------------------------------------------------------------------------------------------------------- 									     	
Notas:
?A encomenda, no detalhe, deve ter no mínimo 1 produto e no máximo 4.
?Não podem existir modelos repetidos
*/

#include <iostream> 
#include <locale.h>
#include <windows.h>

using namespace std;
void menu();
void registo();
void mostrar();
void pausa();

	int enc[4][4];
	const char* descricao[4];
	int total=0;
	int count=0;

int main(){	
	setlocale(LC_ALL, "Portuguese"); 
									
	menu();

	system("pause");
	return 0;		
} 


void menu(){
	int escolha;
	do{
    system("cls");
    cout<<" *** Encomedas *** "<<endl<<endl;
    cout<<"1-Registo da Encomenda"<<endl;
    cout<<"2-Mostrar Encomenda"<<endl;
    cout<<"3-Sair"<<endl<<endl;
    cout<<"Digite a sua escolha: ";
    cin>>escolha;
    switch(escolha){
        case 1:
            registo();
            break;
        case 2:
            mostrar();
            break;
        case 3:
            exit(0);
        default:
            cout<<endl<<"Opcao inválida."<<endl;
            pausa();
    }
    }while(escolha!=3);
}

void registo(){
	system("cls");
	int i=0, j, igual;
	cout<<" **** Registo da encomenda **** \n";
	
	do{ //Verificar se há elementos repetidos
		cout<<"\n--> Produtos a incluir na encomenda:\n";
		cout<<"\t1-Pequeno\n" << "\t2-Médio\n" << "\t3-Grande\n" << "\t4-Muito Grande\n" << "\t0-Finalizar registo\n";
		cout<<"\nInforme o modelo do produto: ";
		cin >> enc[i][0];
		
		if(enc[i][0]==0){
			cout<<"\nRegisto Finalizado...\n";
			Sleep(2000);
			return menu();
		}
		igual=0;
		for(j=0; j<i; j++){
				if(enc[j][0]==enc[i][0]){ //percorre a  parte da matriz já preenchida
					igual=1; //número repetido
					cout << "\nAtenção modelo repetido! Digite outro valor.\n";
				}
			}
		if(igual==0){ //significa que o elemento não se repetiu	
			cout<< "Informe a quantidade a encomendar do modelo "<<enc[i][0]<< ": ";
			cin >> enc[i][1];
			cout<< "\nCount 0"<<count;
			count++;
			cout<< "\nCount 1"<<count;
			i++;	
		}
				   
    }while(count<4 || enc[i][0]!=0 ); //enquanto não forem registados 4 números diferentes
   
   	for(i=0; i<count; i++){
		if(enc[i][0]==1){
			descricao[i]="Pequeno     ";
			enc[i][2]=5; //preço
		}
		else if(enc[i][0]==2){
			descricao[i]="Médio       ";
			enc[i][2]=10;
		}
		else if(enc[i][0]==3){
			descricao[i]="Grande      ";
			enc[i][2]=12;
		}	
		else{
			descricao[i] ="Muito Grande";
			enc[i][2]=30;
		}
		enc[i][3]=enc[i][1]*enc[i][2];
		total=total+enc[i][3];
	}
	cout<< "\nFim do registo da encomenda\n";
	pausa();	
}


void mostrar(){
	int i;
	system("cls");
	cout<<"\nDetalhe da encomenda:\n";
	if(count==0){
		cout<< "\n\tNão há registos\n\n\n";
	}
	else{
		cout<<"Modelo\tDescrição\tQuantidade\tPreço\tTotal"<<endl;
		cout<<"---------------------------------------------------------"<<endl;
		for(i=0; i<count; i++){
			cout<<"  "<<enc[i][0]<<"\t"<<descricao[i]<<"  \t"<<enc[i][1]<<"\t\t"<<enc[i][2]<<"\t"<<enc[i][3]<< endl;
		}
		cout<<"---------------------------------------------------------"<<endl;
		cout<<"                                          TOTAL: " << total<< " EUR"<< endl << endl;
	}
	
	system("pause");
}


void pausa(){
    cout<<endl<<"Aguarde 3 seg. sff."<<endl;
    Sleep(3000);
}
