# STL 学习代码

C++ 标准模板库（STL）的学习练习代码，按容器类型分类。每个子目录都是一个独立的 Visual Studio 工程（`.slnx` + `.vcxproj`），可单独打开、编译、运行。

## 目录总览

| 大类 | 示例数 | 主要内容 |
| --- | --- | --- |
| **01-vector** | 2 | `vector` 的基础概念、迭代器，以及各种创建与初始化方式 |

合计 **2** 个示例工程。

## 详细目录

### 01-vector

- `4-1-vector基础概念` —— `vector<int>` 的定义与遍历，`begin()` / `end()` 迭代器
- `4-2-vector对象创建` —— 默认构造、初始化列表等多种创建方式，封装 `printVector` 遍历函数

## 说明

- 每个子目录是独立的 VS 工程，双击 `.slnx` 即可用 Visual Studio 打开运行。
- 源码统一为 **UTF-8 (带 BOM)** 编码，VS 与 GitHub 网页都能正确显示中文注释。
- 编译产物（`.vs`、`x64/`、`*.obj`、`*.exe`、`*.pdb` 等）已通过 `.gitignore` 排除。
- 目录名前的数字是原来的章节编号，方便和课件对应。
- 相关仓库：[cpp](https://github.com/Pan1023/cpp)（C++ 语法与面向对象）、[data-structure](https://github.com/Pan1023/data-structure)（手写数据结构）。
