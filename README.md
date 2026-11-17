# STL 学习代码

C++ 标准模板库（STL）的学习练习代码，按容器类型分类。每个子目录都是一个独立的 Visual Studio 工程（`.slnx` + `.vcxproj`），可单独打开、编译、运行。

## 目录总览

| 大类 | 示例数 | 主要内容 |
| --- | --- | --- |
| **01-vector** | 5 | 基础概念与迭代器、多种创建方式、`insert` 插入、`erase` 删除、`sort` 排序 |
| **02-string** | 11 | 基础概念、构造、赋值、拼接、比较、下标访问、插入、删除、查找、替换、子串 |
| **03-stack** | 8 | 特点、构造与赋值、`push` / `pop` / `top` / `size`，以及括号匹配应用 |
| **04-queue** | 7 | 特点、构造、`push` / `pop` / `front` / `back` / `size` |
| **05-map** | 9 | 特点与 `pair`、创建、赋值、大小、插入、查找、删除、修改、统计 |
| **06-priority_queue** | 7 | 堆的数组下标关系、最大/最小优先队列、入队出队、取堆顶、自定义比较结构 |

合计 **47** 个示例工程。

## 详细目录

### 01-vector

- `4-1-vector基础概念` —— `vector<int>` 的定义与遍历，`begin()` / `end()` 迭代器
- `4-2-vector对象创建` —— 默认构造、初始化列表等多种创建方式，封装 `printVector` 遍历函数
- `4-4-vector数据插入` —— `insert(迭代器, 值)`，插在指定迭代器之前
- `4-5-vector数据删除` —— `erase(迭代器)` 删除指定位置元素
- `4-11-数据排序` —— `<algorithm>` 的 `sort`，配合自定义比较函数实现降序

### 02-string

- `5-1-string基础概念` —— 字符数组 `char[]` 与 `std::string` 的对比
- `5-2-string对象创建` —— 无参构造、初始化列表、字符串初始化、取前 n 个字符、拷贝构造、n 个相同字符，共 6 种
- `5-3-string赋值` —— 字符串常量等方式赋值
- `5-4-string拼接操作` —— `+` 运算符重载拼接、`append` 追加
- `5-5-string比较操作` —— `compare()` 返回 -1 / 0 / 1，以及 `==`、`>=`、`<=` 等运算符比较
- `5-6-string下标访问` —— `[]` 下标访问，`size()` 不含结尾 `\0`
- `5-7-string数据插入` —— `insert(pos, n, ch)` 等插入方式
- `5-8-string数据删除` —— `erase()` 默认删到末尾，`erase(pos)` 删 pos 及之后
- `5-9-string数据查找` —— `find` 查找子串，未找到返回 `-1`（`npos`）
- `5-10-string数据替换` —— `replace` 按位置与长度替换
- `5-11-string子串获取` —— `substr(pos, count)` 取子串

### 03-stack

- `7-1-stack基础概念` —— 栈的特点：只能在 `top` 处 `push` / `pop`，不支持遍历，无 `begin` / `end`
- `7-2-stack对象创建` —— 默认构造函数
- `7-3-stack赋值` —— 栈对象之间赋值
- `7-4-stack入栈` —— `push` 入栈
- `7-5-stack获取栈顶元素` —— `top` 取栈顶
- `7-6-stack出栈` —— `pop` 出栈
- `7-7-stack大小操作` —— `size` / `empty`
- `7-8-stack应用-括号匹配` —— 用栈判断 `()` `[]` `{}` 是否配对，栈的经典应用

### 04-queue

- `8-4-queue入队` —— `push` 入队
- `8-5-queue获取队首` —— `front` 取队首
- `8-6-queue获取队尾` —— `back` 取队尾
- `8-7-queue出队` —— `pop` 出队
- `8-8-queue大小操作` —— `size` / `empty`
- `补充-queue特点与定义` —— 队列特点：队首可 `pop`、队尾可 `push`，不能遍历，有 `front` / `back`
- `补充-Project3-queue对象创建` —— 默认构造与拷贝构造

### 05-map

- `11-1-map基础概念` —— 元素都是 `pair`，`first`（键）不重复，自动按 key 排序
- `11-2-map对象创建` —— 默认构造、初始化列表等方式
- `11-3-map赋值` —— `=` 对象赋值（注意区分初始化与赋值）
- `11-4-map大小操作` —— `size` / `empty`
- `11-5-map数据插入` —— `insert` 的三种写法与 `make_pair` 自动推导类型
- `11-6-map查找` —— `find` 返回迭代器，通过 `it->first` / `it->second` 取值
- `11-7-map数据删除` —— `erase` 按迭代器 / 区间删除；map 是双向迭代器，只支持 `++` / `--`
- `11-8-map数据修改` —— 通过迭代器或 `[]` 修改 value
- `11-9-map数据统计` —— 用 `count` 判断 key 是否存在，统计元素出现次数

### 06-priority_queue

- `12-1-priority_queue基础概念` —— 堆的数组下标关系：父节点 `(i-1)/2`、左子节点 `i*2+1`、右子节点 `i*2+2`
- `12-2-priority_queue对象创建` —— 最大优先队列与最小优先队列两种构造
- `12-3-priority_queue入队操作` —— `push` 入队（含最小堆写法）
- `12-4-priority_queue获取堆顶` —— `top` 取堆顶元素
- `12-5-priority_queue出队操作` —— `pop` 弹出堆顶
- `12-6-priority_queue大小操作` —— `size` / `empty`
- `12-7-priority_queue自定义结构` —— 存入自定义结构体时重载比较函数（`operator<`）

## 说明

- 每个子目录是独立的 VS 工程，双击 `.slnx` 即可用 Visual Studio 打开运行。
- 源码统一为 **UTF-8 (带 BOM)** 编码，VS 与 GitHub 网页都能正确显示中文注释。
- 编译产物（`.vs`、`x64/`、`*.obj`、`*.exe`、`*.pdb` 等）已通过 `.gitignore` 排除。
- 目录名前的数字是原来的章节编号，方便和课件对应。
- `补充-` 开头的目录是原工程名与内容不符、按实际内容重新归类的示例。
- 相关仓库：[cpp](https://github.com/Pan1023/cpp)（C++ 语法与面向对象）、[data-structure](https://github.com/Pan1023/data-structure)（手写数据结构）。
