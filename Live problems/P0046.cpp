/*
https://leetcode.com/problems/validate-ip-address/description/

*/

#include<iostream>

using namespace std;

int main() {
    string str;
    cin>>str;

    int countDots = 0, countColons = 0;

    for(int i =0; i<str.length(); i++) {
        if(str[i] == '.') {
            countDots++;
        } else if(str[i] == ':') {
            countColons++;
        }
    }

    if(countDots == 3) {
        //might be ipv4
        int x1 = -1, x2 = -1, x3 = -1, x4 = -1;
        int dotsSeen = 0;
        string temp = "";
        for(int i =0; i<str.length(); i++) {
            if((48<=str[i] && str[i]<=57) || str[i] == '.') {
                if(str[i] == '.') {
                    dotsSeen++;
                    
                    if(dotsSeen == 1) {
                        x1 = stoi(temp);
                    } else if(dotsSeen == 2) {
                        x2 = stoi(temp);
                    } else if(dotsSeen == 3) {
                        x3 = stoi(temp);
                    }
                    temp = "";
                } else {
                    temp = temp + str[i];
                }
                if((temp.length() >=2 && temp[0] == '0') || temp.length() >=4) {
                    return "Neither";
                }
            } else {
                return "Neither";
            }
        }
        x4 = stoi(temp);

        if(0<=x1 && x1<=255 && 0<=x2 && x2<=255 && 0<=x3 && x3<=255 && 0<=x4 && x4<=255) {
            return "IPv4";
        } else {
            return "Neither";
        }
    } else if(countColons == 7) {
        // might be ipv6
        string temp = "";
        bool isValidV6 = true;
        for(int i =0; i<str.length(); i++) {
            if((48<=str[i] && str[i]<=57) || (65<=str[i] && str[i]<=70) || (97<=str[i] && str[i]<=102) || str[i] == ':') {
                if(str[i] == ':') {
                    if(temp.length()>4 || temp.length() == 0) {
                        isValidV6 = false;
                    }
                    temp = "";
                } else {
                    temp = temp + str[i];
                }
            } else {
                return "Neither";
            }
        }
        if(temp.length()>4 || temp.length() == 0) {
            isValidV6 = false;
        }
        if(isValidV6) {
            return "IPv6";
        } else {
            return "Neither";
        }
    } else {
        return "Neither";
    }


    return 0;
}