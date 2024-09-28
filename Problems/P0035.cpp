/*
print x power y; (only positive y)
*/

#include<iostream>

using namespace std;

int main() {
    int result = 1;
    int x, y;
    cin>>x>>y;
    for(int i = 0; i<y; i++) {
        result = result *x;
    }

    cout<<result<<endl;

    return 0;
}