/* 拓扑排序是对有向无环图的顶点的一种排序，它使得如果存在一条从顶点u到顶点v的路径，那么在排序中顶点u就出现在顶点v的前面。
 * 有向无环图的拓扑排序可以用来确定一个项目的执行顺序。在这种应用中，有向图的顶点表示项目，有向边表示一个项目必须在另一个项目之前完成。
 * 拓扑排序的实现包括两个步骤：
 * 1. 从有向图中选择一个没有前驱（即入度为0）的顶点并输出。
 * 2. 从图中删除该顶点和所有以它为起点的有向边。
 * 重复上述两步，直到当前的有向图为空或当前图中不存在无前驱的顶点为止。后一种情况说明有向图中必然存在环。
 * 有向无环图的拓扑排序算法的时间复杂度为O(|V|+|E|)。
*/