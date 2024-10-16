#include <iostream>
#include <vector>

int receberNumero();
std::vector<int> receberLinha(int i);
std::vector<int> multiplicarLinha(int multiplicador, std::vector<int> matriz);
void mostrarMatriz(std::vector<int> matriz);

int main(){
	// Nem sei mais como arrumar isso
	std::vector<std::vector<int>> numero[3];
	for(int i=0; i<3; ++i){
		numero[i] = receberLinha(3);
	}
	for(int i=0; i<2; ++i){
		numero[i] = multiplicarLinha(5, numero[i]);
	}
	mostrarMatriz(numero);
	return 0;
}

int receberNumero(){
	int numero;
	std::cout << "Digite um número para o vetor: ";
	std::cin >> numero;
	return numero;
}

std::vector<int> receberLinha(int tamanho){
	std::vector<int> linha(tamanho);
	for(int j=0; j<tamanho-1; ++j){
		linha[j] = receberNumero();
	}
	return linha;
}

std::vector<int> multiplicarLinha(int multiplicador, std::vector<int> matriz){
	int tamanho = matriz.size();
	for(int i=0; i<tamanho-1; ++i){
		matriz[i] *= 5;
	}
	return matriz;
}

void mostrarMatriz(std::vector<std::vector<int>>& matriz){
	std::cout << "[";
	for(std::vector<int> linha:matriz){
		std::cout << "[";
		for(int i=0; i < linha.size(); ++i){
			std::cout << linha[i];
			if (i < linha.size() - 1) {
                std::cout << ", ";
            }
		}
		std::cout << "]" << std::endl;
	}
	std::cout << "]" << std::endl;
}
