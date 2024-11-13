/*
1. Largest number of an array
2. Smallest Number of an array
3. Average of an array
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }

    int largestNumber = INT_MIN, smallestNumber = INT_MAX, average = 0, middle = 0, middleAfterSort = 0;
    
    for(int i = 0; i<n; i++) {
        if(arr[i] > largestNumber) {
            largestNumber = arr[i];
        }
    }

    for(int i =0; i<n; i++) {
        if(arr[i] < smallestNumber) {
            smallestNumber = arr[i];
        }
    }

    for(int i =0; i<n; i++) {
        average = average + arr[i];
    }
    
    middle = arr[n/2];
    sort(arr, arr+n);
    middleAfterSort = arr[n/2];
    cout<<"Largest Number is: "<<largestNumber<<endl;
    cout<<"Smallest Number is: "<<smallestNumber<<endl;
    cout<<"Average is: "<<(average/n)<<endl;

    return 0;
}