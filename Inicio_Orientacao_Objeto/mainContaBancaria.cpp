#include "ContaBancaria.cpp"
#include <string>

int main(){
	double saldo = 145;
	string senha = "batata123";
	ContaBancaria conta(saldo, senha);
	
	conta.sacar(20);
	conta.depositar(35);
	conta.exibirSaldo();
	
	return 0;
} 
