class TrieNode(object):
    def __init__(self):
        self.children = [] #will be of size = 26
        self.isLeaf = False
    
    def getNode(self):
        p = TrieNode() #new trie node
        p.children = []
        for i in range(26):
            p.children.append(None)
        p.isLeaf = False
        return p
    
    def insert(self, root, key):
        key = str(key)
        pCrawl = root
        for i in key:
            index = ord(i)-97
            if index > 25 or index < 0:
                print("Small alphabet charchters only allowed")
                return
            if(pCrawl.children[index] == None):
                # node has to be initialised
                pCrawl.children[index] = self.getNode()
            pCrawl = pCrawl.children[index]
        pCrawl.isLeaf = True #marking end of word
    
    def search(self, root, key):
        #print("Searching %s" %key) #DEBUG
        pCrawl = root
        for i in key:
            index = ord(i)-97
            # handling non alphabet characters
            if index > 25 or index < 0:
                return False
            if(pCrawl.children[index] == None):
                return False
            pCrawl = pCrawl.children[index]
        if(pCrawl and pCrawl.isLeaf):
            return True

def main():
    root = TrieNode().getNode()
    root.insert(root, "elephant")
    root.insert(root, "tiger")
    root.insert(root, "timothy")
    search = input("Enter the word to search for: ")
    if root.search(root, search):
        print("The word:", search, "exists")
    else:
        print("The given word doesnt exist")
if __name__ == '__main__':
    main()
