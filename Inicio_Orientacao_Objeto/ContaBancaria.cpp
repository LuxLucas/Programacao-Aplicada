#include <string>
#include <iostream>
using namespace std;

class ContaBancaria{
	private:
		double saldo;
		string senha;
		
		void setSaldo(double novoSaldo){
			this -> saldo = novoSaldo;			
		}
		
		void setSenha(string novaSenha){
			this -> senha = novaSenha;	
		}
		
	public:
		ContaBancaria(double saldo, string senha){
			this -> setSaldo(saldo);
			this -> setSenha(senha);
		}
		
		bool validarSenha(string senhaInserida){
			return this -> senha == senhaInserida;
		}
		
		string receberSenhaDeUsuario(){
			string senha;
			cout << "Senha: ";
			cin >> senha;
			cout << endl;
			return senha;
		}
		
		
		void depositar(double deposito){
			string senha = this -> receberSenhaDeUsuario();
			if(this -> validarSenha(senha)){
				this -> saldo += deposito;
				cout << "Depositado com sucesso" << endl;
			}else{
				cout << "Senha inválida" << endl;
			}
		}
		
		void sacar(double saque){
			string senha = this -> receberSenhaDeUsuario();
			if(this -> validarSenha(senha)){
				if(this -> saldo >= saque){
					this -> saldo -= saque;
					cout << "Sacado com sucesso" << endl;
				}else{
					cout << "Saque maior que saldo" << endl;
				}
			}else{
				cout << "Senha inválida" << endl;
			}
		}
		
		void exibirSaldo(){
			string senha = this -> receberSenhaDeUsuario();
			if(this -> validarSenha(senha)){
				cout << this -> saldo << endl;
			}else{
				cout << "Senha inválida" << endl;
			}
		}
};
