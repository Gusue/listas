
//Sistema Eleitoral


#include <stdio.h>
#include <locale.h>
int main(){
	int idade;
	
	setlocale(LC_ALL, "Portuguese");
	printf("=========\n");
	printf("ELEITORAL\n");
	printf("=========\n");
	printf("INSIRA SUA IDADE: ");
	scanf("%d", &idade);
	
	if(idade < 0){
		printf("NÃO NASCEU\n");
	}else{
		if (idade < 16){
			printf("NÃO VOTA\n");
		}else{
			if (idade < 18){
				printf("VOTO OPCIONAL\n");
			}else{
				if (idade < 65){
					if (idade == 41){
						printf("GANHA PRÊMIO 1 $$$\n");
					}else{
						printf("VOTO OBRIGATÓRIO\n");
					}
				}else{
					if (idade == 82){
						printf("GANHA PRÊMIO 2 $$$\n");
					}else{
						printf("VOTO OPCIONAL\n");
					}
				}
			}
		}
	}
	
	return 0;
}