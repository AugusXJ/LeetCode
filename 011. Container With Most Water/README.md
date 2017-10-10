# 011. Container With Most Water
----------------

## Description
Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Note: You may not slant the container and n is at least 2.


## 解题思路
影响水的容积有两个因素
1. 容器两端的距离，也就是$\Delta$x。
2. 容器壁的最小高度，也就是min(h<sub>1</sub>,h<sub>2</sub>)。

最愚蠢的方法就是枚举了，这种方法不谈，我们想降低复杂度，就要先假定一条因素最大，此题中两端距离最大是比较容易达到的。我们定两个索引i和j分别指向首元素和末尾元素，以这两点形成容器计算储水量。此时因素1是最大的，但是不保证因素2足够大。因此不断减小因素1以增大因素2，再将得到的结果与之前得到的结果进行比对，取最大值。

code: [point here](solution_1.cpp)