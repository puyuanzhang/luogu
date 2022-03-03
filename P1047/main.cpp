#include <iostream>
using namespace std;

int main(){
    int l, m, tree_num = 0;
    int a[10001];
    int b[2];
    cin>>l>>m;
    for(int i = 0; i <= l; i++){
        a[i] = 0;
    }
    for(int i = 1; i <= m; i++){
        cin>>b[0]>>b[1];
        for(int j = 0; j <= l; j++){
            if(j >= b[0] && j <= b[1]){
                a[j] = 1;
            }
        }
    }
    for(int i = 0; i <= l; i++){
        if(a[i] == 0){
            tree_num++;
        }
    }
    cout<<tree_num;
    return 0;
}