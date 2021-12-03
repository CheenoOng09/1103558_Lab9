#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int counter = 0;
    int testcase;

    cin >> testcase;
    while (counter < testcase){

        string str;
        string newStr;
        int charCounter;
        int runCount;
        int strLen;

        cin >> str;

        strLen = str.length();
        cout << "Length: " << strLen << endl;

        // Taking the first two letters in a string
        newStr.append(str.substr(0,2));

        if ( toupper(str[0]) == toupper(str[1]) ){
            cout << "1 ---- Run Count Initialized as 2" << endl;
            runCount = 2;
            charCounter = 2;
        }
        else if ( toupper(str[0]) != toupper(str[1]) ){
            cout << "2 ---- Run Count Initialized as 1" << endl;
            runCount = 1;
            charCounter = 2;
        }
        for (int i = 2, j = 2; i < strLen; i++){
            //cout << " str[" << i << "] = " << str[i] << endl;
            if ((runCount != 2) && ( toupper(str[i]) == toupper(str[i - 1])) ) {
                //cout << "   A" << endl;
                newStr[j] = str[i];
                ++j;
                ++runCount;
                ++charCounter;
                //cout << "NewString Lenght: " << charCounter << endl;
            }
            else if ( toupper(str[i]) != toupper(str[i - 1]) ){
                //cout << "   B" << endl;
                newStr[j] = str[i];
                ++j;
                runCount = 1;
                ++charCounter;
                //cout << "NewString Lenght: " << charCounter << endl;
            }
        }
        for (int i = 0; i < charCounter; i++){
            cout << newStr[i];
        }
        cout << endl;
    ++counter;
    }
}
