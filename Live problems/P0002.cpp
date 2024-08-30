/*

Chef has N candies. He has to distribute them to exactly M of his friends such that each friend gets equal number of candies and each friend gets even number of candies. Determine whether it is possible to do so.

NOTE: Chef will not take any candies himself and will distribute all the candies.

Example: 
Chef : 20

Friends: 4

a 5       b  5        c 5           d 5

NO

Example: 
Chef : 23

Friends: 4

a 6       b  6        c 6           d 5

NO

Example: 
Chef : 24

Friends: 4

a 6       b  6        c 6           d 6

YES

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int candies, friends;

    cin>>candies>>friends;

    if(candies%friends == 0 ) {
        if((candies/friends)%2 == 0) {
            cout<<"YES";
        }
    } else {
        cout<<"NO";
    }

    return 0;
}