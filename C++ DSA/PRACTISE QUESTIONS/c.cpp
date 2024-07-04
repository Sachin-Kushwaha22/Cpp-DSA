#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 6; i++ )
    {
        for (int j=i; j <=6 ; j++)
        {
            if (i+j==10)
            {
                cout<<" break"<<endl;
                break;
            }
            
            cout<<i<<" "<<j<<endl;
        }
        
    }
    
    return 0;
}