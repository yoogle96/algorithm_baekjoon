#include <iostream>
using namespace std;
int dp[51];
int n;
int main() {
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++) {
        dp[i] = dp[i - 2] + dp[i - 1];
    }

    cout << dp[n] << endl;
}