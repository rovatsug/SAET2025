#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> count;
    for (int i=0;i<n;i++) {
        cin >> v[i];
        count[ v[i] ]++;
    }

    sort(v.begin(), v.end());

    return 0;
}
