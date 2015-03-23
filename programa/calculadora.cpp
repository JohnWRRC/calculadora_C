#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <string>
#include <math.h>
using namespace std;

main(){
	int op,i,cont_vezesRodar;
	
	float n1,n2,resultado;
	cont_vezesRodar=1;
	cont_listaCalculo=0;
	
	for (i=1; cont_vezesRodar==1;){
		printf("---------------------------------------------------\n");
		printf("-------------------CAlCULADORA---------------------\n");
		printf("---------------------------------------------------\n");	
		printf("Escolha a operacao :");
		printf("\n 1-Soma ");
		printf("\n 2-Subtracao ");
		printf("\n 3-Multiplicacao ");
		printf("\n 4-Divisao ");
		printf("\n 5-Exponenciacao ");
		printf("\n 6-Raiz Quadrada ");
		printf("\n 7-Porcentagem ");
		printf("\n 0-sair \n");
		scanf("%d",&op);
		switch (op){
   			case 1:
     				printf("Digite o primeiro numero:\t");
     				scanf("%f",&n1);
     				printf("Digite o primeiro numero:\t");
     				scanf("%f",&n2);
     				resultado=n1+n2;
     				printf("O resultado da soma e \t: %.2f",resultado);
   					break;
   					

   			case 2:
     				printf("Digite o primeiro numero:\t");
     				scanf("%f",&n1);
     				printf("Digite o primeiro numero:\t");
     				scanf("%f",&n2);
     				resultado=n1-n2;
     				printf("O resultado da subtracao e \t: %.2f",resultado);
     				break;
     		
     		case 3:
     				printf("Digite o primeiro numero:\t");
     				scanf("%f",&n1);
     				printf("Digite o primeiro numero:\t");
     				scanf("%f",&n2);
     				resultado=n1*n2;
     				printf("O resultado da multiplicação e \t: %.2f",resultado);
     				break;
     		
     		case 4:
     				printf("Digite o dividendo:\t");
     				scanf("%f",&n1);
     				printf("Digite o divisor:\t");
     				scanf("%f",&n2);
     				if(n1>0 and n2>0){
     					resultado=n1/n2;
     					printf("O resultado da divisao e \t: %.2f",resultado);	
					 }
					 else{
					 	printf("Opereca nao permitida");
					 }
     			
     				
     				
     				break;
     		case 5:
     				printf("Digite um numero:\t");
     				scanf("%f",&n1);
     				printf("Digite o expoente:\t");
     				scanf("%f",&n2);
     				resultado=pow(n1,n2);
     				printf("O resultado da potenciacao e \t: %.2f",resultado);
     				break;
     		
     		case 6:
     				printf("Digite o radicando:\t");
     				scanf("%f",&n1);
     				if(n1>0){
     					resultado=sqrt(n1);
     					printf("O resultado da multiplicação e \t: %.2f",resultado);
     					
					 }
					 else{
					 	printf("Nao existe raiz de numero negativo!");
					 }
     				
     				
     				break;
     		case 7:
     				printf("Digite o numero a saber a %%:\t");
     				scanf("%f",&n1);
     				printf("Quanto %% deseja saber ?");
     				scanf("%f",&n2);
     				if(n1>0){
     					resultado=(n1*n2)/100;
     					
     					printf("O resultado da multiplicação e \t: %.2f",resultado);
     					
     					
     					
					 }
					 else{
					 	printf("Nao existe raiz de numero negativo!");
					 }
     				
     				
     				break;
     		
     		case 0:
     				printf("Obrigado:\t");getch();
     				cont_vezesRodar=2;
     				break;
     		
     		

   			default:
     		printf("Opcao invalida :");
		}	
		
		if (op!=0){
		
		printf("\nDeseja continuar 1-SIM 2-NAO:\t");
		scanf("%d",&cont_vezesRodar);
		for (i=1; cont_vezesRodar!=1 and cont_vezesRodar!=2; ){
			printf("Opçao invalida!");
			printf("\nDeseja continuar 1-SIM 2-NAO:\t");
			scanf("%d",&cont_vezesRodar);
		}
			
		}
		system ("cls");
		
		cont_listaCalculo++;
		
		
	}

	
	
	
}
