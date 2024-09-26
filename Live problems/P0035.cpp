/*
https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TLG
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int noOfRounds;
    cin>>noOfRounds;

    int player1CumulativeScore = 0, player2CumulativeScore = 0, winner = 0, maximumLeadTillNow = 0;
    while(noOfRounds--) {
        int player1CurrentRoundScore, player2CurrentRoundScore;
        cin>>player1CurrentRoundScore>>player2CurrentRoundScore;
        player1CumulativeScore +=  player1CurrentRoundScore;
        player2CumulativeScore += player2CurrentRoundScore;

        int lead =  player1CumulativeScore - player2CumulativeScore;
        cout<<"Lead is: "<<lead<<((lead>0)? " 1 is winner": " 2 is winner")<<endl;
        if(abs(lead)>maximumLeadTillNow) {
            maximumLeadTillNow = abs(lead);
            if(lead>0) {
                winner = 1;
            } else {
                winner = 2;
            }
        }
    }

    cout<<winner<<" "<<maximumLeadTillNow<<endl;

    return 0;
}