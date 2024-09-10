
#include<iostream>

using namespace std;

int main() {
    int i = 0;
    int search = 20;

    while(i<100) {
        if(i == search) {
            break;
        }

        cout<<i<<endl;
        i++;
    }

    cout<<"For loop has ended"<<endl;
    return 0;
}