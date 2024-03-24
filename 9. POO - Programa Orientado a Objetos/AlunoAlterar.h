#ifndef Aluno_H_INCLUDED

#define Aluno_H_INCLUDED

class Aluno{
	
	public:
		
		//objetos
		int codigo;
		std::string nome;
		int idade;
		std::string sexo;
		
		Aluno(int codigoAluno); //Método construtor
		
		void imprimirDadosNoEcra();
};

void Aluno::imprimirDadosNoEcra(){
	std::cout << "Código:" << codigo << std::endl;
	std::cout << "Nome:" << nome << std::endl;
	std::cout << "Idade:" << idade << std::endl;
	std::cout << "Sexo:" << sexo << std::endl;
	std::cout << std::endl;
}
Aluno::Aluno(int codigoAluno){
	
	if (codigoAluno==1){
		
		codigo=1;
		nome="Nicole";
		idade=28;
		sexo="Feminino";
		
	}else if (codigoAluno==2){
		
		codigo=2;
		nome="Alan";
		idade=31;
		sexo="Masculino";
	}
}

#endif
