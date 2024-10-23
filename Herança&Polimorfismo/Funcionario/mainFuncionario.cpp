#include "FuncionarioComissionado.cpp"
#include "FuncionarioHorista.cpp"
#include <iostream>
#include <string>
using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    FuncionarioHorista funcionarioHorista("Geovane", 75.5, 20.35);
    FuncionarioComissionado funcionarioComissionado("Adriana", 1420, 10460, 0.05);
    cout << "Nome: " << funcionarioHorista.getNome() << " | " << "Salário final: " << funcionarioHorista.calcularSalarioFinal() << endl;
    cout << "Nome: " << funcionarioComissionado.getNome() << " | " << "Salario final: " << funcionarioComissionado.calcularSalarioFinal() << endl;
    return 0;
}