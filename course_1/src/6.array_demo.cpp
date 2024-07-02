#include <iostream>
#include <climits>
using namespace std;

int main(int argc, char const *argv[])
{
    char a[] {57,58,59,60,61};
    for (size_t i = 0; i < 6; i++)
    {
        cout<<a[i]<<endl;
        /* code */
    }

    int b[5] {100};
    for (size_t i = 0; i < 5; i++)
    {
        /* code */
        cout<<b[i]<<"\t";
    }
    
    
    return 0;
}