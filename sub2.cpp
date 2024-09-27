#include<iostream>
using namespace std;

int subset_sum(int sum, int n, int set[])
{
    int subset[n + 1][sum+1];
    for(int i = 0; i <= n; i++)
        subset[i][0] = 1;
    for(int j = 1; j<= sum; j++)
        subset[0][j] = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= sum; j++)
        {
            if(j < set[i - 1])
                subset[i][j] = subset[i-1][j];
            if(j >= set[i - 1])
            {
                if(subset[i-1][j] == 1)
                    subset[i][j] = subset[i-1][j];
                else{
                    subset[i][j] = subset[i-1][j-set[i - 1]];
                }
            }
        }
    }return subset[n][sum];
}

int main()
{
	int set[] = {2,3,4,5,34,12 };

	int sum = 7;
	int n = sizeof(set) / sizeof(set[0]);
	if (subset_sum(sum,n,set) == 1)
		cout << "Found a subset with given sum";
	else
		cout << "No subset with given sum";
	return 0;
}