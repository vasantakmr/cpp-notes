#include<iostream>

using namespace std;

void testScope(int n = 10, int y = 20) {
    cout<<n<<" "<<y<<endl;
}

int main() {

    testScope(30, 50);

    return 0;
}