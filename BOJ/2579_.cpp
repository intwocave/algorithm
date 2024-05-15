#include <iostream>
using namespace std;

int main(void) {
    int n, arr[301] = {}, dp[301] = {};
    cin >> n;

    for(int i=1; i<=n; i++) cin >> arr[i];

    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(dp[1] + arr[3], dp[0] + arr[3-1] + arr[3]);
    for(int i=4; i<=n; i++) 
        dp[i] = max(dp[i-2]+arr[i], dp[i-3]+arr[i-1]+arr[i]);

    cout << dp[n] << endl;

    return 0;
}