#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& ary, int l, int r) {
    if (l >= r) return;

    int m = (l + r) / 2;
    mergeSort(ary, l, m); mergeSort(ary, m + 1, r);

    vector<int> tmp;
    int i = l, j = m + 1;
    while (i <= m && j <= r) {
        if (ary[i] <= ary[j]) tmp.push_back(ary[i++]);
        else tmp.push_back(ary[j++]);
    }
    while (i <= m) tmp.push_back(ary[i++]);
    while (j <= r) tmp.push_back(ary[j++]);

    for (i = l; i <= r; i++) ary[i] = tmp[i - l];
}

int main() {
    vector<int> ary;
    for (int i = 0; i < 10; i++) {
        ary.push_back(rand() % 100);
    }

    mergeSort(ary, 0, ary.size() - 1);
    
    for (int i = 0; i < ary.size(); i++) {
        cout << ary[i] << " ";
    }
}