// Floyd算法可以处理负权边，但是不能处理负权环

// 使用d[i][j]作为邻接矩阵
for (int k = 0; k < n; k ++ )
    for (int i = 0; i < n; i ++ )
        for (int j = 0; j < n; j ++ )
            d[i][j] = min(d[i][j], d[i][k] + d[k][j]);