#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*Um armazC)m trabalha com 100 mercadorias diferentes identificadas pelos nC:meros
inteiros de 1 a 100. O dono do armazC)m anota a quantidade de cada mercadoria vendida
durante o mC*s. Ele tem uma tabela que indica, para cada mercadoria, o preC'o de venda.
Escreva um programa para calcular o faturamento mensal do armazC)m. A tabela de
preC'os C) fornecida seguida pelos nC:meros das mercadorias e as quantidades vendidas.
Quando uma mercadoria nC#o tiver nenhuma venda, C) informado o valor zero no lugar
da quantidade.*/

int
main ()
{
  double fatura = 0;
  int tabela[200], contador = 0;

  for (int i = 0; i < 200; ++i)
    {
      
      printf ("Digite as vendas da mercadoria %d: ", contador + 1);
      scanf ("%d", &tabela[i]);
      printf ("Digite o preço da mercadoria %d: ", contador + 1);
      scanf ("%d", &tabela[i + 1]);
      fatura = fatura + (tabela[i] * tabela[i + 1]);
      i++;
      contador++;
    }
  printf ("\nO valor da fatura: %2.f R$", fatura);
  return 0;
}
