/*
 * BSTCom.h
 *
 *  Created on: 2020Äê2ÔÂ29ÈÕ
 *      Author: wl
 */

#ifndef ALGO_BSTCOM_H_
#define ALGO_BSTCOM_H_

#include "AlgoPolicy.h"
#include <vector>
#include <limits>

using namespace std;

namespace BST
{

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr)
    {}
};

class BSTCom : public AlgoPolicy<vector<TreeNode*>>
{
public:
    BSTCom(int n);
    virtual ~BSTCom();

    vector<TreeNode*> execute();

private:
    vector<TreeNode*> generate(int l, int r);

private:
    int n;
};

class BSTComDp : public AlgoPolicy<vector<TreeNode*>>
{
public:
    BSTComDp(int n);
    virtual ~BSTComDp();

    vector<TreeNode*> execute();

private:
    TreeNode* clone(TreeNode* node, int offset);

private:
    int n;
};

class BSTComCounter : public AlgoPolicy<int>
{
public:
    BSTComCounter(int n);
    ~BSTComCounter();

    int execute();

private:
    int n;
}

class BSTChecker : public AlgoPolicy<bool>
{
public:
    BSTChecker(TreeNode *root);
    ~BSTChecker();

    bool execute();

private:
    bool isValid(TreeNode* root);
    int maxValue(TreeNode* root);
    int minValue(TreeNode* root);

private:
    TreeNode* root;
};

class BSTInOrderChecker : public AlgoPolicy<bool>
{
public:
    BSTInOrderChecker(TreeNode* root);
    ~BSTInOrderChecker();

    bool execute();

private:
    bool isValid(TreeNode* root);

private:
    TreeNode* root;
    TreeNode* pre;
};

} /* namespace BST */

#endif /* ALGO_BSTCOM_H_ */
