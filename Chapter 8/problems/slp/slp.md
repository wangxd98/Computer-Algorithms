# 特殊线性规划问题

### ★ 问题描述

考察下面的特殊线性规划问题：

$$
\quad \begin{aligned}
& \min c x \\
& \text { s.t.     } \boldsymbol{A} x \geq b \\
& \ \ \ \ \ \ \ \  x \geq 0
\end{aligned}
$$

式中, 约束系数矩阵 $\boldsymbol{A}$ 具有特殊形式, 即 $\boldsymbol{A}$ 是一个 $0-1$ 矩阵, 且 $\boldsymbol{A}$ 的每列中的 1 是连续排列的。例如：

$$
\begin{aligned}
& \min c x \\
& \text { s.t. } 
& {\left[\begin{array}{lllll}
0 & 1 & 0 & 1 & 1 \\
1 & 1 & 0 & 0 & 1 \\
1 & 1 & 1 & 0 & 0 \\
1 & 1 & 1 & 0 & 0
\end{array}\right] x \geq\left[\begin{array}{c}
5 \\
12 \\
10 \\
6
\end{array}\right] }
\end{aligned}
$$

特殊线性规划问题是对于给定的特殊形式线性规划问题，求其最优解。

### ★ 算法设计

对于给定的特殊形式线性规划问题，其约束系数矩阵 $\boldsymbol{A}$ 是一个 $0-1$ 矩阵, 且 $\boldsymbol{A}$ 的每列中的 1 是连续排列的，求其最优解。

 ★ 数据输入

输入文件名为slp.in。

每个文件有多组测试数据。每组测试数据的第一行有2个正整数 $m,n$，表示给定的特殊形式线性规划问题除了变量非负约束外还有 $m$ 个约束，共有 $n$ 个变量。接下来的一行中有$m$个整数，表示给定线性规划问题 $m$ 个约束的右端项 $b_1,b_2,\cdots,b_m$。再接着的 $n$ 行中，每行有 3 个整数 $b_i,e_i,c_i$，表示变量 $x_i,1\leq i\leq n$ 在约束矩阵 $A$ 中，从 $b_i$ 行到 $e_i$ 行的值均为 1，在其余行的值为 0。变量 $x_i$ 在目标函数中的系数为 $c_i$。

其中数据满足：$1\leq n\leq 500$，$1\leq m\leq 40005$。

### ★ 结果输出

输出文件名为slp.out。

依次输出每组数据给定的特殊形式线性规划问题的最优值。

**输入示例**  

```
4 5
5 12 10 6
2 4 1
1 4 2
3 4 3
1 1 4
1 2 5
3 6
12 11 13 
1 1 12
1 2 11
1 3 10
2 2 20
2 3 22
3 3 10
```

**输出示例**  

```
17
130
```
