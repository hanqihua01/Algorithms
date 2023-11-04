// Difference array defination
d[i] = S[i] - S[i-1]
// Difference array generation
d[i] = S[i] - S[i-1] = (S[i-1] + d[i]) - S[i-1] = d[i]
// Difference array application
区间S[i]到S[j]所有元素加上c, 即d[i] += c, d[j+1] -= c

// 2D Difference array defination
d[i][j] = S[i][j] - S[i-1][j] - S[i][j-1] + S[i-1][j-1]
// 2D Difference array generation
d[i][j] = S[i][j] - S[i-1][j] - S[i][j-1] + S[i-1][j-1] = (S[i-1][j] + S[i][j-1] - S[i-1][j-1] + d[i][j]) - S[i-1][j] - S[i][j-1] + S[i-1][j-1] = d[i][j]
// 2D Difference array application
区间S[x1][y1]到S[x2][y2]所有元素加上c, 即d[x1][y1] += c, d[x2+1][y1] -= c, d[x1][y2+1] -= c, d[x2+1][y2+1] += c