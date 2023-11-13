/* Kruskal算法是另一种求最小生成树的算法。
 * Kruskal算法的基本思想是：按照权值从小到大的顺序选择n-1条边，并保证这n-1条边不构成回路。
 * Kruskal算法的流程是：
 * 1. 将所有边按照权值从小到大排序。
 * 2. 从权值最小的边开始，如果这条边连接的两个顶点不在同一个连通分量中，则将这条边加入到最小生成树中。
 * 3. 重复步骤2，直到最小生成树中有n-1条边。
*/