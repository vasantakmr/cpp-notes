/*
https://www.w3resource.com/c-programming-exercises/conditional-statement/index.php

19. Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer.

The charge are as follow :

Unit	Charge/unit
upto 199	@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above	@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-


*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int units;
    cout<<"Enter total units"<<endl;
    cin>>units;
    bool isSurchargeApplicable = false;

    float cost = 0; 
    
    if(units>599) {
        isSurchargeApplicable = true;
        int spentUnits = units - 600 + 1;
        cost += (spentUnits) * 2.00;
        units = units - spentUnits;
        cout<<"Greater than 599"<<endl;
    }

    if(units>399) {
        isSurchargeApplicable = true;
        int spentUnits = units - 400 + 1;
        cost += (spentUnits) * 1.80;
        units = units - spentUnits;
        cout<<"Greater than 399"<<endl;
    }

    if(units>199) {
        int spentUnits = units - 200 + 1;
        cost += (spentUnits) * 1.50;
        units = units - spentUnits;
        cout<<"Greater than 199"<<endl;
    }

    if(units<200) {
        int spentUnits = units;
        cost += (spentUnits) * 1.20;
        units = units - spentUnits;
        cout<<"Less than 200"<<endl;
    }

    cost += ((15.0*cost)/100);
    cout<<cost<<endl;

    return 0;
}