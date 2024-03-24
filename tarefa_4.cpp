 // Elaborado por Diana Freixo - Programa usado: Visual Studio Code
 // 29 de dezembro de 2023

/* Exercício 4:
Crie uma classe em C++ por forma a receber alguns elementos de um vendedor de uma dada empresa
como por exemplo: O número do vendedor, o nome, a zona e o valor da vendas. Os dados devem ser 
armazenados num vetor recorendo à classe “vector”.

Posível Layout:
Empresa Alfa, S.A
1-Registar vendedor/mês/ano
2-Mostrar os dados de um vendedor especifico
3-Listar as vendas de uma determinada zona (o utilizador insere a zona)
4-Listar todas as vendas apresentando um total final
5-Eliminar vendedor (elimina tudo)
6-Sair
Digite a sua opção:__

Nota: Ao inserir o registo do vendedor “vendedor+mês+ano é único”.
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

class Vendedor {
public:
  string idVendedor; 
  string nomeVendedor;
  string regiao;
  float vendas;
  int x, y;
  
  vector<Vendedor> V;

  void adicionarVendedor(Vendedor vendedor, string codigo) {
    bool existe = false;
    for(int i=0; i < V.size(); i++) {
      if(V[i].idVendedor == codigo) {
        existe = true;
        cout << "\nJá existe um registo com esse código!\n...Pressione Enter para continuar....\n";
        getch();
        break;
      }
    }
    if(existe == false) {
      V.push_back(vendedor);
      cout << "\nDados do vendedor registados com sucesso!\n...Pressione Enter para continuar...\n";       
      getch();
    }
  }

  void mostrarVendedor(string codigo) {
    bool existe = false;
    int posicao = 0;
    for(int i=0; i < V.size(); i++) {
      if(V[i].idVendedor == codigo) {
        existe = true;
        posicao = i;
        break;
      }
    }
    if(existe == false) {
      cout << "\nCódigo de vendedor inexistente!\n...Pressione Enter para continuar....\n";
      getch();
    }
    else {
      system("cls");
      cout << "***Dados do vendedor ***\n";
      gotoxy(0, 2); cout << "Código";
      gotoxy(15, 2); cout << "Nome";
      gotoxy(40, 2); cout << "Região";
      gotoxy(55, 2); cout << "Vendas";
      cout << "\n--------------------------------------------------------------\n";
      gotoxy(0, 4); cout << V[posicao].idVendedor;
      gotoxy(15, 4); cout << V[posicao].nomeVendedor;
      gotoxy(40, 4); cout << V[posicao].regiao;
      gotoxy(55, 4); cout << V[posicao].vendas;
      cout << "\n--------------------------------------------------------------\n";
      cout << "\n...Pressione Enter para continuar...\n";
      getch();
    }
  }

  void vendasPorRegiao(string zona) {
    system("cls");
    int y = 4;

    if(zona != "Açores" && zona != "Alentejo" && zona != "Algarve" && zona != "Centro" && zona != "Lisboa"
    && zona != "Madeira" && zona != "Norte") {
      cout << "\nRegião inválida!\n...Pressione Enter para continuar....\n";
      getch();
    }
    else {
      int y = 4;
      //converter o nome da região de vendas em maiúsculas
      string regiaoVendas = zona;
      transform(regiaoVendas.begin(), regiaoVendas.end(), regiaoVendas.begin(), ::toupper);

      cout << "*** Lista de vendas da região: " << regiaoVendas << " ***\n\n";
      gotoxy(0, 2); cout << "Código";
      gotoxy(15, 2); cout << "Nome";
      gotoxy(40, 2); cout << "Região";
      gotoxy(55, 2); cout << "Vendas";
      cout << "\n--------------------------------------------------------------\n";
      for(int i=0; i < V.size(); i++) {
        if(V[i].regiao == zona) {
          gotoxy(0, y); cout << V[i].idVendedor;
          gotoxy(15, y); cout << V[i].nomeVendedor;
          gotoxy(40, y); cout << V[i].regiao;
          gotoxy(55, y); cout << V[i].vendas;
          y++; 
        } 
      }
      cout << "\n--------------------------------------------------------------\n";
      cout << "\nListagem concluida!\n...Pressione Enter para continuar...\n";
      getch();
    }
  }

  void listaVendas() {
    float totalVendas = 0;
    int y = 4;
    cout << "*** Listagem de vendas ***\n";
    gotoxy(0, 2); cout << "Código";
    gotoxy(15, 2); cout << "Nome";
    gotoxy(40, 2); cout << "Região";
    gotoxy(55, 2); cout << "Vendas";
    cout << "\n--------------------------------------------------------------\n";
    for(int i=0; i < V.size(); i++) {
      gotoxy(0, y); cout << V[i].idVendedor;
      gotoxy(15, y); cout << V[i].nomeVendedor;
      gotoxy(40, y); cout << V[i].regiao;
      gotoxy(55, y); cout << V[i].vendas;
      totalVendas += V[i].vendas;
      y++; 
    }
    cout << "\n--------------------------------------------------------------\n";
    gotoxy(40, y+2); cout << "TOTAL";
    gotoxy(55, y+2); cout << totalVendas;
  }  

  void eliminarVendedor(string codigo) {
    bool existe = false;
    int posicao = 0;
    for(int i=0; i < V.size(); i++) {
      if(V[i].idVendedor == codigo) {
        existe = true;
        posicao = i;
        break;
      }
    }
    if(!existe) {
      cout << "\nCódigo de vendedor inexistente!\n...Pressione Enter para continuar....\n";
      getch();
    }
    else {
      V.erase(V.begin() + posicao);
      cout << "\nRegisto eliminado!\n...Pressione Enter para continuar...\n";
      getch();
    }
  }

  void exportarCSV() {
    cout << "*** Exportar para CSV ***\n";
    ofstream fich("tarefa_4.csv");
    for(int i=0; i<V.size(); i++) {
        if(V[i].idVendedor != "") {
            fich << V[i].idVendedor << ";"
            << V[i].nomeVendedor << ";"
            << V[i].regiao << ";"
            << V[i].vendas <<"\n";
        }
    }
    fich.close();
    cout << "\nFim da exportação!\n...Pressione Enter para continuar...\n";
    getch();
  }

  void gotoxy(int x, int y) {
    COORD p;
    p.X = x;
    p.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}
};


int main(){
  SetConsoleOutputCP(CP_UTF8);
 
  int opcao;
  string codigo;
  string zona;
  Vendedor vendedor;

  do {
    system("cls");
    cout << "*** Empresa Alfa, S.A. ***\n";
    cout << "1 - Registar vendedor\n";
    cout << "2 - Mostrar os dados de um vendedor\n";
    cout << "3 - Listar as vendas por região\n";
    cout << "4 - Listar todas as vendas\n";
    cout << "5 - Eliminar vendedor\n";
    cout << "6 - Exportar como CSV (separdo por ;)\n";
    cout << "7 - Sair\n";
    cout << "Digite a sua opção: ";
    cin >> opcao;

    switch (opcao)
    {
    case 1:
      system("cls");
      cout << "*** Novo Vendedor ***\n\n";
      cout << "Código (número + mês(00) + ano(0000)): ";
      getline(cin >> ws, vendedor.idVendedor);
      cout << "Nome: ";
      getline(cin >> ws, vendedor.nomeVendedor);
      cout << "Região (Açores/Alentejo/Algarve/Centro/Lisboa/Madeira/Norte): ";
      getline(cin >> ws, vendedor.regiao);
      cout << "Vendas: ";
      cin >> vendedor.vendas;
      vendedor.adicionarVendedor(vendedor, vendedor.idVendedor);
      break;

    case 2:
      system("cls");
      cout << "Informe o código do vendedor: ";
      getline(cin >> ws, codigo);
      vendedor.mostrarVendedor(codigo);
      break;

    case 3:
      system("cls");
      cout << "Informe a região de vendas: ";
      getline(cin >> ws, zona);
      vendedor.vendasPorRegiao(zona);
      break;

    case 4:
      system("cls");
      vendedor.listaVendas();
      cout << "\nListagem concluida!\n...Pressione Enter para continuar...\n";
      getch();
      break;

    case 5:
      system("cls");
      cout << "\n***Eliminar vendedor ***\n";
      cout << "Informe o código do vendedor: ";
      getline(cin >> ws, codigo);
      vendedor.eliminarVendedor(codigo);
      break;
    
    case 6:
      system("cls");
      vendedor.exportarCSV();
      break;

    case 7:
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


