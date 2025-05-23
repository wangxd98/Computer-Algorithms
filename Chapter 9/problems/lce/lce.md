# 最长公共扩展

### ★ 问题描述

对于给定字符串 $t[0,\cdots, n-1]$ ，最长公共扩展 (The Longest Common Extension) 问题是对于非负整数 $0 \leq l \leq r$, 计算 $t$ 的后缀 $S_l$和 $S_r$ 的最长公共前缀的长度 $lce(l, r)$ 。例如,当 $t[0,\cdots, n-1]=AACAAAAC$, $l=1, r=6$ 时, $S_1=ACAAAAC$，$S_6=AC$。$S_1$ 和 $S_6$ 的最长公共前缀是 $AC$ 。因此, $lce (1,6)=2$  。

### ★ 算法设计

给定由英文字符组成的字符串 $t$，以及非负整数 $0 \leq l \leq r$, 计算 $t$ 的后缀 $S_l$和 $S_r$ 的最长公共前缀的长度。

### ★ 数据输入

输入文件名为lce.in。

每个文件有多组测试数据。每组测试数据的第一行给出一个由大小写英文字符组成的字符串。第二行是一个正整数 $n$ ，表示有 $n$ 对给定字符串的后缀。接下来的 $n$ 行中，每行有2个非负整数 $0 \leq l \leq r$, 表示要计算后缀 $S_l$和 $S_r$ 的最长公共前缀的长度。

其中每个字符串的长度 $n$ 满足：$1\leq n\leq 2000$。

### ★ 结果输出

输出文件名为lce.out。

每行依次输出每组测试数据所对应的最长公共前缀的长度。

**输入示例**  

```
AACAAAAC
2
1 6
3 4
bananabanana
2
0 6
1 7
```

**输出示例**  

```
2
3
6
5
```
