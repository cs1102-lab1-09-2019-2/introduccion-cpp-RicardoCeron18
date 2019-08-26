#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v = { 5, 2, 1, 3, 4, 2, 2, 4, 5, 5 };

    unordered_set<int> s(v.begin(), v.end());
    v.assign(s.begin(), s.end());

    for (auto it = v.cbegin(); it != v.cend(); ++it)
        cout << *it << ' ';

    return 0;
}
