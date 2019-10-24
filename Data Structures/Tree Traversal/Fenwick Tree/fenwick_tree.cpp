// Fenwick Tree implemented as a solution of a problem "http://codeforces.com/contest/1066/problem/C"


#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define ll long long

const int N = 2e5 + 5;

class Fenwick{
public:
    vector<int> bit = vector<int> (N, 0);

    void add(int idx, int val){
        for(; idx < N && idx >= 0; idx = idx | (idx + 1))
            bit[idx] += val;
    }

    int sum(int r){
        int res = 0;
        for(;r >= 0;r = (r & (r + 1)) -1)
            res += bit[r];
        return res;
    }
}front, back;

int main(){
    IOS;
    int q;cin>>q;
    int cnt = 0; map<int, int> m;
    while(q--){
        char c;int id;
        cin>>c>>id;
        if(c == 'L'){
            m[id] = cnt++;
            front.add(0, 1); front.add(cnt - 1, -1);
            back.add(cnt - 1, cnt - 1); back.add(cnt, -1*(cnt - 1));
        }
        else if(c == 'R'){
            m[id] = cnt++;
            back.add(0, 1); back.add(cnt -1, -1);
            front.add(cnt - 1, cnt - 1); front.add(cnt, - 1*(cnt - 1));
        }
        else{
            int idx = m[id];
            int p1 = front.sum(idx);
            int p2 = back.sum(idx);
            cout<<min(p1, p2)<<endl;
        }
    }
    return 0;
}