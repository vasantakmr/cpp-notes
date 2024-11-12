/*
https://snakify.org/en/lessons/lists/problems/even_elements/

*/

#include<iostream>

using namespace std;

int main() {
    int arr[5] = {20, 31, 30, 20, 40};
    int sizeofArr = sizeof(arr)/sizeof(arr[0]);
    
    for(int i =0; i<sizeofArr; i++) {
        if(arr[i]%2 == 0) {
            cout<<arr[i]<<endl;
        }
    }

    return 0;
}