//https://www.geeksforgeeks.org/problems/divisible-by-73224/1
#include <iostream>

using namespace std;

int isdivisible7(string num)
{
    // complete the function here
    // 7 14 21 28 35
    string temp = "";
    int expression = 0;
    bool isPositive = true;
    for (int i = num.length() - 1, j = 0; i >= 0; i--, j++)
    {
        if ((j % 3 == 0 && j != 0))
        {
            if (isPositive)
            {
                expression = expression + stoi(temp);
                isPositive = false;
            }
            else
            {
                expression = expression - stoi(temp);
                isPositive = true;
            }

            temp = "";
        }

        j++;
        temp = num[i] + temp;
    }

    if (isPositive)
    {
        expression = expression + stoi(temp);
        isPositive = false;
    }
    else
    {
        expression = expression - stoi(temp);
        isPositive = true;
    }

    if (expression % 7)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    isdivisible7("9837463");

    return 0;
}