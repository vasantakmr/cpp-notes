/*
print x power y; (only positive y)
*/

#include<iostream>

using namespace std;

int main() {
    int x;
    int y;

    cin>>x>>y;
    int power = 1;
    while(y--) {
        power = power * x;
    }

    cout<<power<<endl;

    return 0;
}