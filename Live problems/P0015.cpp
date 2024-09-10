/*
https://snakify.org/en/lessons/while_loop/problems/morning_jog/
*/



#include<iostream>

using namespace std;

int main() {
    int inital, ending;
    cin>>inital>>ending;
    int noOfDaysRequired = 1;
    float nextDay = inital;

    while(nextDay<ending) {
        nextDay = nextDay + (0.1*nextDay);
        noOfDaysRequired++;
    }

    cout<<noOfDaysRequired<<endl;
    return 0;
}