import java.util.*;

class TreeNode{
    int data;
    TreeNode left;
    TreeNode right;

    public TreeNode(int data){
        this.data = data;
    }
}

public class LowestCommonAncestor{

    public static TreeNode lowestCommonAncestor(TreeNode root, TreeNode x, TreeNode y){
        if(root == null) return null;
        if(root.data ==  x.data || root.data == y.data) return root;

        TreeNode leftNode = lowestCommonAncestor(root.left, x, y);
        TreeNode rightNode = lowestCommonAncestor(root.right, x, y);
        
        if(leftNode != null && rightNode != null) return root;
        return leftNode == null ? rightNode : leftNode; 
        
    }

    public static void main(String[] args){
        lowestCommonAncestor(null);
    }
}