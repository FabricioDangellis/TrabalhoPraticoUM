#include <iostream>
#include "binario.h"		//incluindo a biblioteca criada para fazer a manipula��o dos bits
using namespace std;

/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------FUN��ES QUE IMPLEMENTAM OS OPERADORES GEN�TICOS-----------------------------------------------------------------------*/

//FUN��O QUE FAZ A AVALIA��O DAS SLU��ES
bool Funcao_avaliacao(unsigned short teste)
{
	unsigned short mascara = 1, peso = 0, valor = 0, controle;		//variaveis que guardam a mascara, peso, valor e uma variavel de controle
	bool cabe;														//variavel que vai retornar um valor booleano para a fun��o principal e dizer se os objetos cabem ou n�o na mochila

	controle = And_Binario(mascara, teste);		//testando o primeriro bit 
		if (controle != 0)						//se  primeiro bit for diferente de 0 ele esta ligado
		{
			peso = peso + 1;					//peso vai receber o peso anterior mais 1 pois � o peso do objeto P
			valor = valor + 12;					//valor vai receber o valr anterior mais 12 pois � o valor do objeto P
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;		
		}

	mascara = mascara << 1;				//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o segundo bit 
		if (controle != 0)						//se o segundo bit for diferente de 0 ele ligado ent�o peso e valor aumentam
		{
			peso = peso + 4;					//peso vai receber o peso anterior mais 4 pois � o peso do objeto O
			valor = valor + 4;					//valor vai receber o valr anterior mais 4 pois � o valor do objeto O
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o ter�eiro bit 
		if (controle != 0)						//se o terceiro bit for diferente de 0 ent�o ele esta ligado ent�o peso e valor aumentam
		{
			peso = peso + 2;					//peso vai receber o peso anterior mais 2 pois � o peso do objeto N
			valor = valor + 3;					//valor vai receber o valr anterior mais 3 pois � o valor do objeto N
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o quarto bit 
		if (controle != 0)						//se o quarto bit for diferente de 0 ele esta ligado ent�o peso e valor aumentam
		{
			peso = peso + 5;					//peso vai receber o peso anterior mais 5 pois � o peso do objeto M
			valor = valor + 10;					//valor vai receber o valr anterior mais 10 pois � o valor do objeto M
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o quinto bit 
		if (controle != 0)						//se  quinto bit for diferente de 0 ele ligado ent�o peso e valor aumentam
		{
			peso = peso + 4;					//peso vai receber o peso anterior mais 4 pois � o peso do objeto L
			valor = valor + 15;					//valor vai receber o valr anterior mais 15 pois � o valor do objeto L	
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o sexto bit 
		if (controle != 0)						//se o sexto bit for diferente de 0 ele esta ligado ent�o peso e valor aumentam
		{
			peso = peso + 2;					//peso vai receber o peso anterior mais 2 pois � o peso do objeto K
			valor = valor + 20;					//valor vai receber o valr anterior mais 20 pois � o valor do objeto K
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;	
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o setimo bit 
		if (controle != 0)						//se o setimo bit for diferente de 0 ele esta ligado ent�o peso e valor aumentam
		{
			peso = peso + 1;					//peso vai receber o peso anterior mais 1 pois � o peso do objeto J
			valor = valor + 10;					//valor vai receber o valr anterior mais 10 pois � o valor do objeto J
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o oitavo bit 
		if (controle != 0)						//se o oitavo bit for diferente de 0 ele esta ligado ent�o peso e valor aumentam
		{
			peso = peso + 4;					//peso vai receber o peso anterior mais 4 pois � o peso do objeto I
			valor = valor + 2;					//valor vai receber o valr anterior mais 2 pois � o valor do objeto I
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o nono bit 
		if (controle != 0)						//se o nono bit for diferente de 0 ele esta ligado ent�o peso e valor aumentam
		{
			peso = peso + 3;					//peso vai receber o peso anterior mais 3 pois � o peso do objeto H
			valor = valor + 1;					//valor vai receber o valr anterior mais 1 pois � o valor do objeto H
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;	
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o decimo bit 
		if (controle != 0)						//se o decimo bit for diferente de 0 ele esta ligado ent�o peso e valor aumentam
		{
			peso = peso + 2;					//peso vai receber o peso anterior mais 2 pois � o peso do objeto G
			valor = valor + 1;					//valor vai receber o valr anterior mais 1 pois � o valor do objeto G
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;	
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o decimo primeriro bit 
		if (controle != 0)						//se o decimo primeiro bit for diferente de 0 ele esta ligado ent�o peso e valor aumentam
		{
			peso = peso + 1;					//peso vai receber o peso anterior mais 1 pois � o peso do objeto F
			valor = valor + 3;					//valor vai receber o valr anterior mais 3 pois � o valor do objeto F
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o decimo segundo bit 
		if (controle != 0)						//se o decimo segundo bit for diferente de 0 ele esta ligado ent�o peso e valor aumentam
		{
			peso = peso + 9;					//peso vai receber o peso anterior mais 9 pois � o peso do objeto E
			valor = valor + 15;					//valor vai receber o valr anterior mais 15 pois � o valor do objeto E
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o decimo terceiro bit 
		if (controle != 0)						//se o decimo terceiro bit for diferente de 0 ele esta ligado ent�o peso e valor aumentam
		{
			peso = peso + 4;					//peso vai receber o peso anterior mais 4 pois � o peso do objeto D
			valor = valor + 10;					//valor vai receber o valr anterior mais 10 pois � o valor do objeto D
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o decimo quarto bit 
		if (controle != 0)						//se o decimo quarto bit for diferente de 0 ele esta ligado ent�o peso e valor almentam
		{
			peso = peso + 5;					//peso vai receber o peso anterior mais 5 pois � o peso do objeto C
			valor = valor + 8;					//valor vai receber o valr anterior mais 8 pois � o valor do objeto C
		}
		else
		{		
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o decimo quinto bit 
		if (controle != 0)						//se  decimo quinto bit for diferente de 0 ele esta ligado ent�o peso e valor almentam
		{
			peso = peso + 3;					//peso vai receber o peso anterior mais 3 pois � o peso do objeto B
			valor = valor + 4;					//valor vai receber o valr anterior mais 4 pois � o valor do objeto B
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	mascara = mascara << 1;			//movendo a mascara 1 bit a esquerda

	controle = And_Binario(mascara, teste);		//testando o decimo sexto bit 
		if (controle != 0)						//se  decimo sexto bit for diferente de 0 ele esta ligado entao peso e valr aumentam
		{
			peso = peso + 12;					//peso vai receber o peso anterior mais 12 pois � o peso do objeto A
			valor = valor + 4;					//valor vai receber o valr anterior mais 4 pois � o valor do objeto A
		}
		else
		{
			peso = peso + 0;					//se for igual a zero n�o de adiciona nada
			valor = valor + 0;
		}

	cout << " - $" << valor << " - " << right; cout.width(2); cout << peso << "Kg - ";		//exibindo na tela o valor e o peso total dos objetos na mochila 
	
	if (peso <= 20)							//se o peso for igual a 20 a mochilha cabe os objetos
		cabe = 1;
	else									//se for diferente de 20 s objetos n� cabem na mochila
		cabe = 0;

	return cabe;							//retornando ao fun��o principal o valor que indica de os objetos cabem na mchila (1=sim 0=n�o)
}

//FUN��O QUE FAZ  CRUZAMENTO PONTO UNICO---------------------------------------------------------------------------------------------------
unsigned short Cruzamento_Ponto_unico(unsigned short Val_um, unsigned short Val_dois)
{
	unsigned short mascara = 65280;					//a mascara tem os 8 primeiros bits iguais a 1 
	unsigned short novasolucao;						//gera uma nova solu��o a partir os 8 primeiros bits de val_um e os 8 ultimos de val_dois


	Val_um = Bits_altos(Val_um);					//chamando a fun��o bits_altos para termos um valor com os 8 primeiros bits 1

	Val_dois = Bits_baixos(Val_dois);				//chamando a fun��o bits_baixos para termos um valor com os 8 ultimos bits 1

	novasolucao = Or_Binario(Val_um, Val_dois);		//chamando a fun��o Or_Binario para obter um novo valor como os 8 primeiros bits de val_um e os 8 ultimos de val_dois

	return novasolucao;								//retornando o novo valor pra a fun��o principal
}

//FUN��O QUE FAZ O CRUZAMENTO ARITIM�TICO-------------------------------------------------------------------------------------------------
unsigned short Cruzamento_Aritimetico(unsigned short Val_um, unsigned short Val_dois)
{
	unsigned short novasolucao;						//variavel que vai guarar a nova solu��o

	novasolucao = And_Binario(Val_um, Val_dois);	//chamando a fun��o And_binario para fazer um and dois valores recebidos da fun��o principal

	return novasolucao;								//retornando o novo valor pra a fun��o principal
}


//FUN��O QUE FAZ A MUTA��O SIMPLES-----------------------------------------------------------------------------------------------------------
unsigned short Mutacao_Simples(unsigned short NovoValor)
{
	unsigned short bit = 10;					//variavel que diz qual bit eu quero ligar

	NovoValor = Ligar_bit(NovoValor, bit);		//chamando a fun��o Ligar_bit para mudar 1 bit 

	return NovoValor;							//retornando novo valor a fun��o principal
}

//FUN��O QUE FAZ A MUTA��O DUPLA-------------------------------------------------------------------------------------------------------------
unsigned short Mutacao_Dupla(unsigned short NovoValor)
{
	unsigned short bit;						//variavel que diz qual bit eu quero ligar

	bit = 13;								//guarda qual bit quer mudar primeiro
	NovoValor = Ligar_bit(NovoValor, bit);	//chamando a fun��o Ligar_bit para mudar o primeiro bit

	bit = 4;								//guarda qual bit quer mudar agora
	NovoValor = Desligar_bit(NovoValor, bit);	//chamando a fun��o Ligar_bit para mudar o segundo bit

	return NovoValor;						//retornando novo valor a fun��o principal
}