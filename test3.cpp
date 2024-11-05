#include <iostream>
#include <string>

using namespace std;            // string str = "10.10.10.200"

int main() {
    string str;
    bool valid = true;

    cin >> str;

    int num = 0;
    int dots = 0;
    string temp = "";
    for (int i = 0; i < str.length()+1; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            temp = temp + str[i];
        } 
        //10.0.0.5
        if (str[i] == '.' || str[i] == '\0') {
            if ((stoi(temp) >= 0 && stoi(temp) < 256) && (str[i + 1] != '0' && str[i + 1] != '.')) {
                num = 0;
                dots++;
            } else {
                valid = false;
                break;
            }
        } else {
            valid = false;
            break;
        }
    }

    if (dots != 3) {
        valid = false;
    }

    if (valid) {
        cout << "valid" << endl;
    } else {
        cout << "invalid" << endl;
    }

    return 0;
}
