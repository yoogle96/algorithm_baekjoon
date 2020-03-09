#include <bits/stdc++.h>
using namespace std;
int n, dp[50];

int DFS(int n) {
    if(dp[n] > 0) return dp[n];
    if(n == 1 || n == 2) return dp[n] = n;
    else return dp[n] = DFS(n - 1) + DFS(n - 2);
}

int main() {
    cin >> n;
    cout << DFS(n);
}