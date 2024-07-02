#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> a ;
    for (size_t i = 0; i < 100; i++)
    {
        a.push_back(to_string(i));
        /* code */
    }
    cout<<a[99]<<endl;

    vector<int> aa (3,100);//前面3是大小，100是初始化值
    cout<<aa[2]<<endl;

    while (!a.empty())
    {
        cout<<"xx "<<a[a.size()-1]<<endl;
        a.pop_back();
        /* code */
    }
    
    vector<vector<int>> aaa = {
        {1,2,3},
        {4,5,6}
    };
    for (size_t i = 0; i < 2; i++)
    {   
        for (size_t j = 0; j < 3; j++)
        {
            cout<<aaa.at(i).at(j)<<endl;
            /* code */
        }
        
        /* code */
    }
    
    
    return 0;
}