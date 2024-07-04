#include <iostream>
#include <string>
using namespace std;

// // creating function to replace spaces with '@40' character
// string replaceSpace(string str) {
//     string  result = "";
//     int n = str.length();
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i]== ' ')
//         {
//             result.push_back('@'); // replacing space with @40 in the string
//             result.push_back('4');
//             result.push_back('0');
//         }
//         else
//         {
//             result.push_back(str[i]); // storing non-space characters
//         }
//     }
//     return result;
// }

// without creating new string
string replaceSpace(string str)
{
    // string  result = "";
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            
        }
    }
    return str;
}

int main()
{
    string str = "My name is Sachin";
    // replaceSpace(str);
    cout << replaceSpace(str) << endl;
    return 0;
}