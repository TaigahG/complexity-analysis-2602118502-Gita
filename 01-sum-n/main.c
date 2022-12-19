#include<stdio.h>

int sum(int n){
    int i = 1;
    int s = 0;
    while (i<=n){
        s+=i;
        i++;
    }
    return s;
}

int main(void){
    int n;
    printf("pos int: ");
    scanf("%d",&n);
    int k = sum(n);
    printf("%d",k);

    return 0;

}

