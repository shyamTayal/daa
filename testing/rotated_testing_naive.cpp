//This is a testing code, To Show the time complexity of the function

#include<bits/stdc++.h>
using namespace std;
int findK(int [],int ,int &);


int main(){

    freopen("input_testcase.txt","r",stdin);
    ofstream out_file("output_time_linear.csv");
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;++i){
            cin>>arr[i];
        }
        int cnt = 0;
        int ans = findK(arr,N,cnt);
        if(cnt>1)                           //Removing Bad Testcases
        out_file<<N<<","<<cnt<<"\n";

    }
    out_file.close();
}

int findK(int arr[],int N,int &cnt){
    for(int i=0;i<N-1;++i){
        if(arr[i] > arr[i+1])
            return i+1;
        cnt++;
    }
    return 0;
}
