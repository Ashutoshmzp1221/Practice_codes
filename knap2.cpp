#include<iostream>
using namespace std;

int knapsack(int values[], int weight[],int n, int w)
{
    int dp[n+1][w+1];
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= w; j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(j >= weight[i - 1])
                dp[i][j] = max(dp[i-1][j],dp[i-1][j - weight[i - 1]]+values[i - 1]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }return dp[n][w];
}


int main()
{
    int values[] = {3, 4, 5, 6};
    int weights[] = {2, 3, 4, 5};
    int n = sizeof(values) / sizeof(values[0]);
    int W = 5;
    int max_value = knapsack(values, weights, n, W);
    cout << "Maximum value: " << max_value << endl;
    return 0;
}
