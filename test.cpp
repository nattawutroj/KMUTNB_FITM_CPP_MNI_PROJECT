#include<iostream>
using namespace std;
int main()
{
    int a = 11;
    int b = 11;
    int c = 1;
    int D = a + b + c;
    int z[10];
    z[0] = D/1000;
    z[1] = D/100%10;
    z[2] = D/10%10;
    z[3] = D%10;
    cout << z[0]<<" "<<z[1]<<" "<<z[2]<<" "<<z[3]<<" " << endl;
    return 0;
}