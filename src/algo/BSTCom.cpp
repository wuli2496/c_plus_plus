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

} /* namespace BST */
