#include <bits/stdc++.h>
using namespace std;

string stringRev(string &ch,int start,int end){
    if (start > end) return ch;
    swap(ch[start],ch[end]);
    start++;
    end--;

    return stringRev(ch,start,end);
}

int main()
{
    string ch="abba";
    string test=ch;
    cout<<ch<<endl;
    int size=ch.length();
    stringRev(ch,0,size-1);
    cout<<ch<<endl;
    return 0;
}