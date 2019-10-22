#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    map<char, int> value;
    value['('] = value[')'] = 1;
    value['['] = value[']'] = 2;
    value['{'] = value['}'] = 3;
    for(int i = 0; i < s.length(); i++)
    {
        if(!st.empty())
        {
            if(value[s[i]] == value[st.top()])
               st.pop();
            else
              st.push(s[i]);
        }
        else
            st.push(s[i]);
    }
    if(st.empty())  cout << "true";
    else    cout << "false";
    return 0;
}
