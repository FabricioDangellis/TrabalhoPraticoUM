#include <Windows.h>
#include <iostream>
#include "genetico.h"			//incluindo o arquivo .h que tem as fun��es criadas 
using namespace std;

#define green "\033[32m"		//definindo a cor verde
#define red   "\033[31m"		//definindo a cor vermelha
#define default "\033[m"		//definindo default

int main()
{
	SetConsoleOutputCP(1252);	//utilizando da bibliteca Windows.h para que mostre crretamente os acentos e a �
	
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------LENDO AS PRIMEIRAS SLU��ES DO TECLADO---------------------------------------------------------------*/
	
	unsigned short solucao1, solucao2, solucao3, solucao4, solucao5, solucao6;				//as 6 primeiras solu��es digitada s�o guardadas em variaveis short que guardam somente positivos
	
	cout << "Entre com 6 solu��es iniciais (n�meros entre 0 e 65535):\n";					//lendo os 6 valores do teclado
	cin >> solucao1 >> solucao2 >> solucao3 >> solucao4 >> solucao5 >> solucao6;

	system("cls");			//limpando a tela para poder continuar com a execu��o66


/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------TESTANDO AS 6 PRIMEIRAS SLU��ES-------------------------------------------------------------------*/
	
	cout << "Resultado da Avalia��o\n-------------------------\n";
	
	//TESTANDO A SOLU��O 1
	cout << right; cout.width(6); cout << solucao1;			//exibindo a solu��o 1(alinhada a direita)
		if ((Funcao_avaliacao(solucao1)) == 1)				//chamando a fun��o de avalia��o e se o resultado retornado dela for 1 os objetos cabem na mochila
			cout << green << "OK" << default << endl;		//se coulber a mensaguem ok em verde aparece
		else
			cout << red << "X" << default << endl;			//se n�o colber o X vermelho apararece

	
	//TESTANDO A SOLU��O 2 
	cout << right; cout.width(6); cout << solucao2;   
		if ((Funcao_avaliacao(solucao2)) == 1)				
			cout << green << "OK" << default << endl;		
		else
			cout << red << "X" << default << endl;			

	
	//TESTANDO A SOLU��O 3
	cout << right; cout.width(6); cout << solucao3;   
		if ((Funcao_avaliacao(solucao3)) == 1)			
			cout << green << "OK" << default << endl;		
		else
			cout << red << "X" << default << endl;			

	//TESTANDO A SOLU��O 4
	cout << right; cout.width(6); cout << solucao4;   
		if ((Funcao_avaliacao(solucao4)) == 1)				
			cout << green << "OK" << default << endl;		
		else
			cout << red << "X" << default << endl;			

	
	//TESTANDO A SOLU��O 5
	cout << right; cout.width(6); cout << solucao5;   
		if ((Funcao_avaliacao(solucao5)) == 1)				
			cout << green << "OK" << default << endl;		
		else
			cout << red << "X" << default << endl;			

	
	//TESTANDO A SOLU��O 6
	cout << right; cout.width(6); cout << solucao6;   
		if ((Funcao_avaliacao(solucao6)) == 1)				
			cout << green << "OK" << default << endl;		
		else
			cout << red << "X" << default << endl;			


/*-----------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*----------------------------------------------ENCONTRANDO E TESTANDO AS 4 NOVAS SOLU��ES-------------------------------------------------------------------*/
	
	unsigned short retornoCruzamentoPN, retornoCruzamentoARI, retornoMutacaoSI, retornoMutacaoDU;	//guardam o retrno das fun��es
	
	cout << "-------------------------\n";

	//TESTANDO SOLU��O DO CRUZAMENTO DE PONTO �NICO
	retornoCruzamentoPN = Cruzamento_Ponto_unico(solucao1, solucao2);			//chamando a fun��o que vai fazer o cruzamento de ponto unico entre as solu��es
	cout << right; cout.width(6); cout << retornoCruzamentoPN;					//exibe o resultado retornado da fun��o cruzamento ponto unico
		if ((Funcao_avaliacao(retornoCruzamentoPN)) == 1)						//chamando a fun��o de avalia��o e se o resultado retornado dela for 1 os objetos cabem na mochila
			cout << green << "OK" << default << endl;							//se coulber a mensaguem ok em verde aparece
		else
			cout << red << "X" << default << endl;								//se n�o colber o X vermelho apararece


	//TESTANDO A SOLU��O DO CRUZAMENTO ARITIM�TICO
	retornoCruzamentoARI = Cruzamento_Aritimetico(solucao3, solucao4);			//chama a fun��o que faz o cruzamento aritimetico das solu��es 3 e 4 e guarda o retrno na variavel
	cout << right; cout.width(6); cout << retornoCruzamentoARI;
		if ((Funcao_avaliacao(retornoCruzamentoARI)) == 1)
			cout << green << "OK" << default << endl;
		else
			cout << red << "X" << default << endl;


	//TESTANDO A SOLU��O DA MUTA��O SIMPLES
	retornoMutacaoSI = Mutacao_Simples(solucao5);								//chama a fun��o que faz a muta��o simples da solu��o 5
	cout << right; cout.width(6); cout << retornoMutacaoSI;
		if ((Funcao_avaliacao(retornoMutacaoSI)) == 1)
			cout << green << "OK" << default << endl;
		else
			cout << red << "X" << default << endl;


	//TESTANDO A CRUZA��O DA MUTA��O DUPLA
	retornoMutacaoDU = Mutacao_Dupla(solucao6);									//chama a fun��o que faz a muta��o dupla da solu��o 6
	cout << right; cout.width(6); cout << retornoMutacaoDU;
		if ((Funcao_avaliacao(retornoMutacaoDU)) == 1)
			cout << green << "OK" << default << endl;
		else
			cout << red << "X" << default << endl;

	return 0;
}
