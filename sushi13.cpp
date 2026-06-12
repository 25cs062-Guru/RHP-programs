#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector<int> shari(s), neta(n);

    for (int i = 0; i < s; i++)
        cin >> shari[i];
    for (int i = 0; i < n; i++) 
        cin >> neta[i];

    sort(shari.rbegin(), shari.rend());
    sort(neta.rbegin(), neta.rend());

    int i = 0, j = 0;
    int count = 0;

    while (i < s && j < n) {
        if (neta[j] <= 2 * shari[i]) {
            count++;
            i++;
            j++;
        } else {
            j++;
        }
    }

    cout << count << '\n';
}