#include<bits/stdc++.h>
using namespace std;
/*typedef struct treeNode
{
	int val;
	struct treeNode *left,*right;
}treeNode;
*/
int findHeight(treeNode *t)
{
	if(t)
		return max(findHeight(t->left),findHeight(t->right))+1;
	return 0;
}