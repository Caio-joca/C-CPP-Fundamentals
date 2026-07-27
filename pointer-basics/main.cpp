#include <cstdio>

int vetor[5];
int *ptr;
int main() {
    int x;
    x=10;
    ptr=&x;
    printf("%d",*ptr);
    return 0;
}
