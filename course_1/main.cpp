#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a{0};
    for (size_t i = 0; i < 10; i++)
    {
        a += i;
    }
    cout<<a<<endl;
    return 0;
}