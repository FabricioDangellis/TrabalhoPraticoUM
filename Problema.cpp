#include <Windows.h>
#include <iostream>
#include "genetico.h"			//incluindo o arquivo .h que tem as funções criadas 
using namespace std;

#define green "\033[32m"		//definindo a cor verde
#define red   "\033[31m"		//definindo a cor vermelha
#define default "\033[m"		//definindo default

int main()
{
	SetConsoleOutputCP(1252);	//utilizando da bibliteca Windows.h para que mostre crretamente os acentos e a ç
	
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------LENDO AS PRIMEIRAS SLUÇÕES DO TECLADO---------------------------------------------------------------*/
	
	unsigned short solucao1, solucao2, solucao3, solucao4, solucao5, solucao6;				//as 6 primeiras soluções digitada são guardadas em variaveis short que guardam somente positivos
	
	cout << "Entre com 6 soluções iniciais (números entre 0 e 65535):\n";					//lendo os 6 valores do teclado
	cin >> solucao1 >> solucao2 >> solucao3 >> solucao4 >> solucao5 >> solucao6;

	system("cls");			//limpando a tela para poder continuar com a execução66


/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------TESTANDO AS 6 PRIMEIRAS SLUÇÕES-------------------------------------------------------------------*/
	
	cout << "Resultado da Avaliação\n-------------------------\n";
	
	//TESTANDO A SOLUÇÃO 1
	cout << right; cout.width(6); cout << solucao1;			//exibindo a solução 1(alinhada a direita)
		if ((Funcao_avaliacao(solucao1)) == 1)				//chamando a função de avaliação e se o resultado retornado dela for 1 os objetos cabem na mochila
			cout << green << "OK" << default << endl;		//se coulber a mensaguem ok em verde aparece
		else
			cout << red << "X" << default << endl;			//se não colber o X vermelho apararece

	
	//TESTANDO A SOLUÇÃO 2 
	cout << right; cout.width(6); cout << solucao2;   
		if ((Funcao_avaliacao(solucao2)) == 1)				
			cout << green << "OK" << default << endl;		
		else
			cout << red << "X" << default << endl;			

	
	//TESTANDO A SOLUÇÃO 3
	cout << right; cout.width(6); cout << solucao3;   
		if ((Funcao_avaliacao(solucao3)) == 1)			
			cout << green << "OK" << default << endl;		
		else
			cout << red << "X" << default << endl;			

	//TESTANDO A SOLUÇÃO 4
	cout << right; cout.width(6); cout << solucao4;   
		if ((Funcao_avaliacao(solucao4)) == 1)				
			cout << green << "OK" << default << endl;		
		else
			cout << red << "X" << default << endl;			

	
	//TESTANDO A SOLUÇÃO 5
	cout << right; cout.width(6); cout << solucao5;   
		if ((Funcao_avaliacao(solucao5)) == 1)				
			cout << green << "OK" << default << endl;		
		else
			cout << red << "X" << default << endl;			

	
	//TESTANDO A SOLUÇÃO 6
	cout << right; cout.width(6); cout << solucao6;   
		if ((Funcao_avaliacao(solucao6)) == 1)				
			cout << green << "OK" << default << endl;		
		else
			cout << red << "X" << default << endl;			


/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*----------------------------------------------ENCONTRANDO E TESTANDO AS 4 NOVAS SOLUÇÕES-------------------------------------------------------------------*/
	
	unsigned short retornoCruzamentoPN, retornoCruzamentoARI, retornoMutacaoSI, retornoMutacaoDU;	//guardam o retrno das funções
	
	cout << "-------------------------\n";

	//TESTANDO SOLUÇÃO DO CRUZAMENTO DE PONTO ÚNICO
	retornoCruzamentoPN = Cruzamento_Ponto_unico(solucao1, solucao2);			//chamando a função que vai fazer o cruzamento de ponto unico entre as soluções
	cout << right; cout.width(6); cout << retornoCruzamentoPN;					//exibe o resultado retornado da função cruzamento ponto unico
		if ((Funcao_avaliacao(retornoCruzamentoPN)) == 1)						//chamando a função de avaliação e se o resultado retornado dela for 1 os objetos cabem na mochila
			cout << green << "OK" << default << endl;							//se coulber a mensaguem ok em verde aparece
		else
			cout << red << "X" << default << endl;								//se não colber o X vermelho apararece


	//TESTANDO A SOLUÇÃO DO CRUZAMENTO ARITIMÉTICO
	retornoCruzamentoARI = Cruzamento_Aritimetico(solucao3, solucao4);			//chama a função que faz o cruzamento aritimetico das soluções 3 e 4 e guarda o retrno na variavel
	cout << right; cout.width(6); cout << retornoCruzamentoARI;
		if ((Funcao_avaliacao(retornoCruzamentoARI)) == 1)
			cout << green << "OK" << default << endl;
		else
			cout << red << "X" << default << endl;


	//TESTANDO A SOLUÇÃO DA MUTAÇÃO SIMPLES
	retornoMutacaoSI = Mutacao_Simples(solucao5);								//chama a função que faz a mutação simples da solução 5
	cout << right; cout.width(6); cout << retornoMutacaoSI;
		if ((Funcao_avaliacao(retornoMutacaoSI)) == 1)
			cout << green << "OK" << default << endl;
		else
			cout << red << "X" << default << endl;


	//TESTANDO A CRUZAÇÃO DA MUTAÇÃO DUPLA
	retornoMutacaoDU = Mutacao_Dupla(solucao6);									//chama a função que faz a mutação dupla da solução 6
	cout << right; cout.width(6); cout << retornoMutacaoDU;
		if ((Funcao_avaliacao(retornoMutacaoDU)) == 1)
			cout << green << "OK" << default << endl;
		else
			cout << red << "X" << default << endl;

	return 0;
}
