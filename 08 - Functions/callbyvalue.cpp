#include<bits/stdc++.h>

using namespace std;

void changeXvalue(int &x) {
    x = x+1;
}

int main()
{
    int x = 11;
    changeXvalue(x);
    cout<<x<<endl;

    return 0;
}

// return type, return statement