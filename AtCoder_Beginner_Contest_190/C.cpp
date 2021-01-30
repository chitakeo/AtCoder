#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, S, D, X, Y;

    cin >> N >> S >> D;

    for (int i = 0; i < N; i++){
        cin >> X >> Y;
        if (X < S and Y > D){
            cout << "Yes" << endl;
            break;
        }
        if (i == N-1){
            cout << "No" << endl;
        }
    }
    return 0;
}