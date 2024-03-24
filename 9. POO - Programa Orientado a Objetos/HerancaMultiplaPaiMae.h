#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED

class Pai{	
	public:
		void imprimirDadosCasaPai(); 
};

void Pai::imprimirDadosCasaPai(){
	std::cout << "--- Dados Casa Pai ---" << std::endl;
	std::cout << "Código: 1" << std::endl;
	std::cout << "Proprietário: Mateus Alves" << std::endl;
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
	std::cout << "--- Dados Casa Mãe ---" << std::endl;
	std::cout << "Código: 2" << std::endl;
	std::cout << "Proprietária: Alice Alves" << std::endl;
	std::cout << "Estado: Santa Catarina" << std::endl;
	std::cout << "Cidade: Florianóplis" << std::endl;
	std::cout << "Valor: 4.500.000,00 EUR" << std::endl;
	std::cout << std::endl << std::endl;
} 

class Filho : public Pai, public Mae{ //a Class Filho está a herdar da Class Mae e da Class Pai

};




#endif
