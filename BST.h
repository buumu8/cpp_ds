#pragma once

template <typename K, typename D> //Base on dictionary
class Dictionary {
    public:
        Dictionary();
        const D &find(const K &key);
        void insert(const K &key, const D &data);
        const D &remove(const K &key);
    private:
        class TreeNode{
            public:
                const K &key; //for dictionary
                const D &data; //for dictionary
                TreeNode *left, *right; //two children
                TreeNode(const K & key, const D &data) 
                    : key(key), data(data), left(nullptr), right(nullptr) {}
        };
    
    TreeNode *head_;
};