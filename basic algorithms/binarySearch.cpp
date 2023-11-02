bool check(int m) { /* ... */}

void binarySearch1(int l, int r) {
    while (l < r) {
        int m = (l + r) / 2;
        if (check(m)) r = m;
        else l = m + 1; // Think why not l = m
    }
}

void binarySearch2(int l, int r) {
    while (l < r) {
        int m = (l + r + 1) / 2;
        if (check(m)) r = m - 1; // Think why not r = m
        else l = m;
    }
}