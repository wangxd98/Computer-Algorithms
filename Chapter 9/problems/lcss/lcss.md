# 最长公共子串

### ★ 问题描述

对于给定的两个长度分别为 $m$ 和 $n$ 的字符串 $s_1$ 和  $s_2$，最长公共子串问题就是要找出  $s_1$ 和  $s_2$ 的长度最长的公共子串。字符串  $s_1$ 的任一子串都是它的某个后缀的前缀，因此要找出 $s_1$ 和  $s_2$ 的长度最长的公共子串等价于计算 $s_1$ 的后缀和 $s_2$ 的后缀的公共前缀的最大值。

### ★ 算法设计

对于给定的长度分别为 $m$ 和 $n$ 的字符串 $s_1$ 和 $s_2$，计算 $s_1$ 和 $s_2$ 的最长公共子串的长度。

### ★ 数据输入

输入文件名为lcs.in。

每个文件有多组测试数据。每组测试数据给出多对字符串，计算连续2个字符串的最长公共子串长度。

其中每个字符串的长度 $n$ 满足：$1\leq n\leq 2000$。

### ★ 结果输出

输出文件名为lcs.out。

每行依次输出每组测试数据所对应的最长公共子串长度。

**输入示例**  

```
AACAAAAC
ACAAAACA
bananabanana
naananbabana
```

**输出示例**  

```
7
5
```
