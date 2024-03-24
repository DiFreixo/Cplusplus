/* Programa usado Dev-C++

1. Pretende-se desenvolver, em C++, um programa que calcule a hora e o minuto de chegada 
de tr�s voos. � solicitado ao utilizador a hora de partida, minuto de partida, hora da 
dura��o, minuto da dura��o e armazenar a informa��o num vetor. 
As horas de partida e dura��o devem ser validadas e os valores situam-se entre 0 e 23, 
enquanto os minutos de partida e dura��o est�o compreendidos entre 0 e 59.
*/

#include <iostream> //Entrada e sa�da de dados
#include <locale.h> //Para trabalhar com acentos
#include <windows.h>

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int mat[3][6];
int situacao[3]={0};// {"Dia seguinte"}; situa��o =1
					//{"Mesmo dia"}; situa��o =2

void menu();
void recolha();
int validarHora(int hora);
int validarMinuto(int minuto);
void mostrar();


int main(){	
	//Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");

    menu();
     
	//Impede o fecho do ecr� ap�s execu��o do c�digo
	//system("pause");
	
	return 0;	
	
} 

void menu(){
	int escolha;
    system("cls");
    cout<<"/ *** Programa Voar *** /"<<endl<<endl;
    cout<<"1-Recolha de dados"<<endl;
    cout<<"2-Mostrar os dados com os tempos"<<endl;
    cout<<"3-Sair"<<endl<<endl;
    cout<<"Digite a sua op��o: ";
    cin>>escolha;
    switch(escolha){
        case 1:
            recolha();
            menu();
            break;
        case 2:
            mostrar();
            menu();
            break;
        case 3:
            cout<<"\nFim do programa.\n"<<endl;
            Sleep(2000);
            break;
        default:
            cout<<endl<<"\nOpcao inv�lida.\n"<<endl;
            Sleep(2000);
            menu();
    }
}

void recolha(){
	system("cls");
	int hp=0,mp=0,hd=0,md=0,hc=0,mc=0;
	int i, j;
	cout<<"  *** Recolha de Dados *** "<<endl << endl;
	for(i=0; i<3; i++){
    	cout <<"\tVoo " << i+1 << ": \n\n";
    	for(j=0; j<6; j++){
    		if(j==0){
		    	// validar hora da partida
		        do{
		            cout <<"\tHora de partida: ";
		            cin >> mat[i][j];
		            hp=mat[i][j];
		        }while(validarHora(hp)==0);
		        // validar minuto da partida
		    }
		    else if(j==1){
		        do{
		            cout <<"\tMinuto de Partida: ";
		            cin >> mat[i][j];
		            mp=mat[i][j];
		        }while(validarMinuto(mp)==0);
		    }
			else if(j==2){   
		        // validar hora da dura��o
		        do{
		            cout <<"\n\tHora de dura��o: ";
		            cin >> mat[i][j];
		            hd=mat[i][j];		            
		        }while(validarHora(hd)==0);
		    } 
		    else if(j==3){
		       // validar minuto da dura��o
		        do{
		            cout <<"\tMinuto de dura��o: ";
		            cin >> mat[i][j];
		            md=mat[i][j];
		        }while(validarMinuto(md)==0);
		    } 
			
			else{
				mat[i][4]=mat[i][0]+mat[i][2]; // calcular a hora de chegada
		    
		        mat[i][5]=mat[i][1]+mat[i][3]; // calcular o minuto de chegada	
			
				if(mat[i][5]>59){
		            mat[i][4]++;
		            mat[i][5]-=60;
			    }
		        if(mat[i][4]>23){
		        	mat[i][4]-=23;
		     		situacao[i]=1;
		        }
		        else{
		            situacao[i]=2;
		        }
			}       
	    }	
    	cout <<" ------------------------------- \n\n";
	}
	cout<<endl<<"Hor�rios dos voos registados. Aguarde para voltar ao menu."<<endl;
	Sleep(5000);	
}
	
int validarHora(int hora){
    if(hora<0 || hora>23){
        return(0);
    }
    else{
        return(1);
    }
}

int validarMinuto(int minuto){
    if(minuto<0 || minuto>59){
        return(0);
    }
    else{
        return(1);
    }
}	

void mostrar(){
	system("cls");
	int i, j;
	cout<<"  *** Tempos de Voo *** \n"<<endl<<endl;
	cout<<"N�\tHora Part.\tMin.Par.\tHora Dur.\tMin. Dur.\tHora Cheg.\tMin. Che.\tSitua��o"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
	
	for(i=0; i<3; i++){
		cout<<i+1;
    	for(j=0; j<6; j++){
    		cout<<"\t\t"<<mat[i][j];		
    	}
    	if(situacao[i]==1){
			cout<<"\tDia seguinte.";
		}
		else if(situacao[i]==2)
			cout<<"\tMesmo dia.";
    	cout << endl<< endl;
	}
	cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"Fim da listagem. Aguarde para voltar ao menu."<<endl;
	Sleep(5000);
}




