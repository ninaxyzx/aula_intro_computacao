#include <stdio.h>

int main(void) {
	int idade ;
	float altura;
	char inicial;
	char resposta;
	/* comando de saída */
	puts("=== Cadastro ismples em c ===");
	
	/* entrada de inteiro*/
	printf("digite sua idade: ");
	scanf("Xd", &idade);
	
	/* entrada de Real*/
	printf("digite sua altura(exemplo: 1.75): ");
	scanf("%f", &altura);
	
		/* entrada de caractere*/
	printf("digite sua inicial do seu nome: ");
	scanf("%c", &inicial);
	
	
	getc(stdin);
		printf("Voce gosta de programacao (s/n): ");
		resposta = getc(stdin);
		
		/*comando de atribuicao*/
		idade = idade + 1;
		
		/*saida formatada*/
		printf("\n===Resultados ===\n ");
		printf("No seu proximo ano, voce tera %d anos.\n ",idade);
		printf("sua altura informada foi %2f m. \n ",altura);
		printf("a inicial do seu nome e %c. \n ",inicial);
		printf("sua resposta foi %c. \n ",resposta);
		
		puts("programa encerrado com sucesso.");
		
		return 0;
		
		
		
	
	
	
	
	
	
	
}