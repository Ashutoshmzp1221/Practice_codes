#include<bits/stdc++.h>
using namespace std;

void DFS(int G[][7], int start, int n)
{
    static int visited[7] = {0};
    if(visited[start] == 0)
    {
        cout << start << " ";
        visited[start] == 1;
        for(int j = 1; j < n;j++)
        {
            if(G[start][j] == 1 && visited[j] == 0)
                DFS(G,j,n);
        }
    }
}

int main(){
    int G[8][8] = {{0,0,0,0,0,0,0,0},
                   {0,0,1,0,1,0,0,0},
                   {0,1,0,1,0,0,0,0},
                   {0,0,1,0,1,1,0,0},
                   {0,1,0,1,0,1,0,0},
                   {0,0,0,1,1,0,1,1},
                   {0,0,0,0,0,1,0,1},
                   {0,0,0,0,0,1,0,0}};
    DFS(G,1,8);
}