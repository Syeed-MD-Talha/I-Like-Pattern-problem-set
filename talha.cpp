#include<bits/stdc++.h>
using namespace std;
void generatePattern(int N, char pattern) {
    if (pattern == 'a') {
        char T = pattern;
        char Z = T + N - 1;
        for (int i = 1; i <= N; i++) {
            cout << T;
            if (i == 1) {char t = T + 1; for (int j = 2; j < N; j++, t++)cout << t;}
            else if (i == N) {char t = T - 1; for (int j = 2; j < N; j++, t--)cout << t;}
            else {for (int j = 2; j < N; j++)cout << " ";}
            cout << Z;
            T++, Z--;
            cout << endl;
        }
    }
    else if (pattern == '1') {
        int T = 1;
        int  Z = T + N - 1;

        for (int i = 1; i <= N; i++)
        {
            cout << T;
            if (i == 1) {int t = T + 1; for (int j = 2; j < N; j++, t++)cout << t;}
            else if (i == N) {int t = T - 1; for (int j = 2; j < N; j++, t--)cout << t;}
            else {for (int j = 2; j < N; j++)cout << " ";}
            cout << Z;
            T++, Z--;
            cout << endl;
        }
    }
}
int main() {

    int N;
    char T;
    cin >> N >> T;
    generatePattern(N, T);
}
