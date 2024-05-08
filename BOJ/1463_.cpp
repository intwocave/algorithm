#include <iostream>
using namespace std;

int main(void) {
    int n, dp[1000001] = {}, result;
    cin >> n;

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    
    for (int i=4; i<=n; i++) {
        dp[i] = dp[i-1] + 1;
        if(i%2==0) dp[i] = (dp[i] < dp[i/2]+1) ? dp[i] : dp[i/2]+1;
        if(i%3==0) dp[i] = (dp[i] < dp[i/3]+1) ? dp[i] : dp[i/3]+1;
    }

    cout << dp[n] << endl;

    return 0;
}