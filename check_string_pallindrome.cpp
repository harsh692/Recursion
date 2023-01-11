#include <iostream>

using namespace std;

int checkpal(int i,string s){
    int n=s.length();
    if(i>=(n/2))
    return 1;
    else{
        if(s[i]!=s[n-i-1])
        return 0;
        checkpal(i+1,s);
    }
}
int main()
{
    string s;
    cin>>s;
    cout<<checkpal(0,s);
    return 0;
}
// giving correct ans. but not giving 1 as ans instead any no.
