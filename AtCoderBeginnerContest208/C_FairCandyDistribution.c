#include <stdio.h>
 
int main(void) {
    int N, R;
    long long int K,A;
    scanf("%d %lld", &N,&K);

    int id[N-1],rank[N-1];
    long long int Candy[N-1];
    //idの読み取り
    for (int i = 0; i < N; i++){
        scanf("%d", &id[i]);
    }
    
    A = K/N;
    K -= A*N;

    //全員に配れる個数
    for (int i = 0; i < N; i++){
        Candy[i] = A;
    }
    
    //順位付け
    for(int i = 0; i < N; i++){
        rank[i] = 1;
        for(int j = 0; j < N; j++){
            if(id[i]>id[j]) rank[i]++;
        }
    }

    for (int i = 1; i <= K; i++){
        for (int X = 0; X < N; X++){
            if(rank[X] == i){
                R = X;
                break;
            }
        }
        Candy[R] += 1;
    }
    
    for (int i = 0; i < N; i++){
        printf("%lld\n",Candy[i]);
    }
    
    return 0;
}