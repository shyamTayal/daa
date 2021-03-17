//This is a testing code, To Show the time complexity of the function

#include<bits/stdc++.h>
using namespace std;
int findK(int [],int ,int &);


int main(){

    freopen("input_testcase.txt","r",stdin);
    ofstream out_file("output_time.csv");
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
    if(arr[0] <= arr[N-1]){
        cnt++;
        return 0;
    } //Not rotated

    int start = 0,end = N-1;
    while(start <= end){
        cnt++;
        int mid = start + (end - start)/2;
        if(arr[mid] > arr[mid+1]){
            cnt++;
            return mid+1;
        }
        if(arr[start] <= arr[mid]){
            cnt+=2;
            start = mid + 1;
        }
        else{
            cnt+=3;
            end = mid - 1 ;
        }
    }
    return start;
}
