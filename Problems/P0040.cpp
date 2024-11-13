/*
https://snakify.org/en/lessons/lists/problems/same_sign_neighbours/
*/

/*
https://snakify.org/en/lessons/lists/problems/increasing_neighbours/
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i = 0; i<n-1; i++) {
        if(!(arr[i+1]>0 ^ arr[i]>0)) {
             cout<<arr[i]<<" "<<arr[i+1];
            break;
        }
    }


    return 0;
}