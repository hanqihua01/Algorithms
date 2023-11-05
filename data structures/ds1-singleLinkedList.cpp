// 所有的链表都可以用数组形式表示以加快访问速度

// head表示链表头结点的下标，val表示结点的值，nxt表示结点的后继结点的下标，idx表示当前用到的结点的下标
int head, val[N], nxt[N], idx;

// 初始化
void init() {
    head = -1;
    idx = 0;
}

// 在链表头插入一个数num
void insert(int num) {
    val[idx] = num;
    nxt[idx] = head;
    head = idx;
    idx++;
}

// 在下标为k的结点后插入一个数num
void insert(int k, int num) {
    val[idx] = num;
    nxt[idx] = nxt[k];
    nxt[k] = idx;
    idx++;
}

// 将下标为k的结点后的结点删除
void remove(int k) {
    nxt[k] = nxt[nxt[k]];
}

// 删除链表头
void remove() {
    head = nxt[head]; // 删除头结点，原本下标为head的结点就不会再被访问到了
}

// 遍历链表
void traverse() {
    for (int i = head; i != -1; i = nxt[i]) {
        cout << val[i] << " ";
    }
    cout << endl;
}