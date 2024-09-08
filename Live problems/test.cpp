#include <iostream>

using namespace std;

int main() {

    int a,b,c,n,dab,dfinal,small_ab,small_abc;
    cin>>n;
    while(n--) {
        cin>>a>>b>>c;
        dab=((a-b)>>31)&1;      // a-b ==> +ve a>b : b>a
        cout<<"dab is: "<<dab<<endl;
        cout<<"(1-dab) is: "<<(1-dab)<<endl;

        small_ab=b*(1-dab)+a*dab;       
        cout<<"small_ab is: "<<(small_ab)<<endl;

        dfinal=((small_ab-c)>>31)&1;
        cout<<"dfinal is: "<<(dfinal)<<endl;

        small_abc=c*(1-dfinal)+small_ab*dfinal;
        cout<<"small_abc is: "<<(small_abc)<<endl;

        cout<<((a+b+c)-small_abc)<<endl;
    }

    return 0;

}