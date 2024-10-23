#include "Funcionario.h"
#include <string>
using namespace std;
class FuncionarioComissionado: public Funcionario{
	private:
		double porcentagemComissao_, totalVendas_;
		double calcularComissao(double totalVendas){return totalVendas * porcentagemComissao_;}

	public:
		FuncionarioComissionado(string nome, double salarioBase, double totalVendas, double porcentagemComissao):
		Funcionario(nome,salarioBase),totalVendas_(totalVendas),porcentagemComissao_(porcentagemComissao){}

		double getTotalVendas(){return totalVendas_;}
		void setTotalVendas(double totalVendas){totalVendas_ = totalVendas;}

		double calcularSalarioFinal() override{
			return getSalarioBase() + calcularComissao(totalVendas_);
		}
};

