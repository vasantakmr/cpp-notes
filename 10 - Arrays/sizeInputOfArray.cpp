#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n; 
    int studentMarks[n];
    
    for(int i = 0; i<n; i++) {
        cin>>studentMarks[i];
    }

    for(int i =0; i<n; i++) {
        cout<<studentMarks[i]<<" ";
    }
    return 0;
}