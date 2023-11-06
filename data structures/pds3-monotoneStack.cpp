/* 单调栈，即栈内元素单调递增或单调递减，主要应用于以下场景：
 * 对于数组中的每个元素，求位于该元素左边的第一个比它大/小的元素
 * 例如，对于数组[2, 3, 6, 1, 4, 5]，求每个元素左边第一个比它小的元素，结果为[-1, 2, 3, -1, 1, 4]
 * 可以使用一个栈来保存已经遍历过的元素，比如当前栈顶为6，接下来要遍历1
 * 由于1比6、3、2小，所以对于1后面的所有元素，如果它们比6、3、2大，那么它们也一定比1大，所以可以将6、3、2出栈，将1入栈
 * 从而保持了栈内元素的单调性
 * 由于每个元素最多入栈一次，出栈一次，所以时间复杂度为O(n)
 * 典型题目：LeetCode 84. Largest Rectangle in Histogram
*/