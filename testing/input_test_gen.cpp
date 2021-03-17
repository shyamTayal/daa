#include<bits/stdc++.h>
using namespace std;

void rotatearr(int [],int ,int );

int main(){
    freopen("input_testcase.txt","w",stdout);
    srand(time(0));
    int t = 500;
    cout<<t<<"\n";
    int T = 30;
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
    T = 70;
    MAX_SIZE = (rand()%500) + 1;
    while(T--){
        int N = rand()%MAX_SIZE + 100;            //Atleast 2 elements should be there for the array to be viable
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

    MAX_SIZE = (rand()%2000) + 1;
    T = 100;
    while(T--){
        int N = rand()%MAX_SIZE + 1000;            //Medium Size vaue of N
        cout<<N<<"\n";
        int arr[N];
        for(int i=0;i<N;++i){
            arr[i] = rand()%100000;
        }
        sort(arr,arr+N);

        int k = rand()%N;

        rotatearr(arr,N,k);

        for(int i=0;i<N;++i){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    T = 100;
    while(T--){
        int N = rand()%MAX_SIZE + 3000;            //Medium Size vaue of N
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
    T = 100;
    while(T--){
        int N = rand()%MAX_SIZE + 6000;            //Medium Size vaue of N
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
    MAX_SIZE = (rand()%10000) + 1;
    T = 100;
    while(T--){
        int N = rand()%MAX_SIZE + 10000;            //Large Size Value of N
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
