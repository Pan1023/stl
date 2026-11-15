# STL 学习代码

C++ 标准模板库（STL）的学习练习代码，按容器类型分类。每个子目录都是一个独立的 Visual Studio 工程（`.slnx` + `.vcxproj`），可单独打开、编译、运行。

## 目录总览

| 大类 | 示例数 | 主要内容 |
| --- | --- | --- |
| **01-vector** | 5 | `vector` 基础概念与迭代器、多种创建方式、`insert` 插入、`erase` 删除、`sort` 排序 |
| **02-string** | 4 | `string` 基础概念（与字符数组对比）、各种构造方式、赋值、拼接 |
| **03-stack** | 8 | `stack` 的特点、构造与赋值、`push` / `pop` / `top` / `size`，以及括号匹配应用 |
| **04-queue** | 7 | `queue` 的特点、构造、`push` / `pop` / `front` / `back` / `size` |

合计 **24** 个示例工程。

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
- `5-4-string拼接操作` —— 字符串拼接

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

## 说明

- 每个子目录是独立的 VS 工程，双击 `.slnx` 即可用 Visual Studio 打开运行。
- 源码统一为 **UTF-8 (带 BOM)** 编码，VS 与 GitHub 网页都能正确显示中文注释。
- 编译产物（`.vs`、`x64/`、`*.obj`、`*.exe`、`*.pdb` 等）已通过 `.gitignore` 排除。
- 目录名前的数字是原来的章节编号，方便和课件对应。
- `补充-` 开头的目录是原工程名与内容不符、按实际内容重新归类的示例。
- 相关仓库：[cpp](https://github.com/Pan1023/cpp)（C++ 语法与面向对象）、[data-structure](https://github.com/Pan1023/data-structure)（手写数据结构）。
