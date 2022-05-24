
//Calculadora


#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

char le_valida_operador();
int menu();
void operador(float p1, float p2, char opz);

int main()
{
    int result;
    float num1, num2;
    char op;

    do
    {
        printf("INSIRA SEU NUMERO 1: ");
        scanf("%f", &num1);
        op = le_valida_operador();
        printf("INSIRA SEU NUMERO 2: ");
        scanf("%f", &num2);

        operador(num1, num2, op);
        result = menu();
    } while (result != 1);
}

char le_valida_operador()
{
    char opz;
    fflush(stdin);
    printf("INSIRA A OPERACAO: ");
    scanf("%c", &opz);
    return opz;
}

void operador(float p1, float p2, char opz)
{
    switch (opz)
    {
    case '+':
        printf("O RESULTADO DA OPERACAO FOI %.2f", p1 + p2);
        break;
    case '-':
        printf("O RESULTADO DA OPERACAO FOI %.2f", p1 - p2);
        break;
    case '*':
        printf("O RESULTADO DA OPERACAO FOI %.2f", p1 * p2);
        break;
    case '/':
    	if(p2 == 0){
    		printf("O RESULTADO DA OPERACAO EH ZERO/INVALIDO \n");
		}else{
			printf("O RESULTADO DA OPERACAO FOI %.2f", p1 / p2);
		}
        break;
    }
}

int menu()
{
    int n;
    Sleep(2000);
    printf("\n\nDESEJA SAIR DA CALCULADORA?\n\n[1] - SIM [2] - NAO\n\n");
    scanf("%d", &n);
    return n;
}