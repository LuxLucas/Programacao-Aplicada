#include <iostream>
#include <stdlib.h>

using namespace std;

bool validarGenero(char genero){
	return genero == 'M' || genero == 'F';
}

char receberGenero(){
	char genero, variavelDeEscuta;
	
	do{
		cout << "Qual o seu gênero?('F'|'M'): ";
		cin >> genero;
		cout << endl;
		
		genero = toupper(genero);
		
		if(!validarGenero(genero)){
			cout << "Tipo de gênero INVÁLIDO" << endl;
			cout << "Prescione 'ENTER' para continuar...";
			cin >> variavelDeEscuta;
		}
		
	}while(!validarGenero(genero));
	
	return genero;
}

float receberAltura(){
	float altura;
	cout << "Qual a sua altura?(em metros): ";
	cin >> altura;
	cout << endl;
		
	return altura;
}

bool validarAltura(float altura){
	return altura > 0;
}

float calcularPesoIdealMasculino(float altura){
	return (72.7*altura)-58;
}

float calcularPesoIdealFeminino(float altura){
	return (62.1*altura)-44.7;
}

float calcularPesoIdeal(float altura, char genero){
	float pesoIdeal;
	
	switch(genero){
		case 'F':
			pesoIdeal = calcularPesoIdealMasculino(altura);
			break;
			
		case 'M':
			pesoIdeal = calcularPesoIdealFeminino(altura);
			break;
	}
	
	return pesoIdeal;
}

int main(){
	//Possibilitando impressão de caracteres especiais
	setlocale(LC_ALL,"portuguese");
	
	//Variáveis
	float altura, pesoIdeal;
	char genero;
	
	//Recebendo dados
	system("cls");
	genero = receberGenero();
	system("cls");
	altura = receberAltura();
	system("cls");

	
	//Validação de dado
	if(validarAltura(altura)){
		
		//Processando
		pesoIdeal = calcularPesoIdeal(altura, genero);
		
		//Resultado obtido
		cout << "Altura: " << altura << " m" << endl;
		cout << "Gênero: " << genero << endl;
		cout << "Peso Ideal: " << pesoIdeal << " Kg" << endl;
	}else{
		
		//Mensagem de erro
		cout << "Altura é INVÁLIDA" << endl;
		cout << "Reexecute o programa";
	}
	
	return 0;
}
