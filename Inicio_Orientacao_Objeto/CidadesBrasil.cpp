#include <string>
using namespace std;

class CidadesBrasil{
	private:
		string nome, dataFundacao;
		int numeroHabitantes, numeroEleitores;
		
	public:
		
		CidadesBrasil(string nome, string dataFundacao, int numeroHabitantes, int numeroEleitores){
			setNome(nome);
			setDataFundacao(dataFundacao);
			setNumeroHabitantes(numeroHabitantes);
			setNumeroEleitores(numeroEleitores);
		}
		
		//Funções Get
		string getNome(){
			return nome;
		}
		
		string getDataFundacao(){
			return dataFundacao;
		}
		
		int getNumeroHabitantes(){
			return numeroHabitantes;
		}
		
		int getNumeroEleitores(){
			return numeroEleitores;
		}
		
		//Funções Set
		void setNome(string novoNome){
			nome = novoNome;
		}
		
		void setDataFundacao(string novaDataFundacao){
			dataFundacao = novaDataFundacao;
		}
		
		void setNumeroHabitantes(int novoNumeroHabitantes){
			numeroHabitantes = novoNumeroHabitantes;
		}
		
		void setNumeroEleitores(int novoNumeroEleitores){
			numeroEleitores = novoNumeroEleitores;
		}
};
