/* 常规的Dijkstra算法，复杂度O(n^2)，仅能处理正权边
 * 由于Dijkstra算法每次迭代需要将数组中最小元素取出，所以可以用小根堆来优化
 * 优化后的Dijkstra算法，复杂度O(mlogn)
*/