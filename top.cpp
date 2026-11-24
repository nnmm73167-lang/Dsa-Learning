
#include <iostream>
#define PI 3.14
#define x 5 + 5
#define sum(x, y) (10 + 60)
#define AGE 17
using namespace std;

int main()
{
    cout << "hello world";

    cout << PI;
    cout << x;
    cout << sum(1, 2);
    
    #if AGE >= 18
    cout << "Eligible";
    #else 
    cout << "mxcmcxm";
    #endif
    
    
    return 0;
}