// Trie树用来存储字符串集合，可以快速的查找某个字符串是否出现在集合中

int son[N][26], cnt[N], idx;
// 0号点既是根节点，又是空节点
// son的每一行代表一个节点，同一行中每个元素代表子节点的行下标，每个元素的下标代表子节点的字符
// cnt[]存储以每个节点结尾的单词数量

// 插入一个字符串
void insert(char *str)
{
    int p = 0;
    for (int i = 0; str[i]; i ++ )
    {
        int u = str[i] - 'a';
        if (!son[p][u]) son[p][u] = ++ idx;
        p = son[p][u];
    }
    cnt[p] ++ ;
}

// 查询字符串出现的次数
int query(char *str)
{
    int p = 0;
    for (int i = 0; str[i]; i ++ )
    {
        int u = str[i] - 'a';
        if (!son[p][u]) return 0;
        p = son[p][u];
    }
    return cnt[p];
}
