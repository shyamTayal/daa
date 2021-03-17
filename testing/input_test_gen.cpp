#include<bits/stdc++.h>
using namespace std;

void rotatearr(int [],int ,int );

int main(){
    freopen("input_testcase.txt","w",stdout);
    srand(time(0));
    int t = rand()%1000 + 5;
    cout<<t<<"\n";
    int T = (int)(t/17)*10 + t%17;
    int MAX_SIZE = (rand()%20) + 1;
    while(T--){
        int N = rand()%MAX_SIZE + 2;            //Atleast 2 elements should be there for the array to be viable
        cout<<N<<"\n";
        int arr[N];
        for(int i=0;i<N;++i){
            arr[i] = rand();
        }
        sort(arr,arr+N);

        int k = rand()%N;

        rotatearr(arr,N,k);

        for(int i=0;i<N;++i){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }


    MAX_SIZE = (rand()%1000) + 1;
    T = (int)(t/17)*6;
    while(T--){
        int N = rand()%MAX_SIZE + 100;            //Medium Size vaue of N
        cout<<N<<"\n";
        int arr[N];
        for(int i=0;i<N;++i){
            arr[i] = rand();
        }
        sort(arr,arr+N);

        int k = rand()%N;

        rotatearr(arr,N,k);

        for(int i=0;i<N;++i){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }


    MAX_SIZE = (rand()%1000000) + 1;
    T = (int)(t/17);
    while(T--){
        int N = rand()%MAX_SIZE + 1000;            //Large Size Value of N
        cout<<N<<"\n";
        int arr[N];
        for(int i=0;i<N;++i){
            arr[i] = rand();
        }
        sort(arr,arr+N);

        int k = rand()%N;

        rotatearr(arr,N,k);

        for(int i=0;i<N;++i){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
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
