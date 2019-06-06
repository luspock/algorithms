Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), prove that at least one duplicate number must exist. Assume that there is only one duplicate number, find the duplicate one.

Example 1:

Input: [1,3,4,2,2]
Output: 2
Example 2:

Input: [3,1,3,4,2]
Output: 3
Note:

You must not modify the array (assume the array is read only).
You must use only constant, O(1) extra space.
Your runtime complexity should be less than O(n2).
There is only one duplicate number in the array, but it could be repeated more than once.

# 思路
由于数字范围1-n，且只有一个重复的数字
可以将数组看成单向列表，数组元素指向下一个元素的地址。nums[0]是图的入口
如果有重复数字，说明有两个点指向同一个数字。
这样可以通过追赶法 判断单向列表有没有形成环。环的入口即为重复数字。
接下来找环的入口点。
追赶法：
快指针每次走两步，慢指针走一步。
当快指针和慢指针相遇时,慢指针走了s步，快指针走2s步。相遇在环中离环入口a步的地方，且 环入口离出发点相差x步;
c为环大小
```
2s-s = nc;
s = x+a;
->   x+a=nc;
->   x=(c-a)+(n-1)*c   # 注意c-a是目前慢指针与环入口的距离
```
接下来 fast从出发点重新开始，步长变为1
当fast走x步时，慢指针走(c-a)+(n-1)*c。
他们同时到达换环入口。

算法很美，不是吗？



