#include <iostream>
#include <climits>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"sizeof int="<<sizeof(int)<<endl;

    cout<<"sizeof char="<<sizeof(char)<<endl;

    cout<<"sizeof float="<<sizeof(float)<<endl;

    cout<<"sizeof double="<<sizeof(double)<<endl;

    cout<<"sizeof long="<<sizeof(long)<<endl;

    cout<<"sizeof long long="<<sizeof(long long)<<endl;
    
    cout<<"char min"<<CHAR_MIN<<endl;
    cout<<"char max"<<CHAR_MAX<<endl;
    cout<<"int min"<<INT_MIN<<endl;
    cout<<"int max"<<INT_MAX<<endl;
    cout<<"long max"<<LONG_MAX<<endl;

    return 0;
}