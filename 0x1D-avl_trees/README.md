# (484) 0x1D. AVL Trees
Specializations > Interview Preparation > Algorithms

---

### Project author
Alexa Orrico (source project by Alexandre Gautier)

### Assignment dates
07-19-2021 to 07-23-2021

### Description
Practice interview question originally appearing as task [30. Is AVL](https://github.com/allelomorph/binary_trees/blob/master/120-binary_tree_is_avl.c) in [(270) 0x1D. C - Binary trees](https://github.com/allelomorph/binary_trees/).

### Provided file(s)
* definitions of `binary_tree_s`, `binary_tree_t, and `avl_t` for `[`binary_trees.h`](./binary_trees.h)
* [`binary_tree_print.c`](./binary_tree_print.c) (originally [here](https://github.com/holbertonschool/0x1C.c/blob/master/binary_tree_print.c))
* [`libavl.a`](./libavl.a) (originally [here](https://s3.amazonaws.com/intranet-projects-files/interviews/484/libavl.a))
* [`0-main.c`](./0-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Is AVL
Write a function that checks if a binary tree is a valid AVL Tree

* Prototype: `int binary_tree_is_avl(const binary_tree_t *tree);`
* Where `tree` is a pointer to the root node of the tree to check
* Your function must return 1 if tree is a valid AVL Tree, and 0 otherwise
* If tree is `NULL`, return 0

Properties of an AVL Tree:

* An AVL Tree is a BST
* The difference between heights of left and right subtrees cannot be more than one
* The left and right subtree each must also be a binary search tree

File(s): [`0-binary_tree_is_avl.c`](./0-binary_tree_is_avl.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_is_avl.c -L. -lavl -o 0-is_avl`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
