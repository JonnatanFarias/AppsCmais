#include<stdio.h>

int main(){
	
	int number[10];
	int i ;
	
	for(i=0; i <10;i++){
	
	printf("Digite o %d elemento do vetor: \n",i);
	scanf("%d",&number[i]);
	
	}
	printf("Vetor preenchido \n");
	for(i=0; i<10; i++){
		
		printf("O elemento da posicao %d e : %d \n", i, number[i]);
	}
	return(0);
	
}