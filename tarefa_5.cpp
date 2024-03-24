 // Elaborado por Diana Freixo - Programa usado: Visual Studio Code
 // 25 de janeiro de 2023

/* Exercício 5:
Crie uma classe em C++ por forma a receber alguns elementos de um registo automóvel como por 
exemplo: marca, modelo, matricula e preco. Os dados devem ser armazenados num array dinâmico.
Nota: Não podem existir viaturas com matricula repetida.

Posível Layout:
Stand A Guiar, Lda.
1-Registar viatura
2-Listagem de viaturas
3-Pesquisa por matrícula
4-Listagem de viaturas por marca
5-Eliminar um registo (o utilizador indica o número de registo)
6-Sair
Digite a sua opção:__
*/

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;



class Automovel
{
private:
    // Atributos da classe Automovel 
    string marca; 
    string modelo;
    string matricula;
    float preco;
public:
    int x, y;
    // Declarar o array para a classe Automovel
    vector<Automovel> V;
    // Declarar os métodos da classe Automovel
    void setMarca(string marca)
    {
        this->marca = marca;
    }
    void setModelo(string modelo)
    {
        this->modelo = modelo;
    }
    void setMatricula(string matricula)
    {
        this->matricula = matricula;
    }
    void setPreco(float preco)
    {
        this->preco = preco;
    }

    void novoRegisto(Automovel automovel, string mat)
    {
        system("cls");
        bool existe = false;
        // Verificar se a matrícula do automóvel é repetida
        for(int i=0; i < V.size(); i++) 
        {
            if(V[i].matricula == mat)
            {
                existe = true;
                cout << "\nAtenção! Já existe um registo com essa matrícula!\n...Pressione Enter para continuar....\n";
                getch();
                break;
            }
        }
        if(existe == false)
        {
            V.push_back(automovel);
            cout << "\nDados do viatura registados com sucesso!\n...Pressione Enter para continuar...\n";       
            getch();    
        }
    }    
    
    void listaViaturas()
    {
        system("cls");
        int y = 4;
        int registo = 1;
        // Apresentar a listagem das viaturas
        cout << "*** Listagem de viaturas ***\n";
        gotoxy(0, 2); cout << "Registo";
        gotoxy(15, 2); cout << "Marca";
        gotoxy(30, 2); cout << "Modelo";
        gotoxy(45, 2); cout << "Matrícula";
        gotoxy(60, 2); cout << "Preço";
        cout << "\n------------------------------------------------------------------\n";
        for(int i=0; i < V.size(); i++)
        {
            gotoxy(0, y); cout << registo;
            gotoxy(15, y); cout << V[i].marca;
            gotoxy(30, y); cout << V[i].modelo;
            gotoxy(45, y); cout << V[i].matricula;
            gotoxy(60, y); cout << V[i].preco;
            registo++;  
            y++; 
        }
        cout << "\n------------------------------------------------------------------\n";
        cout << "\nListagem concluida!\n...Pressione Enter para continuar...\n";
        getch();
    }  

    void pesquisarMatricula(string matricula)
    {
        bool existe = false;
        int posicao = 0;
        // Verificar se a matrícula existe
        for(int i=0; i < V.size(); i++)
        {
            if(V[i].matricula == matricula)
            {
                existe = true;
                posicao = i;
                break;
            }
        }
        if(existe == false)
        {
            cout << "\nViatura inexistente!\n...Pressione Enter para continuar....\n";
            getch();
        }
        else
        {   // Apresentar os dados da matrícula
            system("cls");
            cout << "***Dados da viatura ***\n";
            gotoxy(0, 2); cout << "Registo";
            gotoxy(15, 2); cout << "Marca";
            gotoxy(30, 2); cout << "Modelo";
            gotoxy(45, 2); cout << "Matrícula";
            gotoxy(60, 2); cout << "Preço";

            cout << "\n------------------------------------------------------------------\n";
            gotoxy(0, 4); cout << posicao+1;
            gotoxy(15, 4); cout << V[posicao].marca;
            gotoxy(30, 4); cout << V[posicao].modelo;
            gotoxy(45, 4); cout << V[posicao].matricula;
            gotoxy(60, 4); cout << V[posicao].preco;
            cout << "\n------------------------------------------------------------------\n";
            cout << "\n...Pressione Enter para continuar...\n";
            getch();
        }
    }

    void listaPorMarca(string marca)
    {
        system("cls");
        int y = 4;
        bool existe = false;
        // Verificar se a marca existe
        for(int i=0; i < V.size(); i++)
            {
                if(V[i].marca == marca)
                {
                    existe = true;
                }
            }
        if(existe == false) 
        {
            cout << "\nMarca indicada inexistente.";
        }
        else 
        {    
            //converter o nome da marca em maiúsculas
            string marcaViatura = marca;
            transform(marcaViatura.begin(), marcaViatura.end(), marcaViatura.begin(), ::toupper);
            // Apresentar os dados pela marca
            cout << "*** Listagem de viaturas da marca: " << marcaViatura << " ***\n\n";
            gotoxy(0, 2); cout << "Marca";
            gotoxy(15, 2); cout << "Modelo";
            gotoxy(30, 2); cout << "Matrícula";
            gotoxy(45, 2); cout << "Preço";
            cout << "\n-----------------------------------------------------\n";
            for(int i=0; i < V.size(); i++)
            {
                if(V[i].marca == marca)
                {
                    gotoxy(0, y); cout << V[i].marca;
                    gotoxy(15, y); cout << V[i].modelo;
                    gotoxy(30, y); cout << V[i].matricula;
                    gotoxy(45, y); cout << V[i].preco;
                    y++; 
                }
            }
            cout << "\n-----------------------------------------------------\n";
            cout << "\nListagem concluida!"; 
        }
        cout << "\nPressione Enter para continuar...\n";
        getch();
    }

