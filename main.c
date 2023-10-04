#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limpaTela(){
  system("cls");
}

int main() 
{
  
 float n1,n2;
 int operacao;
 char nome[30];

   printf("Informe o seu nome:");
    fgets(nome, 30, stdin);

      limpaTela();

   printf("Seja Bem-Vindo, %sEssa e minha calculadora 2.0\n\nMe informe os dois numeros que voce ira usar:", nome);
    scanf("%f %f", &n1, &n2);
      
      limpaTela();
  
while(operacao < 1 || operacao > 4){
  
   printf("Selecione a operacao que deseja aplicar nos dois numeros:\n\n[1] Adicao\n[2] Subtracao\n[3] Multiplicacao\n[4] Divisao\n");
    scanf("%d", &operacao);

      limpaTela();

  switch (operacao)
    {
        case 1: printf("Resultado da Adicao: %1.f + %1.f = %.1f",n1, n2, (n1+n2));
      break;
        case 2: printf("Resultado da Subtracao: %1.f - %1.f = %.1f",n1, n2, (n1-n2));
      break;
        case 3: printf("Resultado da Multiplicacao: %1.f x %1.f = %.1f",n1, n2, (n1*n2));
      break;
        case 4: printf("Resultado da Divisao: %1.f / %1.f = %.1f",n1, n2, (n1/n2));
      break;
        default:
      printf("------OPCAO SELECIONADA NAO EXISTE------\n\n***Selecione uma das opcoes disponiveis***\n\n\n");
    }
  }
}
