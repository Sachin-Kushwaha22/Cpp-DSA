#include <bits/stdc++.h>
using namespace std;

bool palidromeCheck(string ch,int s,int e){
    if(s>=e) return true;
    if(ch[s]!=ch[e]){
        return false;
    }
    else return palidromeCheck(ch,s+1,e-1);
}

int main()
{
    string ch="abba";
    int size=ch.size();
    cout<<palidromeCheck(ch,0,size-1);
    return 0;
}