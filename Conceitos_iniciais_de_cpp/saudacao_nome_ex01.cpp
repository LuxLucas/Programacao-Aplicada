#include <iostream>
#include <string>

//using namespace std;

int main(){
	std::string nomeUsuario;
	int idadeUsuario;
	
	std::cout << "Qual o seu nome?: ";
	std::cin >> nomeUsuario;
	std::cout << "Qual a sua idade?: ";
	std::cin >> idadeUsuario;
	std::cout << std::endl;
	
	std::cout << "Ol� " << nomeUsuario << ", pelo que vejo, voc� tem " << idadeUsuario << " anos." << std::endl;
	
	return 0;
}
