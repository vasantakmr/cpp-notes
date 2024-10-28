/* reversing only the vowels in a string

input: Gurucodes
output: Gerocudus

input: Hello
output: Holle

Ans:
1. Take all the vowels out into a separate string called vowelString
2. Reverse the vowelString.
3. Now iterate/traverse throught the original string and whenever you see a vowel, replace it with the reversedVowelString character. 

*/

#include<iostream>

using namespace std;

int main() {
    string str;
    cin>>str;
    string vowelString = "";

    for(int i =0; i<str.length(); i++) {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
            vowelString = str[i] + vowelString;
        }
    }

    for(int i =0, j = 0; i<str.length(); i++) {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
            str[i] = vowelString[j];
            j++;
        }
    }

    cout<<str<<endl;;
    return 0;
}