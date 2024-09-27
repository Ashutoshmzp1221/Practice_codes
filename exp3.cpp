#include <bits/stdc++.h> 
using namespace std;
void findCounts(int *arr, int n)
{
    int hash[n] = {0};
    int i;
    while (i < n)
    {
        hash[arr[i] - 1]++;
        i++;
    }
    printf("\nBelow are counts of all elements\n");
    for (int i = 0; i < n; i++)
        printf("%d -> %d\n", i + 1, hash[i]);
}
int main()
{
    int arr2[] = {1, 3, 5, 7, 9, 1, 3, 5, 7, 9, 1};
    findCounts(arr2, sizeof(arr2) / sizeof(arr2[0]));
    return 0;
}
