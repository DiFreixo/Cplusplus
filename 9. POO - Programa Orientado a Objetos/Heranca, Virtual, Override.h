#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED

class AlunoEscolaPai{
	
	public:
		//objetos
		int codigo;
		std::string nome;
		std::string sexo;
		int idade;
		
		//Virtual vai permitir sobrescrever o m�todo
		//Essa classe ser� refeita por qualquer outra classe herdeira
		virtual void exibirNaTela(){
			std::cout << "C�digo: " << codigo << std::endl;
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "Sexo: " << sexo << std::endl;
			std::cout << "Idade: " << idade << std::endl;
			std::cout << std::endl << std::endl;
		}
};

class AlunoEscolaFilho : public AlunoEscolaPai{
	public:
		//Prototipando
		AlunoEscolaFilho();
};

AlunoEscolaFilho::AlunoEscolaFilho(){
	//metodo construtor
	codigo=1;
	nome="Camila Gon�alves";
	sexo="Feminino";
	idade=23;
}

class AlunoEscolaNeto : public AlunoEscolaPai{
	public:
		//objetos
		std::string escola;
		std::string periodo;
		
		AlunoEscolaNeto(string escolaNeto, string periodoManhaTarde) : escola(escolaNeto),  periodo(periodoManhaTarde){
			//m�todo construtor
			codigo=2;
			nome="Francisco Pires";
			sexo="Masculino";
			idade=19;		
		}
	
		void exibirNaTela() override {
			std::cout << "----- Escola Neto com Override ----" << std::endl;
			std::cout << "Escola: " << escola << std::endl;
			std::cout << "Per�odo: " << periodo << std::endl;
			std::cout << "C�digo: " << codigo << std::endl;
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "Sexo: " << sexo << std::endl;
			std::cout << "Idade: " << idade << std::endl;

		}	
};

#endif