    void eliminarRegisto(int nRegisto)
    {
        bool existe = false;
        // Verificar se o número do registo que se pretende eliminar existe
        for(int i=0; i < V.size(); i++)
        {
            if(i == nRegisto - 1)
            {
                existe = true;
                break;
            }
        }
        if(!existe)
        {
            cout << "\nRegisto inexistente!\n...Pressione Enter para continuar....\n";
            getch();      
        }
        else 
        {   // Apagar o registo
            V.erase(V.begin() + (nRegisto - 1));
            cout << "\nRegisto eliminado!\n...Pressione Enter para continuar...\n";
            getch();
        }
    }

    void exportarCSV()
    {
        system("cls");
        int registo = 1;
        // guardar os dados num ficheiro CSV
        cout << "*** Exportar para CSV ***\n";
        ofstream fich("tarefa_5.csv");
        for(int i=0; i<V.size(); i++) {
            if(V[i].matricula != "") {
                fich << registo << ";"
                << V[i].marca << ";"
                << V[i].modelo << ";"
                << V[i].matricula << ";"
                << V[i].preco <<"\n";
                registo++;
            }
        }
        fich.close();
        cout << "\nFim da exportação!\n...Pressione Enter para continuar...\n";
        getch();
    }

    void importarDados(Automovel& automovel)
    {
        system("cls");
        ifstream fich;
        // abre o ficheiro para leitura
        fich.open("tarefa_5.csv");
        
        // Verificar se a abertura do ficheiro ocorreu com sucesso
        if(fich.fail())
        {
            cout << "\nErro na abertura do ficheiro de dados.\n";
        }
        else
        {
            string line = "";
            while (getline(fich, line))
            {
                stringstream inputString(line); //////////////
                int numRegisto;
                string tempString = "";
            
                // getting o número de registo
                getline(inputString, tempString, ';');
                // converte a string numa variável do tipo int
                numRegisto = atoi(tempString.c_str());

                getline(inputString, marca, ';');
                getline(inputString, modelo, ';');
                getline(inputString, matricula, ';');
                //getting o preço
                tempString = "";
                getline(inputString, tempString, ';');
                // converte a string numa variável do tipo float
                preco = atof(tempString.c_str());

                V.push_back(automovel);
                line = "";
            }
            //chama o método para apresentar a listagem das viaturas
            listaViaturas();
        }
        fich.close();
    }

    void gotoxy(int x, int y)
    {
        COORD p;
        p.X = x;
        p.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);   
    }

};

int main(){
  SetConsoleOutputCP(CP_UTF8);

  // Instânciar o objeto da classe Automovel
  Automovel automovel;

  string matricula, marca, modelo;
  float preco;
  int opcao, nRegisto;
  do {
    system("cls");
    cout << "*** Stand A Guiar, Lda ***\n";
    cout << "1 - Registar viatura\n";
    cout << "2 - Listagem de viaturas\n";
    cout << "3 - Pesquisar por matrícula\n";
    cout << "4 - Listagem de viaturas por marca\n";
    cout << "5 - Eliminar um registo\n";
    cout << "6 - Exportar como CSV (separdo por ;)\n";
    cout << "7 - Importar listagem de viaturas\n";
    cout << "8 - Sair\n";
    cout << "Digite a sua opção: ";
    cin >> opcao;

    switch (opcao)
    {
    case 1:
        system("cls");
        cout << "*** Registar viatura ***\n\n";
        cout << "Marca: ";
        getline(cin >> ws, marca);
        automovel.setMarca(marca);
        cout << "Modelo: ";
        getline(cin >> ws, modelo);
        automovel.setModelo(modelo);
        cout << "Matrícula: ";
        getline(cin >> ws, matricula);
        automovel.setMatricula(matricula);
        cout << "Preço: ";
        cin >> preco;
        automovel.setPreco(preco);
        automovel.novoRegisto(automovel, matricula);
        break;   
    case 2:
        automovel.listaViaturas();
        break;
    case 3:
        system("cls");
        cout << "*** Pesquisar viatura por matrícula ***\n\n";
        cout << "Informe a matrícula: ";
        getline(cin >> ws, matricula);
        automovel.pesquisarMatricula(matricula);
        break;
    case 4:
        system("cls");
        cout << "*** Listagem de viaturas por marca ***\n\n";
        cout << "Informe a marca: ";
        getline(cin >> ws, marca);
        automovel.listaPorMarca(marca);
        break;
    case 5:
        system("cls");
        cout << "\n***Eliminar registo ***\n";
        cout << "Informe o número do registo: ";
        cin >> nRegisto;
        automovel.eliminarRegisto(nRegisto);
        break;  
    case 6:
        automovel.exportarCSV();
        break;
    case 7:
        automovel.importarDados(automovel);
        break;
    case 8:
        exit(0);
        break;
    default:      
        cout << "\nOpção inválida!\n...Pressione Enter para continuar....\n";
        getch();
        break;
    }
  } while(true);

  return 0;
}





