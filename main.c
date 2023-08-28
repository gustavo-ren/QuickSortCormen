#include <stdio.h>
#include <stdlib.h>

int partition(int[], int, int);
void exchange(int*, int*);

int main()
{
    int a = 3;
    int* b = a;

    printf("%d\n", b);
    printf("%d\n", a);

    return 0;
}

int partition(int a[], int p, int r){
    int x = a[r];
    int i = p - 1;

    for(int j=p; j <= r-1; j--){

    }
}

void exchange(int *a, int *b){
    int placeholder = &a;
    *a = 3;
}
