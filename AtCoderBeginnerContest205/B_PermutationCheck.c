#include<stdio.h>
int main(){
    int a,i,j,tmp;

    scanf("%d",&a);
    int b[a-1];
    for(i=0;i<=a;i++){
        scanf("%d",&b[i]);
    }
    for (i=0; i<a; ++i) {
        for (j=i+1; j<a; j++) {
            if (b[i] > b[j]) {
                tmp =  b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }
    for (i=0; i<a; i++) {
        if(b[i]!=i+1){
            break;
        }
    }
    if(a==i){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}