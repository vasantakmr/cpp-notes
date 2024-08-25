#include<iostream>

using namespace std;

int main() {

    int n, m, k;

    cin>>n>>m>>k;
    
    if(n*m <= k) {
        cout<<"NO";
    } else if(k%n == 0 || k%m == 0) {
        cout<<"YES"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    
    return 0;
}