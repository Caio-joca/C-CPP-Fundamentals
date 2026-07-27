#include <iostream>

using namespace std;

int main()
{
    int a,decimal,hexa,octa;
    printf("[CONVERSOR DE numeros ONLINE]\n");
    printf("1 Decimal para hexadecimal\n2 Hexadecimal para decimal\n3 Decimal para octal\n4 Octal para decimal\n5 Encerra\n");
    scanf("%d",&a);

    switch(a)
    {
    case 1:
    printf("escreva o numero a ser transformado\n");
    scanf("%d",& decimal);
    printf("%X",decimal);
    break;

    case 2:
    printf("escreva o numero a ser transformado\n");
    scanf("%X",& decimal);
    printf("%d",decimal);
    break;

    case 3:
    printf("escreva o numero a ser transformado\n");
    scanf("%d",& decimal);
    printf("%o",decimal);
    break;

    case 4:
    printf("escreva o numero a ser transformado\n");
    scanf("%o",& decimal);
    printf("%d",decimal);
    break;

    case 5:
    break;
    }
}
