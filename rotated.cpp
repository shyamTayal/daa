#include<bits/stdc++.h>
using namespace std;

int findK(int [],int);

int main(){


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
