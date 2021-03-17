#include<bits/stdc++.h>
using namespace std;

int findK(int [],int);
void rotatearr(int [],int ,int );


int main(){

    srand(time(0));
    cout<<"Randomly Generated and rotated array Details:\n";
    int N = rand()%20 + 2;            //Atleast 2 elements should be there for the array to be viable
    cout<<"Size :"<<N<<"\n";
    int arr[N];
    for(int i=0;i<N;++i){
        arr[i] = rand()%1000000;
    }
    sort(arr,arr+N);

    int k = rand()%N;

    rotatearr(arr,N,k);
    cout<<"Elements :";
    for(int i=0;i<N;++i){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    //Here is the function call
    cout<<"Pivot : \n"<<findK(arr,N);

}




int findK(int arr[],int N){
    if(arr[0] <= arr[N-1])
        return 0;   //Not rotated

    int start = 0,end = N-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] > arr[mid+1])
            return mid+1;
        if(arr[start] <= arr[mid])
            start = mid + 1;
        else
            end = mid - 1 ;
    }
    return start;
}

void rotatearr(int arr[],int size,int k){
    int newarr[size],i;
    for(i=0;i<size-k;++i){
        newarr[i+k] = arr[i];
    }
    int c=0;
    for(;i<size;++i){
        newarr[c++] = arr[i];
    }
    for(int i=0;i<size;++i)
        arr[i] = newarr[i];
}
