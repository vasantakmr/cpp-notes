#include<iostream>

using namespace std;

int main() {
    string str = "Guru";
    cout<<"What do you want to search?"<<endl;
    string searchString = "";
    cin>>searchString;              // r
    bool searchFound = false;
    for(int i = 0; i<=str.length() - searchString.length(); i++) {       // i<=3
        if(str.substr(i, searchString.length()) == searchString) {
            cout<<"found value"<<endl;
            searchFound = true;
            break;
        } 
    }

    if(!searchFound) {
        cout<<"not found"<<endl;
    }
    return 0;
}