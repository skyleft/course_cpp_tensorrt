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
    
    //二维数组
    int c[][3] {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout<<c[i][j]<<endl;
        }
        
    }
    
    
    return 0;
}