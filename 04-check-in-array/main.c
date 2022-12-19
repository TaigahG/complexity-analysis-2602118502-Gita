#include <stdio.h>

int main()
{
    int m=5, c=0, n;
    int i[] = {1, 2 ,3};
    int q[] = {5, 1, 1};
    for (int k = 0; k < sizeof(i)/4; k++){
        if (m == i[k]){
            c += 1;
        }
        else if (m == q[k]){
            c += 1;
        }
    }
    if (c>=2){
        printf("0");
    }
    else{
        printf("1");
    }
}

    