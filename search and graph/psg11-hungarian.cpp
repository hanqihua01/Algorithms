/* 匈牙利算法用来对二分图求最大匹配，时间复杂度为O(nm)。
 * 比如有一群男生和一群女生，每个男生对一个或多个女生有好感，女生同理。
 * 这就构成了一个二分图，现在要从中选出一些边，使得一个男生仅和一个女生匹配，且匹配数最大。
 * 匈牙利算法流程如下：
 * 遍历所有男生，每遍历一个男生时，依次枚举他能匹配的所有女生，如果该女生还没有匹配对象，那就就和她匹配，
 * 如果该女生有匹配对象，但是该匹配对象可以选择重新匹配，那就让该女生和这个男生匹配，然后原本的男生重新匹配，这是一个递归的过程。
*/

int n1, n2;     // n1表示第一个集合中的点数，n2表示第二个集合中的点数
int h[N], e[M], ne[M], idx;     // 邻接表存储所有边，匈牙利算法中只会用到从第一个集合指向第二个集合的边，所以这里只用存一个方向的边
int match[N];       // 存储第二个集合中的每个点当前匹配的第一个集合中的点是哪个
bool st[N];     // 表示第二个集合中的每个点是否已经被遍历过

bool find(int x)
{
    for (int i = h[x]; i != -1; i = ne[i])
    {
        int j = e[i];
        if (!st[j])
        {
            st[j] = true;
            if (match[j] == 0 || find(match[j]))
            {
                match[j] = x;
                return true;
            }
        }
    }

    return false;
}

// 求最大匹配数，依次枚举第一个集合中的每个点能否匹配第二个集合中的点
int res = 0;
for (int i = 1; i <= n1; i ++ )
{
    memset(st, false, sizeof st);
    if (find(i)) res ++ ;
}
