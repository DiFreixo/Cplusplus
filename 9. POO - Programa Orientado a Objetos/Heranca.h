#ifndef Heranca_H_INCLUDED
#define Heranca_H_INCLUDED

class AlunoEscolaPai{
	
	public:
		//Objetos
		int codigo;
		std::string nome;
		std::string sexo;
		int idade;
		
		void imprimirNaTela();
		
};

void AlunoEscolaPai::imprimirNaTela(){
	std::cout << "Código: " << codigo << std::endl;
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Sexo: " << sexo << std::endl;
	std::cout << "Idade: " << idade << std::endl;
	std::cout << std::endl << std::endl;
	
}


class AlunoEscolaFilho : public AlunoEscolaPai{ //Estou a herdar os dados AlunoEscolaPai

	public:
		
		//Prototipar - Apresentar
		AlunoEscolaFilho();
};

//método construtor
AlunoEscolaFilho::AlunoEscolaFilho(){
	codigo = 1;
	nome = "Cleonice";
	sexo = "Feminino";
	idade = 19;	
}

class AlunoEscolaNeto : public AlunoEscolaPai{
	
	public:
		AlunoEscolaNeto(); //prototipar
		
	
};

//método construtor
AlunoEscolaNeto::AlunoEscolaNeto(){
	codigo = 2;
	nome = "Alan";
	sexo = "Masculino";
	idade = 28;	
	
}

#endif
