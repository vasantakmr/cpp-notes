/*
https://snakify.org/en/lessons/while_loop/problems/powers_of_two/
*/

#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int i = 1;
    int ans = 1;
    int exponentAns = 1;
    while(ans*2<=n) {
        ans = ans*2;
        exponentAns = i;
        cout<<"i value is: "<<i<<"  ans value is: "<<ans<<"  exponentAns is: "<<exponentAns<<endl;

        i++;
    }

    cout<<exponentAns<<" "<<ans<<endl;

    return 0;
}