#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED

class Aluno{
	public:
		//objetos
		int idade;
		std::string nome;
		std::string sexo;
		std::string cpf;
		
		//m�todo construtor 1
		DadosAluno(){
			
			idade=28;
			nome="Amanda Oliveira";
			sexo="Feminino";
			cpf="111.111.111-11";
			
			std::cout << "---- M�todo Construtor 1 ----" << std::endl;
			std::cout << "Idade: " << idade << std::endl;
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "Sexo: " << sexo << std::endl;
			std::cout << "CPF: " << cpf << std::endl;
			std::cout << std::endl << std::endl;
		}
		
		//m�todo construtor 2
		DadosAluno(string cpfAluno){
			
			cpf="111.111.111-11";
			
			std::cout << "---- M�todo Construtor 2 ----" << std::endl;
			std::cout << "CPF: " << cpfAluno << std::endl;
			std::cout << std::endl << std::endl;
		}
		
		
		//m�todo construtor 3
		DadosAluno(string cpfAluno, string nomeCompleto, int idadeAluno, string sexoAluno){
			
			idade=idadeAluno;
			nome=nomeCompleto;
			sexo=sexoAluno;
			cpf=cpfAluno;
			
			std::cout << "---- M�todo Construtor 3 ----" << std::endl;
			std::cout << "Idade: " << idade << std::endl;
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "Sexo: " << sexo << std::endl;
			std::cout << "CPF: " << cpf << std::endl;
			std::cout << std::endl << std::endl;
		}
	
};

#endif
