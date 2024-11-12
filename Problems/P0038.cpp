/*
given an array find the sum of all the elements;
*/


#include<iostream>

using namespace std;

int main() {
    int arr[5] = {20, 31, 30, 20, 40};
    int sizeofArr = sizeof(arr)/sizeof(arr[0]);
    
    int sum = 0;

    for(int i =0; i<sizeofArr; i++) {
        sum = sum + arr[i];
    }
    cout<<sum<<endl;
    return 0;
}