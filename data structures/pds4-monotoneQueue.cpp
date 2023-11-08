/* 单调队列主要应用于滑动窗口问题
 * 问题描述：给定一个长度为n的数组a，有一个大小为k的滑动窗口从数组的最左端移动到最右端，每次移动一个位置，求每次滑动窗口中的最大值或最小值
 * 例如，对于数组[2, 3, 6, 1, 4, 5]，滑动窗口大小为3，结果为[2, 1, 1, 1]
 * 可以使用一个双端队列来保存滑动窗口中的元素，队列中的元素单调递增或单调递减，队首元素即为滑动窗口中的最大值或最小值
 * 以[2, 3, 6]为例，接下来要访问1，将超出大小的2出队，因为1比6、3小，所以只要1在窗口内，6、3就不可能输出，所以将6、3从队尾出队
 * 与单调栈相比，单调队列主要解决滑动窗口问题，所以涉及到下标的比较，因此队列中保存的是原数组元素的下标，而单调栈不需要考虑下标，所以可以直接存储元素
 */

int a[N], q[N]; // a为原数组，q为单调队列，保存的是原数组元素下标
int hh = 0, tt = -1;
for (int i = 0; i < n; i++) {
    while (hh <= tt && check_out(q[hh]))
        hh++; // 队头超出滑动窗口大小，需要出队
    while (hh <= tt && check(q[tt], i))
        tt--; // 队尾元素比当前元素大，需要出队
    q[++tt] = i;
}