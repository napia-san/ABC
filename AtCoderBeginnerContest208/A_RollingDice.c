#include <stdio.h>
 
int main(void) {
    int a,b,c,d;
    scanf("%d %d", &a,&b);
    
    c = 6 * a;
    d = 1 * a;

    if (b <= c && d <= b){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}