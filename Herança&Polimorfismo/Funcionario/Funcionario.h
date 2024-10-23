#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;
class Funcionario{
	private:
		string nome_;
		double salarioBase_;
		
	public:
		Funcionario(string nome, double salarioBase):nome_(nome), salarioBase_(salarioBase){}
		Funcionario(string nome): nome_(nome), salarioBase_(0){}
		Funcionario(double salarioBase):nome_("Desconhecido"), salarioBase_(salarioBase){}
		Funcionario():nome_("Desconhecido"),salarioBase_(0){}

		string getNome(){return nome_;}
		double getSalarioBase(){return salarioBase_;}
		
	protected: 
		virtual double calcularSalarioFinal(){
			return salarioBase_;
		}
};

#endif
