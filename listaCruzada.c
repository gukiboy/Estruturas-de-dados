#include "listaCruzada.h"

// Insere elemento na matriz

	void insereCelula(MATRIZ* matriz,DADO* dado, int linha, int coluna){
		CELULA* auxLinha = matriz->posIni;
		CELULA* auxColuna = matriz->posIni;
		CELULA* novo = (CELULA*)malloc(sizeof(CELULA));
		
		while((linha>1)&&(auxLinha->abaixo!=matriz->posIni)){
			auxLinha=auxLinha->abaixo;
			linha--;
		}
		while((coluna>1)&&(auxColuna->direita!=matriz->posIni)){
			auxColuna=auxColuna->direita;
			coluna--;
		}
		
		novo->direita = auxColuna->direita;
		novo->abaixo = auxLinha->abaixo;
		auxLinha=novo;
		auxColuna=novo;
			return;
	}
	
	void inicializaMatriz(MATRIZ* matriz){
		matriz = NULL;
	}
	
	DADO* acessaDado(MATRIZ* matriz, int linha, int coluna){
		CELULA* auxLinha = matriz->posIni;
		CELULA* auxColuna = matriz->posIni;
		
		while((linha>0)&&(auxLinha->abaixo!=matriz->posIni)){
			auxLinha = auxLinha->abaixo;
			linha--;
		}
		if(linha>0){
			return NULL;
		}
		
		while((coluna>0)&&(auxColuna->direita!=matriz->posIni)){
			auxColuna = auxColuna->direita;
			coluna--;
		}
		if(coluna>0){
			return NULL;
		}
		
	}
