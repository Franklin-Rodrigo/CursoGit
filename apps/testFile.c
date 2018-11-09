#include "../include/prototype.h"

//-----------------------FUNÇÃO PRINCIPAL-----------------------------------------------
void main(){
	/**
	 * Caso o retorno da função creatList seja a 0 (o que significa que o arquivo "iv_semana_si.txt"), ele
	 * executará os seguintes passos.
	 * Precedido de 5 segundos o programa será finalizado.
	 */
	if(!createList()){
		printf("Desculpe, o arquivo não possui dados!");
		printf("\n");
		sleep(5);
		exit(1);
	}
	//chama a função com as opções de navegação para o usuário
	menu();}