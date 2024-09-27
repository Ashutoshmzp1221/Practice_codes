#include<cstdio>

int main(){
    int n;
    printf("Enter the number of the elements you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");

    for(int i=0; i<n ; i++){
        scanf("%d", arr[i]);
    }

    int num;
    printf("Enter the number you want to search: ");
    scanf("%d", &num);
    int pos=0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            pos = i+1;
            break;
        }
    }

    printf("The position of the number is: %d ", pos);
    
}