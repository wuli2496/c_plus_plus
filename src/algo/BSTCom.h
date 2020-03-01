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

} /* namespace BST */

#endif /* ALGO_BSTCOM_H_ */
