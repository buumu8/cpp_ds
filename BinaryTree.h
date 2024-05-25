#pragma once

template <typename T>
class BinaryTree {
    public:
        //...
    private:
        class TreeNode {
            public:
                T &data; //Data Represent
                TreeNode *left, *right; //In link list will only have one child
                TreeNode(T &data):
                    data(data), left(nullptr), right(nullptr) {}
        };

    TreeNode *root_;
};