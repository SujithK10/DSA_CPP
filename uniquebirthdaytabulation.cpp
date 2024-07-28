#include <iostream>
#include <vector>
int mod = 10000;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

    // Initialize base case for arrays of length 1
    for (int j = 1; j <= n; j++) {
        dp[1][j] = 1;
    }

    // Fill the dp table
    for (int i = 2; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            for (int x = 1; x <= n; x++) {
                if (j % x == 0) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][x]) % mod;
                }
            }
        }
    }

    // Calculate the result
    int res = 0;
    for (int j = 1; j <= n; j++) {
        res = (res + dp[k][j]) % mod;
    }

    cout << res << endl;

    return 0;
}
