/*Name OM BHOMBE
PRN23070123039
AIM To find the addresses of different data types */
#include <iostream>
#include<string>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    float b = 9.4;
    float *fptr = &b;
    char c = 's';
    char *cptr = &c;
    
    bool d = 1;
    bool *dptr = &d;
    
    cout << "For integer"<<endl;
    cout << "Before increment"<<endl;
    cout << ptr<< endl;
    ptr++;
    cout << "After increment"<<endl;
    cout << ptr<< endl;
    
    
    cout << "For float"<<endl;
    cout << "Before increment"<<endl;
    cout << fptr<< endl;
    fptr++;
    cout << "After increment"<<endl;
    cout << fptr<<endl;
    cout << "For boolean"<<endl;
    cout << "Before increment"<<endl;
    cout << dptr<< endl;
    dptr++;
    cout << "After increment"<<endl;
    cout << dptr<<endl;
    cout << "For character"<<endl;
    cout << "Before increment"<<endl;
    cout << cptr<< endl;
    cptr++;
    cout << "After increment"<<endl;
    cout << cptr<<endl;

    return 0;
}

/*outputFor integer
Before increment
0x16d6f7418
After increment
0x16d6f741c
For float
Before increment
0x16d6f740c
After increment
0x16d6f7410
For boolean
Before increment
0x16d6f73ef
After increment
0x16d6f73f0
For character
Before increment
stom
After increment
tom
*/
