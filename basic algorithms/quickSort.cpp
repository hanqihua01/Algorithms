#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int>& ary, int l, int r) {
    if (l >= r) return;

    int m = ary[(l + r) / 2];
    int i = l - 1, j = r + 1;
    while (i < j) {
        do i++; while (ary[i] < m);
        do j--; while (ary[j] > m);
        if (i < j) swap(ary[i], ary[j]);
    }

    quickSort(ary, j + 1, r); quickSort(ary, l, j);
    // Think why not quickSort(ary, i, r); quickSort(ary, l, i - 1); or quickSort(ary, i, r); quickSort(ary, l, j);
}

int main() {
    vector<int> ary;
    for (int i = 0; i < 10; i++) {
        ary.push_back(rand() % 100);
    }

    quickSort(ary, 0, ary.size() - 1);
    
    for (int i = 0; i < ary.size(); i++) {
        cout << ary[i] << " ";
    }
}