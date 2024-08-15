/*
Find the area of a rectangle.
You are given length and width of a rectangle. 
Calculate its area.

Area = length * width;

Length = 10;
width = 20;

Area = 200;

*/
#include<iostream>

using namespace std;

int main() {
    int length = 0;
    int width = 0;
    cin>>length;
    cin>>width;
    int area = 0;
    area = length*width;
    cout<<area;
    
    return 0;
}