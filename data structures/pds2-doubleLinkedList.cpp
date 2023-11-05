// val表示节点的值，l表示左节点，r表示右节点，idx表示当前节点的下标
int val[N], l[N], r[N], idx;

// 初始化
void init() {
    // 0表示左端点，1表示右端点
    r[0] = 1, l[1] = 0;
    idx = 2;
}

// 在下标是k的节点的右边插入一个节点x
void insert(int k, int x) {
    val[idx] = x;
    r[idx] = r[k], l[idx] = k;
    l[r[k]] = idx, r[k] = idx++;
}

// 删除下标是k的节点
void remove(int k) {
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}