#Create a list of athletes and display sorted by male and female


#include <stdio.h>
#include <string.h>

typedef struct RegistoAtleta{
  
  /* estrutura de dados */
  char Nome[30];
  int AnoDeNascimento;
  char Sexo;
  int Tempo;
}RegistoAtleta;
	
void BubbleSort (int dimv, struct RegistoAtleta vetorU[]){ //dimv é a dimensão do vetor
int i, k, a;
k=dimv;

	for (i=0; i<k-1; i++)//T é trocas
	for (a = 0; a < k-i-1; a++)  
	if (vetorU[a].Tempo>vetorU[a+1].Tempo)
	{
	struct RegistoAtleta aux;
	
	aux=vetorU[a];
	vetorU[a]=vetorU[a+1];
	vetorU[a+1]=aux;
	}
}


void EscreveVetor (int dimv, struct RegistoAtleta v[]){
		int i;
		for (i=0; i<dimv; i++)
		{
			printf ("%s %d", v[i].Nome, v[i].Tempo);
			printf ("\n");
			}
	}

int main() 
{
	
/* Estrutura de dados.*/
	int num, i, j, k;
	char Tipo;
	
	struct RegistoAtleta ListaAtletas[500]={
	{"Alberto Miranda", 1990, 'M', 58},
	{"Alice Oliveira", 1997, 'F', 56},
	{"Bruno de Carvalho", 1993, 'M', 39},
	{"Joao Pires", 2000, 'M', 52},
	{"Carolina Cunha", 2001, 'F', 63},
	{"Afonso Costa", 1998, 'M', 53},
	{"Aurora Fragoso", 1999, 'F', 37},
	{"Maria Pereira", 1996, 'F', 60},
	{"Nuno Figueira", 1987, 'M', 47},
	{"Vanda Correia", 1989, 'F', 59}};
	
	struct RegistoAtleta GrupoF[500];
	struct RegistoAtleta GrupoM[500];
	
	num=10;
	j=0;
	k=0;
	
	
	for(i=0;i<num;i++){
	if (ListaAtletas[i].Sexo=='M'){
	GrupoM[j]=ListaAtletas[i]; j++;}
	
	else if (ListaAtletas[i].Sexo=='F'){
	GrupoF[k]=ListaAtletas[i]; k++;}
	}
	
	printf ("\n\nInsira F ou M para obter a lista ordenada:%c \n", Tipo);
	scanf ("%c", &Tipo);
	
	if(Tipo=='M')
	{
		printf ("\nA lista masculina ordenada por ordem crescente e a seguinte:\n");
		BubbleSort (j, GrupoM);
		EscreveVetor (j,GrupoM);}
		
	else if(Tipo=='F')
	{	
		printf ("\nA lista feminina ordenada por ordem crescente e a seguinte:\n");
		BubbleSort (k, GrupoF);
		EscreveVetor (k, GrupoF);}
		
	return 0;
}

