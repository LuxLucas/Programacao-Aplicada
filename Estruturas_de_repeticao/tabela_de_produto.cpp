#include <iostream>
#include <string>

using namespace std;

int receberCodigoDoProuto(){
	int codigoDoProduto;
	
	cout << "Código do produto: ";
	cin >> codigoDoProduto;
	cout << endl;
	
	return codigoDoProduto;
}

string receberDescricaoDoProduto(int codigo){
	switch(codigo){
		case 1:
			return "Alimento não-perecível";
			break;
		case 2:
			return "Alimento perecível";
			break;
		case 3:
			return "Alimento perecível";
			break;
		case 4:
			return "Alimento perecível";
			break;
		case 5:
			return "Vestuário";
			break;
		case 6:
			return "Vestuário";
			break;
		case 7:
			return "Higiene Pessoal";
			break;
		case 8:
			return "Limpeza e Utensílios Domésticos";
			break;
		case 9:
			return "Limpeza e Utensílios Domésticos";
			break;
		case 10:
			return "Limpeza e Utensílios Domésticos";
			break;
		case 11:
			return "Limpeza e Utensílios Domésticos";
			break;
		case 12:
			return "Limpeza e Utensílios Domésticos";
			break;
		case 13:
			return "Limpeza e Utensílios Domésticos";
			break;
		case 14:
			return "Limpeza e Utensílios Domésticos";
			break;
		case 15:
			return "Limpeza e Utensílios Domésticos";
			break;
			
		default: return "Descrição não encontrada";
	}	
}

int main(){
	int codigo = receberCodigoDoProuto();
	
	setlocale(LC_ALL, "portuguese");
	
	cout << endl;
	cout << receberDescricaoDoProduto(codigo);
	
	return 0;
}
