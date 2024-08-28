// om bhombe
//prn 23070123039
// aim : to find the address of given value
#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    return 0;
}

/*output:0x16eeef438
0x16eeef438
10
*/
