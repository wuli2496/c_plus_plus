/*
 * BSTCom.cpp
 *
 *  Created on: 2020Äê2ÔÂ29ÈÕ
 *      Author: wl
 */

#include "BSTCom.h"

namespace BST
{

BSTCom::BSTCom(int n)
{
    this->n = n;

}

BSTCom::~BSTCom()
{

}

vector<TreeNode*> BSTCom::execute()
{
    return generate(1, n);
}

vector<TreeNode*> BSTCom::generate(int l, int r)
{
    vector<TreeNode*> result;
    if (l > r)
    {
        result.push_back(nullptr);
        return result;
    }

    for (int i = l; i <= r; ++i)
    {
        vector<TreeNode*> left = generate(l, i - 1);
        vector<TreeNode*> right = generate(i + 1, r);

        for (size_t j = 0; j < left.size(); ++j)
        {
            for (size_t k = 0; k < right.size(); ++k)
            {
                TreeNode* node = new TreeNode(i);
                node->left = left[j];
                node->right = right[k];

                result.push_back(node);
            }
        }
    }

    return result;
}

BSTComDp::BSTComDp(int n)
{
    this->n = n;
}

BSTComDp::~BSTComDp()
{

}

vector<TreeNode*> BSTComDp::execute()
{
    if (n == 0)
    {
        return vector<TreeNode*>();
    }

    vector<TreeNode*> ans[n + 1];
    ans[0].push_back(nullptr);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            vector<TreeNode*> left = ans[j];
            vector<TreeNode*> right = ans[i - 1 - j];
            for (auto l : left)
            {
                for (auto w : right)
                {
                    TreeNode* node = new TreeNode(j + 1);
                    node->left = l;
                    node->right = clone(w, j + 1);
                    ans[i].push_back(node);
                }
            }
        }
    }

    return ans[n];
}

TreeNode* BSTComDp::clone(TreeNode* node, int offset)
{
    if (node == nullptr)
    {
        return nullptr;
    }

    TreeNode* root = new TreeNode(node->val + offset);
    root->left = clone(node->left, offset);
    root->right = clone(node->right, offset);

    return root;
}

BSTComCounter::BSTComCounter(int n)
{
    this->n = n;
}

BSTComCounter::~BSTComCounter()
{

}

int BSTComCounter::execute()
{
    if (n == 1)
    {
        return 1;
    }

    vector<int> ans(n + 1, 0);
    ans[0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            ans[i] += ans[j] * ans[i - 1 - j];
        }
    }

    return ans[n];
}

BSTChecker::BSTChecker(TreeNode* root)
{
    this->root = root;
}

BSTChecker::~BSTChecker()
{

}

bool BSTChecker::execute()
{
    return isValid(root);
}

int BSTChecker::maxValue(TreeNode* root)
{
    if (root == nullptr)
    {
        return numeric_limits<int>::max();
    }

    while (root->right != nullptr)
    {
        root = root->right;
    }

    return root->val;
}

int BSTChecker::minValue(TreeNode* root)
{
    if (root == nullptr)
    {
        return numeric_limits<int>::min();
    }

    while (root->left != nullptr)
    {
        root = root->left;
    }

    return root->val;
}

bool BSTChecker::isValid(TreeNode* root)
{
    if (root == nullptr)
    {
        return true;
    }

    if (root->left != nullptr)
    {
        if (maxValue(root->left) >= root->val)
        {
            return false;
        }
    }

    if (root->right != nullptr)
    {
        if (minValue(root->right) <= root->val)
        {
            return false;
        }
    }

    return isValid(root->left) && isValid(root->right);
}

BSTInOrderChecker::BSTInOrderChecker(TreeNode* root)
{
    this->root = root;
    pre = nullptr;
}

BSTInOrderChecker::~BSTInOrderChecker()
{

}

bool BSTInOrderChecker::execute()
{
    return isValid(root);
}

bool BSTInOrderChecker::isValid(TreeNode* root)
{
    if (root == nullptr)
    {
        return true;
    }

    if (!isValid(root->left))
    {
        return false;
    }

    if (pre != nullptr && pre->val >= root->val)
    {
        return false;
    }

    pre = root;

    return isValid(root->right);
}
} /* namespace BST */
