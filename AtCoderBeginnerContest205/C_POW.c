#include<stdio.h>
#include<math.h>
int main(){
    long long int a,b,c,d,e;

    scanf("%lld %lld %lld",&a,&b,&c);
    d = pow(a,c);
    e = pow(b,c);
    if(d > e){
        printf(">\n");
    }else if(d < e){
        printf("<\n");
    }else if(d == e){
        printf("=\n");
    }
    return 0;
}