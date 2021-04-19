/*--------------------------------------------------------------------------------------------------------------------------------------------*/
/*-------------------------------------------------FUN��ES QUE MANIPULAM OS BITS--------------------------------------------------------------*/

//FUN��O QUE FAZ O AND BIN�RIO------------------------------------------------------------------------------------------
unsigned short And_Binario(unsigned short Val_um, unsigned short Val_dois)
{
	unsigned short resultado = Val_um & Val_dois;		//a variavel recebe o and entre os dois valores recebidos

	return resultado;									//retornando o valor da and
}

//FUN��O QUE FAZ O OR BIN�RIO--------------------------------------------------------------------------------------------
unsigned short Or_Binario(unsigned short Val_um, unsigned short Val_dois)
{
	unsigned short resultado = Val_um | Val_dois;		//a variavel recebe o or entre os dois valores recebidos

	return resultado;									//retornando o valor da or
}

//FUN��O QUE LIGA UM BIT--------------------------------------------------------------------------------------------------
unsigned short Ligar_bit(unsigned short valor, unsigned short bit_ligado)
{
	unsigned short mascara = 1, resultado;		//variaveis que guardam a mascara e o resultado

	mascara = mascara << (bit_ligado - 1);		//a mascara vai se mover para a esquerda o valor do bit recebido - 1

	resultado = Or_Binario(mascara, valor);		//chamando a fun��o or_binario para fazer o or e mudar um bit

	return resultado;							//retornando novo valor a fun��o
}

//FUN��O QUE DESLIGA UM BIT------------------------------------------------------------------------------------------------
unsigned short Desligar_bit(unsigned short valor, unsigned short bit_ligado)
{
	unsigned short mascara = 1, resultado;		//variaveis que guardam a mascara e o resultado

	mascara = mascara << (bit_ligado - 1);		//a mascara vai se mover para a esquerda o valor do bit recebido - 1

	resultado = And_Binario(~mascara, valor);	//chamando a fun��o and_binario para fazer o and e mudar um bit

	return resultado;							//retornando novo valor a fun��o
}

//FUN��O QUE GUARDA SOMENTE OS 8 BITS MAIS BAIXOS-----------------------------------------------------------------------------
unsigned short Bits_baixos(unsigned short valor)
{
	unsigned short mascara = 65280;			//a mascara tem os 8 primeiros bits iguais a 1

	mascara = mascara >> 8;					//mvendo os bits daa mascaara oito vezes a direita

	valor = And_Binario(mascara, valor);	//chamando a fun��o And_binario para termos um valor com os 8 bits baixos 1

	return valor;							//retornando novo valor a fun��o
}

//FUN�� QUE GUARDA SOMENTE OS 8 BITS MAIS ALTOS-------------------------------------------------------------------------------- 
unsigned short Bits_altos(unsigned short valor)
{
	unsigned short mascara = 65280;			//a mascara tem os 8 primeiros bits iguais a 1

	valor = And_Binario(mascara, valor);	//chamando a fun��o And_binario para termos um valor com os 8 bits altos 1

	return valor;							//retornando novo valor a fun��o
}