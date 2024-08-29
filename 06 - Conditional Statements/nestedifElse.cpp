/*
create a program to determine the shipping cost for an online store. The shipping cost depends on the weight of the package and the distance it needs to travel. Here are the rules:

If the package weighs less than or = 1 kg and the distance is less than 100 km, the shipping cost is $5.
If the package weighs less than or = 1 kg and the distance is between 100 and 500 km, the shipping cost is $10.
If the package weighs less than or = 1 kg and the distance is more than 500 km, the shipping cost is $15.
If the package weighs between 1 kg and 5 kg, the shipping cost is $20 regardless of the distance.
If the package weighs more than 5 kg, the shipping cost is $30 regardless of the distance.
Write a program that prompts the user to enter the weight of the package and the distance it needs to travel, and then calculates and displays the shipping cost.

*/
#include<iostream>

using namespace std;

int main() {
    int weight = 1, distance = 500; 
    int cost;
    cin>>weight>>distance;

    if(weight<=1) {
        if(distance<100) {
            cost = 5;
        } else if(distance>100 && distance<500) {
            cost = 10;
        } else if(distance>500) {
            cost = 15;
        }
    } else if(weight>1 && weight<5) {
        cost = 20;
    } else if(weight>5) {
        cost = 30;
    }

    cout<<cost;
    return 0;
}