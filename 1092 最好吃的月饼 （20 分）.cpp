#include <bits/stdc++.h>
using namespace std;
vector<int> vs;
int main()
{
    int n, m;
    cin >> n >> m;
    vs.resize(n);
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            int val;
            cin >> val;
            vs[j] += val;
        }
    }
    int maxsum = *max_element(vs.begin(), vs.end());
    cout << maxsum << endl;
    vector<int> res;
    for(int i = 0; i < n; ++i){
        if(vs[i] == maxsum) res.push_back(i + 1);
    }
    cout << res[0];
    for(size_t i = 1; i < res.size(); ++i){
        cout << " " << res[i];
    }
    return 0;
}
