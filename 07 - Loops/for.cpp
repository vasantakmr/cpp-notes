#include<iostream>

using namespace std;

int main() {
    
    //  1. initialization of i = 0;
    //  2. condition check (i<5)
    //  3. if condition is true: go inside the loop and execute the statements. (print A)
    //  4. i become 1; because of the i++
    //  5. condition check(i<5)
    //  3. if condition is true: go inside the loop and execute the statements. (print A)
    //  6. i become 2; because of the i++
    //  7. condition check(i<5)
    //  3. if condition is true: go inside the loop and execute the statements. (print A)
    //  8. i become 3; because of the i++
    //  9. condition check(i<5)
    cout<<"Print A for 5 times"<<endl;
    for(int i = 0; i<5; i++) {
        cout<<"A"<<endl;
    }
    cout<<"Print numbers from 1 to 5"<<endl;
    for(int i = 1; i<=5; i++) {
        cout<<i<<endl;
    }
    cout<<"Print numbers from 5 to 1"<<endl;
    for(int i = 5; i>=1; i--) {
        cout<<i<<endl;
    }
    cout<<"Print numbers from 5 to 1 second method"<<endl;
    for(int i = 1; i<=5; i++) {
        cout<<(5-i+1)<<endl;
    }
    cout<<"Print numbers from 100 to 95"<<endl;
    for(int i = 100; i>=95; i--) {
        cout<<i<<endl;
    }
    return 0;
}