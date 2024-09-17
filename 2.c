#include <stdio.h>
#include <ctype.h>

// função verifica existencia da letra a  na string e conta

int checa_a(const char *str){
	int cont = 0;
	
	
	while (*str){
		if (toupper (*str) == 'A') {
            cont++;
        }
        str++;
	}
	
	return cont;
}

int main (){
	
	char string [100];
	int contaA;
	
	printf("Digite uma string sem acentos:\n");
	fgets(string, sizeof(string), stdin);

	
	contaA= checa_a (string);
	
	if (contaA>0){
		printf("\nNa string  %s a letra A aparece %d vezes ",string,contaA);
	}
	
	else{
		
		printf("\nNa string %s a letra A nao aparece",string);
	}
	
	return 0;
	
	}
