#include <iostream>
using namespace std;

int main()
{
    int N;
    int coin[10001];
    cin >> N;
    cout << N << endl;
    for (int i = 0; i < N; i++){
        coin[i] = 0;
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < i; j++){
            if (coin[j] == 1)
                coin[j] = 0;
           else
                coin[j] = 1;
        }
        for (int k = i + 1; k < N; k++){
            if (coin[k] == 1)
                coin[k] = 0;
            else
                coin[k] = 1;
        }
        for (int l = 0; l < N; l++){
            cout << coin[l];
        }
        cout << endl;
    }
    cout << endl;
}