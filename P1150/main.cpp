#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int yan_tou;
    int final_num = 0;
    while (n){
        n--;
        final_num++;
        yan_tou++;
        if(yan_tou == k){
            yan_tou = 0;
            n++;
        }
    }
    printf("%d", final_num);
    return 0;
}