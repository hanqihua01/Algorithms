// Prefix sum defination
S[i] = d[1] + d[2] + ... + d[i]
// Prefix sum generation
S[i] = S[i-1] + d[i]
// Prefix sum application
S[r] - S[l-1] = d[l] + d[l+1] + ... + d[r]

// 2D Prefix sum defination
S[i][j] = 以d[1][1]到d[i][j]为对角线的矩形区域的和
// 2D Prefix sum generation
S[i][j] = S[i-1][j] + S[i][j-1] - S[i-1][j-1] + d[i][j]
// 2D Prefix sum application
S[x2][y2] - S[x1-1][y2] - S[x2][y1-1] + S[x1-1][y1-1] = 以d[x1][y1]到d[x2][y2]为对角线的矩形区域的和