#include <iostream>
using namespace std;
int knapsack(int values[], int weights[], int n, int W)
{
    int dp[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                dp[i][w] = 0;
            }
            else if (weights[i - 1] <= w)
            {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][W];
}
int main()
{
    int values[] = {15,14,10,45};
    int weights[] = {2,5,1,3,4};
    int n = sizeof(values) / sizeof(values[0]);
    int W = 7;
    int max_value = knapsack(values, weights, n, W);
    cout << "Maximum value: " << max_value << endl;
    return 0;
}
