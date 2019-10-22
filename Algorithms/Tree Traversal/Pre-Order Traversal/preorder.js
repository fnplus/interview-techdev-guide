// Prg for tree traversals in JS

function Node(data) {
    this.data = data;
    this.left = null;
    this.right = null;
}

// Creating Nodes
var root = new Node(1);
var n1 = new Node(2);
var n2 = new Node(3);
var n3 = new Node(4);
var n4 = new Node(5);

// Setting Children
root.left = n1;
root.right = n2;
n1.left = n3;
n1.right = n4;


// PREORDER Traversal
function pre_order(root, nodes) {
    console.log(root.data);
    if (root && root.left) {
        pre_order(root.left, nodes);
    }
    if (root && root.right) {
        pre_order(root.right, nodes);
    }
    return nodes;
}


// MAIN
console.log("PreOrder Traversal: ")
pre_order(root, []);
