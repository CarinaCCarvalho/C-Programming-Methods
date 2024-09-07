# C-Programming-Methods
Programming Methods
#include <stdio.h> 
#include <math.h>
int main ()
{
double notaP1, notaP2, notaF1, notaF2, S;
int S1;

/*Pedi ao programa para escrever "Nota final de Metodos de Programacao 1". 
 * Para isso, o programa vai pedir para ser introduzida a nota do primeiro projeto.*/
printf ("Nota final de Metodos de Progracao 1\n");
printf("Introduza o valor da notaP1 de 0 a 2\n");
scanf("%lf",&notaP1);
if (notaP1<0 || notaP1>2){ 
	printf ("Erro de dados\n");
	return 0;}

/*O programa vai pedir para ser introduzida a nota do segundo projeto, numa escala de 0 a 4.*/
printf("Introduza o valor da notaP2 de 0 a 4\n");
scanf("%lf",&notaP2);
if (notaP2<0 || notaP2>4){
	printf ("Erro de dados\n");
    return 0;}

/*O programa vai pedir para ser introduzida a nota da primeira frequencia, numa escala de 0 a 20.*/
printf("Introduza o valor da notaF1 de 0 a 20\n");
scanf("%lf",&notaF1);
if (notaF1<0 || notaF1>20){
	printf ("Erro de dados\n");
	return 0;}

/*O programa vai pedir para ser introduzida a nota da segunda frequencia, numa escala de 0 a 20.*/
printf("Introduza o valor da notaF2 de 0 a 20\n");
scanf ("%lf", &notaF2);
if (notaP2<0 || notaP2>20){
	printf ("Erro de dados\n");
	return 0;}

/*A soma total é calculada da seguinte forma:*/
S= notaP1+ notaP2+ notaF1*0.35+notaF2*0.35;
/*Pedi ao programa para introduzir uma variável, inteira, para fazer os arredondamentos finais.*/
S1=round(S);
printf ("A nota final de MP1 e: %d\n",S1);
/*Assim, a nota final vai corresponder a uma destas opções.*/
printf ("Corresponte a:\n");
if (S1>=0 && S1<=9){ 
	printf ("Insuficiente");}
else {if (S1>=10 && S1<=13){
	printf ("Suficiente");}
else {if (S1>=14 && S1<=16){
	printf ("Bom");}
else {if (S1>=17 && S1<=20){
	printf ("Muito bom");} 
else {if (S1<0 || S1>20){
	printf ("Erro de dados");}
}}}}
return 0;
}
