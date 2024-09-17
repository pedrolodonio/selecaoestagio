#include <stdio.h>
#include <math.h>

//Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um n�mero, ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.

//condi��o: o numero pertenece a sequencia se e somente se um ou ambos forem um quadrado perfeito 5n�+4/5n�-4


//fun��o para verificar se � quadrado perfeito:

int quadrado_perfeito (int x){
	
	int n = (int)sqrt (x);
	
	return n*n == x;
	
	
}

//fun��o que verifica presen�a do numero na sequencia de fibonacci

int fibonacci (int f){
	
	return quadrado_perfeito (5*f*f+4) || quadrado_perfeito (5*f*f-4) ;

}


int main (){
	
	int numero;
	
	printf("digite um numero para descobrir se ele pertece a sequencia de fibonacci\n");
	scanf("%d",&numero);
	
	if (numero < 0){
		
		printf ("numeros negativos nao pertencem a sequencia de fibonacci");
		
	} 
	
	else 
		if(fibonacci(numero)){
			printf("\n%d pertence a sequencia de fibonacci",numero);
		}
		
		else{
			("\n%d n�o pertence a sequencia de fibonacci",numero);
		}
		
	return 0;
	
	
	
	
	
	
}
