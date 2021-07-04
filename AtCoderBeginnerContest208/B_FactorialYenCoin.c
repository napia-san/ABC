#include <stdio.h>
 
int main(void) {
    int a,b,c,d;
    c = 0;
    scanf("%d", &a);

for (int i = 10; i >= 1; i--){
    b = 1;
    for (int j = i; j >= 1; j--){
        b *= j;
    }
    if(a/b <= 100){
        d = a/b;
        c += d;
        a -= d*b;
    }else{
        c += 100;
        a -= 100*b;
    }
    if (a == 0){
        break;
    }
}
    printf("%d\n",c);
    return 0;
}