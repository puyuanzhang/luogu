#include <stdio.h>
int add(int ,int);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",add(a,b));

    return 0;
}

int add(int a,int b){
    return (a+b);
}