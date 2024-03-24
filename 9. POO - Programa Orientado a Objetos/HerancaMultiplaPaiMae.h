#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED

class Pai{	
	public:
		void imprimirDadosCasaPai(); 
};

void Pai::imprimirDadosCasaPai(){
	std::cout << "--- Dados Casa Pai ---" << std::endl;
	std::cout << "C�digo: 1" << std::endl;
	std::cout << "Propriet�rio: Mateus Alves" << std::endl;
	std::cout << "Estado: Santa Catarina" << std::endl;
	std::cout << "Cidade: Lages" << std::endl;
	std::cout << "Valor: 500.000,00 EUR" << std::endl;
	std::cout << std::endl << std::endl;
} 

class Mae{
	
	public:
		void imprimirDadosCasaMae(); 
};

void Mae::imprimirDadosCasaMae(){
	std::cout << "--- Dados Casa M�e ---" << std::endl;
	std::cout << "C�digo: 2" << std::endl;
	std::cout << "Propriet�ria: Alice Alves" << std::endl;
	std::cout << "Estado: Santa Catarina" << std::endl;
	std::cout << "Cidade: Florian�plis" << std::endl;
	std::cout << "Valor: 4.500.000,00 EUR" << std::endl;
	std::cout << std::endl << std::endl;
} 

class Filho : public Pai, public Mae{ //a Class Filho est� a herdar da Class Mae e da Class Pai

};




#endif
