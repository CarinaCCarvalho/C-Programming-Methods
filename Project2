# Exercise 1

#include <stdio.h>
#include <stdlib.h>

const int MaxLin=100;
const int MaxCol=100;

int main () 
{ 
	
int A[MaxLin][MaxCol];
int i,j,m,n; /* i e j defini, consecutivamente, como um um contador que percorre a matriz dada, através das linhas e colunas. */ 
	
/* Abrir o ficheiro DadosMatrizDensa. */
FILE *fDadosMatrizDensa; 
fDadosMatrizDensa = fopen("DadosMatrizDensa.txt","r");

if (fDadosMatrizDensa==NULL){
		printf("Nao foi possivel abrir o ficheiro %s\n","DadosMatrizDensa.txt");
		exit(EXIT_FAILURE);
	}

/* Ler o número de linhas e colunas da matriz A, e ficar escrito na execução do programa. */ 
fscanf(fDadosMatrizDensa,"%d",&m);
printf("\nNumero de linhas: %d \n",m);
fscanf(fDadosMatrizDensa,"%d",&n);
printf("Numero de colunas: %d \n",n);
	
/* Percorrer toda a matriz, com contadores, para ler o número de linhas e colunas da matriz A */ 
while(!feof(fDadosMatrizDensa)){
for(i=0;i<m;i++)
	for(j=0; j<n; j++) fscanf(fDadosMatrizDensa, "%d", &A[i][j]);
}

fclose(fDadosMatrizDensa);

/* Deixar a matriz A escrita na execução do programa. */ 

printf("\nMatriz A: \n");
for(i=0;i<m;i++){
	for(j=0; j<n; j++) printf("%2d", A[i][j]);
	printf("\n");
}

int Ax[100];
int Al[100];
int Ac[100];
int k;

/* Percorrer todos os elementos da matriz para saber quantos são não nulos, para a seguir os declarar. */ 
/* k é uma variável que vai ficar definida como a dimensão dos vetores. */ 
k=0;
 for(i=0; i<m; i++){
	for (j=0; j<n; j++){
		if (A[i][j] != 0){
		Ax[k]= A[i][j]; 
		Al[k]=i; 
		Ac[k]=j; 
		k++;
		} 
	}
}	
 
 /* Abrir o ficheiro ResultadosVetoresAxAlAc e deixar os vetores pedidos escritos. */ 
 FILE *fResultadosVetoresAxAlAc;
 fResultadosVetoresAxAlAc = fopen("ResultadosVetoresAxAlAc.txt","w");
 
 fprintf (fResultadosVetoresAxAlAc,"Ax=\t"); printf ("\nAx=\t");
 for (i=0; i<k; i++){
	fprintf (fResultadosVetoresAxAlAc, "%d\t", Ax[i]);printf ("%d\t", Ax[i]);}
	fprintf (fResultadosVetoresAxAlAc, "\n"); printf("\n");
	 
fprintf (fResultadosVetoresAxAlAc,"Al=\t"); printf ("Al=\t");
 for (i=0; i<k; i++){
	fprintf (fResultadosVetoresAxAlAc, "%d\t", Al[i]); printf ("%d\t", Al[i]);}
	fprintf (fResultadosVetoresAxAlAc, "\n"); printf("\n");
	 
fprintf (fResultadosVetoresAxAlAc,"Ax=\t"); printf ("Ac=\t");
 for (i=0; i<k; i++){
	fprintf (fResultadosVetoresAxAlAc, "%d\t", Ac[i]); printf ("%d\t", Ac[i]);}
	fprintf (fResultadosVetoresAxAlAc, "\n"); printf("\n");

fclose(fResultadosVetoresAxAlAc);
printf("\nO ficheiro foi criado com sucesso.");

  return 0;
}



# Exercise 2

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int m,n,o; /* m é o número de linhas da matriz, n é o número de colunas da matriz e o é o número de elementos não nulos da matriz. */ 
	
	
FILE *fDadosVetoresCRS; 
fDadosVetoresCRS = fopen("DadosVetoresCRS.txt", "r+");   

if (fDadosVetoresCRS==NULL){
		printf("Nao foi possivel abrir o ficheiro %s\n","DadosVetoresCRS.txt");
		exit(EXIT_FAILURE);
	}

fscanf(fDadosVetoresCRS,"%d",&m);
printf("Numero de linhas: %d \n", m);
fscanf(fDadosVetoresCRS,"%d",&n);
printf("Numero de colunas: %d \n", n);
fscanf(fDadosVetoresCRS,"%d",&o);
printf("Numero de elementos nao nulos: %d \n", o);

int Ax[o];
int Ac[o];
int Ap[o+1];

/* Criei um contador para percorrer os vetores e lê-los. */ 
int cont; 
for (cont=0; cont<o; cont++)
fscanf (fDadosVetoresCRS, "%d", &Ax[cont]);
for (cont=0; cont<o; cont++)
fscanf (fDadosVetoresCRS, "%d", &Ac[cont]);
for (cont=0; cont<=o; cont++)
fscanf (fDadosVetoresCRS, "%d", &Ap[cont]);

fclose(fDadosVetoresCRS);
	
	FILE *fResultadoMatrizDensa;	
fResultadoMatrizDensa = fopen("ResultadoMatrizDensa.txt", "w+"); 

 /* Criei uma matriz nula, com o mesmo número de linhas e colunas iniciais */ 
int A[m][n];
int i,j;
for(i=0;i<m;i++)
	for(j=0; j<n; j++){
	A[i][j]=0;}

/* Com as novas variáveis, fiz contadores que vão ler os elementos até ao tamanho máximo dos vetores*/ 

int a,b;
for(a=0; a<o; a++)
for(b=0; b<o; b++){ 
if (Ap[a]<= b && b<Ap[a+1]){
	A[a][Ac[b]]=Ax[b] ;}
}

/* E agora, escreve-se a matriz com os valores, mudando de linhas */ 
int cont1, cont2;
for(cont1=0; cont1<m; cont1++){
for(cont2=0; cont2<n; cont2++){
fprintf (fResultadoMatrizDensa, "%d", A[cont1][cont2]);}
fprintf (fResultadoMatrizDensa, "\n");}


fclose(fResultadoMatrizDensa);
printf("\n O ficheiro foi criado com sucesso.");

	return 0;
}

