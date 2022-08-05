#include <stdio.h>
#include <stdlib.h>


void fun(int n){
 if (n == 0)
    return;
 fun(n/2);
 printf("%d", n%2);
}

int main()
{
    int sayi;
    printf("Binary e cevirmek istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    fun(sayi);
    return 0;
}
