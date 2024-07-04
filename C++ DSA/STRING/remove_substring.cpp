#include <iostream>
using namespace std;

// creating a function to remove substring from a given string
string removeSubString(string str, string part)
{
    int n = str.length();
    while (n != 0 && str.find(part) < n)
    {
        str.erase(str.find(part), part.length());
    }
    return str;
}

int main()
{
    string str = "asbsndbnnnsdila";
    cout << "Given string is: \"" << str << "\"\n";
    string part;
    cout << "Part  to be removed is : ";
    cin >> part;

    cout <<"\n"<< "Result :- " <<removeSubString(str,part)<< endl;

    return 0;
}