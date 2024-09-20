#include <bits/stdc++.h>

using namespace std;

int main() {
    int cur, next, count = 1, max = 0;
    cin>>cur;
    next = cur;
    while (next != 0) {
        cin>>next;
        if ( next == cur) {
            count++;
        } else {
            //cout<<"max: "<<max<<endl;
            if (count > max) {
                max = count;
                count = 1;
            }
        }
        cur = next;
    }
    cout<<max<<endl;
    return 0;   

}