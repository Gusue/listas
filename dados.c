
//Saída e Entrada de Dados


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	
	char nome[100], endereco[50], complemento[50], numero[10], bairro[20], estado [3], cidade[20], email[50], modeloV[30], cor[10], placa[15], opcao, cep[10], dataNas[12];
	bool recebaEmail;
	int dddres_com, telFix, dddcelular, telCel, inscricaoEs, cpf, cnpj, inscricaoMu, cnae, telR, telefoneComercial, data, ano;
	
	setlocale(LC_ALL, "Portuguese");
	printf("\t\t====================\t\t\n");
	printf("\t\tDADOS DO CREDENCIADO\t\t\n");
    printf("\t\t====================\t\t\n");
	printf("Razão Social e Nome Completo: \n");
	fgets(nome, 100, stdin);
	fflush(stdin);
	
	printf("Endereço: \n");
	fgets(endereco, 50, stdin);
	fflush(stdin);
	
	printf("Número: \n");
	fgets(numero, 10, stdin);
	fflush(stdin);
	
	printf("Complemento: \n");
	fgets(complemento, 50, stdin);
	fflush(stdin);
	
	printf("Bairro: \n");
	fgets(bairro, 20, stdin);
	fflush(stdin);
	
	printf("CEP: \n");
	fgets(cep, 10, stdin);
	fflush(stdin);
	
	printf("Estado(sigla): \n");
	scanf("%s", &estado);
	
	printf("Cidade: \n");
	scanf("%s", &cidade);
	
	printf("DDD do Telefone Residencial ou Comercial: \n");
	scanf("%d", &dddres_com);
	
	printf("Telefone Residencial ou Comercial: \n");
	scanf("%d", &telFix); //caso o usuario coloque que nao tenha, o fgets permite essa ação
	
	printf("DDD do celular: \n");
	scanf("%d", &dddcelular);
	
	printf("Telefone Celular: \n");
	scanf("%d", &telCel);
	
	printf("Digite o CPF: \n");
	scanf("%d", &cpf);
	
	printf("Digite o CNPJ (Preenchimento exclusivo para PJ): \n");
	scanf("%d", &cnpj);

	printf("Insc. Estadual: (preenchimento exclusivo para PJ): \n");
	scanf("%d", &inscricaoEs);	
	
	printf("Insc. Municipal: (preenchimento exclusivo para PJ): \n");
	scanf("%d", &inscricaoMu);
	
	printf("CNAE: (preenchimento exclusivo para PJ): \n");
	scanf("%d", &cnae);
	
	printf("Data de Nascimento: \n");
	scanf("%s", &dataNas);
	
	fflush(stdin);
	printf("Deseja receber os proximos boletos por e-mail(S/N)?: \n");
    opcao = getchar();
    if (toupper(opcao) == 'S'){
    	recebaEmail = 1;
     }else if(toupper(opcao) == 'N'){
    	recebaEmail = 0;
	printf("Nao\n\n");
     }else{
    printf("Opcao Invalida\n\n");
     } 
     
		    
	printf("E-mail: \n");
	scanf("%s", &email);
	
	printf("Contato do responsável (em caso de Pessoa Jurídica): \n");
	scanf("%d", &telR);	

	printf("Telefone comercial: \n");
	scanf("%d", &telefoneComercial);

	printf("Data: \n");
	scanf("%d", &data);
	system("cls");

    printf("\t\t==================\t\t\n");
	printf("\t\tDADOS DOS VEICULOS\t\t\n");
	printf("\t\t==================\t\t\n");
	printf("Placa: \n");
	scanf("%s", &placa);

	printf("Modelo: \n");
	scanf("%s", &modeloV);
		
	printf("Ano: \n");
	scanf("%d", &ano);
	
	printf("Cor: \n");
	scanf("%s", &cor);

	return 0;
}