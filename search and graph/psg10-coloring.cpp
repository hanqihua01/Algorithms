/* 染色法可以解决二分图问题，二分图不含有奇数环，所以染色过程一定不会产生矛盾。
 * 二分图的染色方法：从一个顶点开始，将其染成红色，与其相邻的顶点染成蓝色，再将与蓝色相邻的顶点染成红色，以此类推。
 * 如果在染色过程中出现了某个顶点与相邻顶点颜色相同的情况，则说明该图不是二分图。
 * 如果所有顶点都染完色后都没有出现颜色相同的情况，则说明该图是二分图。
 * 二分图的染色方法可以用深度优先搜索或广度优先搜索实现。
 * 使用一个数组保存节点是否被染色过，然后选一个节点为根节点，开始dfs，
 * 如果染色过程中出现了矛盾，则说明不是二分图。
*/