#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while(m--){
        string num;
        cin >> num;
        bool flag = false;
        for(int i = 1; i < 10; ++i){
            string n_num = to_string(i * stoi(num) * stoi(num));
            if(n_num.substr(n_num.size() - num.size()) == num){
                cout << i << " " << n_num << endl;
                flag = true;break;
            }
        }
        if(!flag) cout << "No" << endl;
    }
    return 0;
}
