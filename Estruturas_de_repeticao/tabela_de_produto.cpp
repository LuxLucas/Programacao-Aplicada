#include <iostream>
#include <string>

using namespace std;

int receberCodigoDoProuto(){
	int codigoDoProduto;
	
	cout << "C�digo do produto: ";
	cin >> codigoDoProduto;
	cout << endl;
	
	return codigoDoProduto;
}

string receberDescricaoDoProduto(int codigo){
	switch(codigo){
		case 1:
			return "Alimento n�o-perec�vel";
			break;
		case 2:
			return "Alimento perec�vel";
			break;
		case 3:
			return "Alimento perec�vel";
			break;
		case 4:
			return "Alimento perec�vel";
			break;
		case 5:
			return "Vestu�rio";
			break;
		case 6:
			return "Vestu�rio";
			break;
		case 7:
			return "Higiene Pessoal";
			break;
		case 8:
			return "Limpeza e Utens�lios Dom�sticos";
			break;
		case 9:
			return "Limpeza e Utens�lios Dom�sticos";
			break;
		case 10:
			return "Limpeza e Utens�lios Dom�sticos";
			break;
		case 11:
			return "Limpeza e Utens�lios Dom�sticos";
			break;
		case 12:
			return "Limpeza e Utens�lios Dom�sticos";
			break;
		case 13:
			return "Limpeza e Utens�lios Dom�sticos";
			break;
		case 14:
			return "Limpeza e Utens�lios Dom�sticos";
			break;
		case 15:
			return "Limpeza e Utens�lios Dom�sticos";
			break;
			
		default: return "Descri��o n�o encontrada";
	}	
}

int main(){
	int codigo = receberCodigoDoProuto();
	
	setlocale(LC_ALL, "portuguese");
	
	cout << endl;
	cout << receberDescricaoDoProduto(codigo);
	
	return 0;
}
