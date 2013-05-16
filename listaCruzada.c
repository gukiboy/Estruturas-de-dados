typedef struct{
        int data;
}DADO;

typedef struct celula{
        DADO dado;
        celula* direita;
        celula* abaixo;
        
}CELULA;

typedef struct{
        CELULA* posIni;
}MATRIZ;

	void insereCelula(MATRIZ matriz,DADO dado, int linha, int coluna){
		CELULA* auxLinha = matriz;
		CELULA* auxColuna = matriz;
		CELULA* novo = (CELULA*)malloc(sizeof(CELULA));
		
		while((linha>1)&&(auxLinha->abaixo!=matriz)){
			auxLinha=auxLinha->abaixo;
			linha--;
		}
		while((coluna>1)&&(auxColuna->direita!=matriz)){
			auxColuna=auxColuna->direita;
			coluna--;
		}
		
		novo->direita = auxColuna->direita;
		novo->abaixo = auxLinha->abaixo;
		auxLinha=novo;
		auxColuna=novo;
			return;
	}
