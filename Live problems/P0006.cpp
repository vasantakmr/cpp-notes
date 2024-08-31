#include<iostream>

using namespace std;

int main() {

    int a, b, c;
    cin>>a>>b>>c;                   // 3 2 3
    int ans = 1;

    if(a==b || b==c || c==a) {      // 
        ans++;                      // ans = ans +1 = 2
    }

    if(a==b && b==c) {              // f
        ans++;                      // f
    } 

    cout<<ans<<endl;                // 2
    
    return 0;
}


/*
#include<bits/stdc++.h>

using namespace std;

int main()

{

    int a, b, c, count, i = 1;          // 3  3  3
    count = i;                          // i = 1, count = 1
    cin >> a >> b >> c;

    if (a == b || b == c || a == c)     // T
    {
        count = i + 1;                  // count = 2;
    }

    if (a == b && b == c)               // T
    {
        count = i + 2;                  // 3
    }
    cout << "max no of eql numbers is count:" << count;

    return 0;

}

*/


/*
#include <iostream>

using namespace std;

int main()

{

    int a, b, c, count = 1;
    cin >> a >> b >> c;

    if (a == b)
    {
        count++;
    }

    if (a == c)
    {
        count++;
    }

    if (b == c)
    {
        if (count == 3)
            count--;
        count++;
    }

    cout << count;

    return 0;

}
*/