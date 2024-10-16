#include <string>
using namespace std;
class Funcionario{
	private:
		string nome_;
		double salarioBase_;
		
	public:
		Funcionario(string nome, double salarioBase):nome_(nome), salarioBase(salarioBase_){}
		Funcionario(String nome): nome_(nome), salarioBase(1405){}
		Funcionario(double salarioBase):nome_("Desconhecido"), salarioBase_(salarioBase){}
		Funcionario():nome_("Desconhecido"),salarioBase(1405){}
		
		virtual double calcularSalarioFinal(){
			return salarioBase_;
		}
};
