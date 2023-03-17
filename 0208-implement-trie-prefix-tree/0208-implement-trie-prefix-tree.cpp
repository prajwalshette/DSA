class Trie {
public:
    Trie() {
        
    }
    
    // create structure of TrieNode
    
    struct TrieNode
    {
        bool end;
        
        TrieNode* child[26];
        
        TrieNode()
        {
            end = false;
            
            for(int i = 0; i < 26; i++)
            {
                child[i] = NULL;
            }
        }
    };
    
    // create root of the Trie
    
    TrieNode* root = new TrieNode();
    
    // function for inserting word in the trie
    
    void insert(string word) {
        
        int n = word.size();
        
        TrieNode* curr = root;
        
        for(int i = 0; i < n; i++)
        {
            int idx = word[i] - 'a';
            
            if(curr -> child[idx] == NULL)
            {
                curr -> child[idx] = new TrieNode();
            }
            
            curr = curr -> child[idx];
        }
        
        curr -> end = true;
    }
    
    // function for searching the word in the trie
    
    bool search(string word) {
        
        int n = word.size();
        
        TrieNode* curr = root;
        
        for(int i = 0; i < n; i++)
        {
            int idx = word[i] - 'a';
            
            if(curr -> child[idx] == NULL)
                return false;
            
            curr = curr -> child[idx];
        }
        
        return curr -> end;
    }
    
    bool startsWith(string prefix) {
        
        int n = prefix.size();
        
        TrieNode* curr = root;
        
        for(int i = 0; i < n; i++)
        {
            int idx = prefix[i] - 'a';
            
            if(curr -> child[idx] == NULL)
                return false;
            
            curr = curr -> child[idx];
        }
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */