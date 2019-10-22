#include<iostream>
#include<map>

using namespace std;

struct Node {
    map<char, Node *> childNode;
    bool leafNode{};

    Node() = default;
};

void insert(Node *root, const string &word) {
    Node *current = root;
    for (char i : word) {
        char ch = i;
        Node *node = current->childNode[ch];
        if (!node) {
            node = new Node();
            current->childNode[i] = node;
        }
        current = node;
    }
    current->leafNode = true;
}

bool search(Node *root, const string &word) {
    Node *current = root;
    for (char ch : word) {
        Node *node = current->childNode[ch];
        if (!node)
            return false;
        current = node;
    }
    return current->leafNode;
}

int main() {
    auto *root = new Node();
    insert(root, "elephant");
    insert(root, "tiger");
    insert(root, "timothy");
    string word;
    cout << "Enter a word to search for: ";
    cin >> word;
    string result = search(root, word) == 1 ? "The word: "+word+" exists" : " The given word doesnt exist";
    cout << result;
    return 0;
}