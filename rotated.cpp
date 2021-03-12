#include<bits/stdc++.h>
using namespace std;


void rotatearr(int [],int ,int );

int main(){
    cout<<"Enter Number of Test Cases : ";
    int t;
    cin>>t;
    while(t--){
        srand(time(0));
        cout<<"Enter the Size of array : ";
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;++i){
            arr[i] = rand();
        }
        sort(arr,arr+N);
        int k = rand();
        rotatearr(arr,N,k);

    }
}


void rotatearr(int arr[],int size,int k){
    int newarr[size],i;
    for(i=0;i<size-k;++i){
        newarr[i] = arr[i+k];
    }
    int c=0;
    for(;i<size;++i){
        newarr[i] = arr[c++];
    }
    for(int i=0;i<size;++i)
        arr[i] = newarr[i];
}
