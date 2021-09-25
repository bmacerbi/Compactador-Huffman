#ifndef T_COMPACTA
#define T_COMPACTA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tArvore.h"

unsigned char **inicializaTabela();
unsigned char *inicializaString(int tam);
void liberaString(unsigned char *string);
void liberaTabela(unsigned char **tabelaHuff);
unsigned int tamanhoBinarioTxt(unsigned char **tabelaHuff, FILE *arq);
void geraCodigoTxt(unsigned char **tabelaHuff,bitmap *bitMap,FILE *arq);
void geraSaida(unsigned char **tabelaHuff, char *nomeArq, tArvore *arvHuff);

#endif