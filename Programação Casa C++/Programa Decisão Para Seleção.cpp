#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Programa:Decis�o_para_Sele��o.C\n\n");
	
	char bola1, bola2;
	float aposta, premio;

	premio =0;
	
	printf("Valor da aposta: ");
	scanf("%f",&aposta);
	
	printf("\n1a. bola sorteada: 'p' Preta ou 'v' Vermelha => ");
	fflush(stdin);
	scanf("%c", &bola1);

	printf("\n2a. bola sorteada: 'p' Preta ou 'v' Vermelha => ");
	fflush(stdin);
	scanf("%c",&bola2);
	
	if ((bola1 != 'p' && bola1 != 'v') ||(bola2 != 'p' && bola2 != 'v'))
		printf("\nCor incorreta\n");
	else {
		switch (bola1){
			case 'p':
				if(bola2 =='p')
					premio = 0;
				else
					premio=aposta/2;
				break;
			case 'v':
				if(bola2=='p')
					premio=aposta;
				else
					premio=aposta * 2;
				break;
		}
		printf("\nValor do premio: %0.2f\n", premio);
	}
	getch ();
	return 0;
}
