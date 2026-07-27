#include <stdio.h>
#include <limits.h>
#include <ctime>
#define SIZE 2

void inicializa (int *p)
{
    for (int i=0; i<SIZE*SIZE; i++)
    {
        *p = rand()%201;
        p++;
    }
}

void exibe_mat (int *p)
{
    for (int i=0; i<SIZE; i++)
    {
        printf("\n");
        for (int j=0; j<SIZE; j++)
        {
            printf("[%4d] ",*p);
            p++;
        }
    }
}

void procura (int *p)
{
   int maior=INT_MIN;
   int menor=INT_MAX;

   for (int i=0; i<SIZE*SIZE; i++)
   {
       if (*p < menor)
       {
           menor = *p;
       }

       if (*p > maior)
       {
           maior = *p;
       }

       p++;
   }
   printf("\n\nmenor: %d\n",menor);
   printf("maior: %d",maior);
}
int main()
{
    srand(time(NULL));
   int matriz[SIZE][SIZE];
   int *p;
   p = &matriz[0][0];

   inicializa(p);
   exibe_mat(p);
   procura(p);
}
