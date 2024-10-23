#include "Funcionario.h"
#include <string>
using namespace std;

class FuncionarioHorista: public Funcionario{
    protected:
        double horasTrabalhadas_, salarioPorHora_;
    public:
        FuncionarioHorista(string nome, double horasTrabalhadas, double salarioPorHora):
        Funcionario(nome), horasTrabalhadas_(horasTrabalhadas), salarioPorHora_(salarioPorHora){}
        double calcularSalarioFinal() override{
            return horasTrabalhadas_ * salarioPorHora_;
        }
};