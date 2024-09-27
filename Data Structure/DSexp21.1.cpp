#include<iostream>
using namespace std;
void enter(int * n, int arr[]){
    cout<<"Enter the number of the elemets of the array: "<<endl;
    cin>>* n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<*n;i++){
        cin>>arr[i];
    }
}

void display(int n, int arr[]){
    cout<<"The new array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  cout<<endl;
}

void insert(int n, int arr[]){
    int num,flag;
    cout<<"Enter the number you want to insert: "<<endl;
    cin>>num;
    cout<<"Enter 6 to insert number at the end: "<<endl;
    cout<<"Enter 7 to insert number at the given position: "<<endl;
    int o;
    cin>>o;
    if(o==6){
        arr[n]=num;
        n++;
    }
    else{
        cout<<"Enter the position at which you want to insert: "<<endl;
        cin>>flag;
        for(int i=n-1;i>=flag;i--){
            arr[i]=arr[i-1];
        }
        arr[flag-1]=num;
        n++;
    }
    cout<<"The array after inserting the number: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void delet(int n, int arr[]){
    int flag;
    cout<<"Enter the postion you want to delete: "<<endl;
    cin>>flag;

    for(int i=flag;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    display(n,arr);
}

void find(int n, int arr[]){
    int num,flag;
    cout<<"Enter the number you want to find: "<<endl;
    cin>>num;
    
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            flag=i;
        }
    }
    cout<<"The postion of the element is "<<flag<<endl;
}

int main(){
    cout<<"***ASHUTOSH DWIOVEDI***"<<endl;
    cout<<"--------------21BCS2617--------------"<<endl;
    cout<<"_____________"<<endl;
    int n, arr[n+1];
    int p,num=1;
    enter(&n,arr);
    while(num==1){
       cout<<"Enter the operation: "<<endl;
        cout<<"Enter 1 to insert: "<<endl;
        cout<<"Enter 2 to delete: "<<endl;
        cout<<"Enter 3 to find: "<<endl;
        cout<<"Enter 4 to print: "<<endl;
        cin>>p;
        switch(p){
            case 1:
            insert(n,arr);
            break;

            case 2:
            delet(n,arr);
            break;

            case 3:
            find(n,arr);
            break;

            case 4:
            display(n,arr);
            break;

            
        } 
        cout<<"Enter 1 to continue: "<<endl;
        cout<<"TO exit enter any number: "<<endl;
        cin>>num;
    }
}