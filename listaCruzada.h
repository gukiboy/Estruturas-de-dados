/*
	autor: Gustavo Kendy de Souza Kishima

*/
typedef struct{
        int data;
}DADO;

typedef struct celula{
        DADO dado;
        int linha;
        int coluna;
        struct celula* direita;
        struct celula* abaixo;
}CELULA;

typedef struct{
        CELULA* posIni;
}MATRIZ;

void insereCelula(MATRIZ* matriz,DADO* dado, int linha, int coluna);
void inicializaMatriz(MATRIZ* matriz);
DADO* acessaDado(MATRIZ* matriz, int linha, int coluna);
