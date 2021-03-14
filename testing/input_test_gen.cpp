#include<bits/stdc++.h>
using namespace std;

void rotatearr(int [],int ,int );

int main(){
    freopen("input_test_10.txt","w",stdout);
    srand(time(0));
    int MAX_TEST = rand()%10;
    int MAX_SIZE = (rand()%100000)/MAX_TEST;
    int t = MAX_TEST;
    cout<<t<<"\n";
    while(t--){
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

    freopen("input_test_1000.txt","w",stdout);        //Medium Test Cases
    MAX_TEST = rand()%1000;
    MAX_SIZE = (rand()%100000)/MAX_TEST;
    t = MAX_TEST;
    cout<<t<<"\n";
    while(t--){
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

    freopen("input_test_100000.txt","w",stdout);          //Large Test Cases
    MAX_TEST = rand()%100000;
    MAX_SIZE = (rand()%1000000)/MAX_TEST;
    t = MAX_TEST;
    cout<<t<<"\n";
    while(t--){
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
