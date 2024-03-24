#ifndef Aluno_H_INCLUDED
#define Aluno_H_INCLUDED

class Aluno{
	
	public: //objetos tipo público eu posso ler e alterar em qualquer lugar
		int codigo;
		std::string nome;
		
	Aluno(int codigoAluno);
	
	//get -- pego a informação do tipo privado / set -- altero a informação do tipo privado;
	int setidade(int idadeAluno);
	int getidade();
	
	void exibirDadosNoEcra();
			
	private:
		int idade; //objetos tipo privados eu só posso ler e alterar dentro da classe que forem criados
		std::string sexo;	
};
int Aluno::getidade(){
	
	return idade;
}

int Aluno::setidade(int idadeAluno){
	
	idade=idadeAluno;
}

void Aluno::exibirDadosNoEcra(){
		
		std::cout << "Código: " << codigo << std::endl;
		std::cout << "Nome: " << nome << std::endl;
		std::cout << "Idade: " << idade << std::endl;
		std::cout << "Sexo: " << sexo << std::endl;
		std::cout << std::endl << std::endl;
}



//método construtor
Aluno::Aluno(int codigoAluno){
	
	if(codigoAluno==1){
		
		codigo=1;
		nome="Ana Paula";
		idade=32;
		sexo="Feminino";
		
	}
}


#endif
