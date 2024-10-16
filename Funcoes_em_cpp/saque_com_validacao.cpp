#include <iostream>

using namespace std;

bool validarSaque(float saque, float limite); 
void avisarErroDeLimiteDeSaqueUltrapassado();
void sacar(float saque, float limite);

float saldo = 100;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float limite = 1000, saque;
	
	cout << "Limite atual: " << limite << endl;
	cout << "Saldo atual: " << saldo << endl;
	
	cout << endl;
	
	cout << "Digite seu valor de saque: ";
	cin >> saque;
	cout << endl;
	
	sacar(saque, limite);
	
	cout << "Saldo atual: " << saldo << endl;
	
	return 0;
}

bool validarSaque(float saque, float limite){
	if(saque <= limite){
		return true;
	}
	return false;
}

void avisarErroDeLimiteDeSaqueUltrapassado(){
	cout << "Valor de saque ultrapassa o limite." << endl;
}

void sacar(float saque, float limite){
	if(validarSaque(saque, limite)){
		saldo -= saque;
	}else{
		avisarErroDeLimiteDeSaqueUltrapassado();
	}
}
