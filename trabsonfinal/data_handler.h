#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Arquivos
{
	private:
		std::string lineCleaner(std::string lineData, char chars[]);//Limpa as linhas do csv dos caracteres indesejados
		int createFolders(std::string dataFolder, std::string indexFolder);//testa as pasta e se n�o existirem as cria
		void createDataTables(std::string dataBaseName);	//fun��o principal de cria��o das tabelas de dados
		void createIndexTables(std::string dataBaseName);	//fun��o principal de cria��o das tabelas de index/relacionamentos
		void createTypeTable(std::string dataBaseName);	//fun��o auxiliar de cria��o da tabelas de tipos
		void createAbilityTable(std::string dataBaseName);	//fun��o auxiliar de cria��o da tabelas de habilidades
		void createPokemonTable(std::string dataBaseName);	//fun��o auxiliar de cria��o da tabelas de pokemons
		void createStatTable(std::string dataBaseName);	//fun��o auxiliar de cria��o da tabelas de stats
		bool searchArchive(std::fstream* file, std::string word);
		void createPokemon_AbilityTable(std::string dataBaseName);
		void createPokemon_TypeTable(std::string dataBaseName);
		void createPokemon_StatTable(std::string dataBaseName);
	public:
		int getId(std::string stringForSearch, int tabelaToSearch);
		std::string getById(std::string stringForSearch, int tabelaToSearch);
		int creationManager(std::string dataBaseName);//manages the creation of the archives
		std::vector<std::string> split(std::string s, char delimiter);//separa uma string em vetores baseado em um delimitador
};