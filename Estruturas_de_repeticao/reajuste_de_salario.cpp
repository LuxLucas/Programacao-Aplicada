#include <iostream>

using namespace std;

float receberSalario(){
	float salario;
	
	cout << "Qual o seu salário?(em reais): ";
	cin >> salario;
	cout << endl;
	
	return salario;
}

bool validarSalario(float salario){
	return salario > 0;
}

float receberPorcentagemDeAumentoSalarialCorrespondenteAoSalario(float salario){
	float porcentagemDeAumentoSalarial[4] = {0.2, 0.15, 0.1, 0.05};
	
	if(salario <= 280.0){
		return porcentagemDeAumentoSalarial[0];
	}else if(salario < 700.0){
		return porcentagemDeAumentoSalarial[1];
	}else if(salario < 1500.0){
		return porcentagemDeAumentoSalarial[2];	
	}
	
	return porcentagemDeAumentoSalarial[3];
}

float calcularAumentoDeSalario(float salario){
	float aumentoSalarial, porcentagemDeAumentoSalarial = receberPorcentagemDeAumentoSalarialCorrespondenteAoSalario(salario);
	
	aumentoSalarial = salario * porcentagemDeAumentoSalarial;
	return aumentoSalarial;
}

int main(){
	float salario, aumentoSalarial, novoSalario, porcentagemDeAumentoSalarial;
	
	setlocale(LC_ALL, "portuguese");
	
	salario = receberSalario();
	
	if(validarSalario(salario)){
		porcentagemDeAumentoSalarial = receberPorcentagemDeAumentoSalarialCorrespondenteAoSalario(salario);
		aumentoSalarial = calcularAumentoDeSalario(salario);
		novoSalario = salario + aumentoSalarial;
		
		cout << "Salário inicial: " << salario << endl;
		cout << "Percentual aplicado: " << porcentagemDeAumentoSalarial*100 << "%" << endl;
		cout << "Valor de aumento: " << aumentoSalarial << endl;
		cout << "Novo salário: " << novoSalario << endl;
	}else{
		//Mensagem de erro
		cout << "Salário é INVÁLIDO" << endl;
		cout << "Reexecute o programa";
	}
	
	return 0;
}
