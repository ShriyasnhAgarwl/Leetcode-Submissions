class Trie {
public:
    /** Initialize your data structure here. */
    struct TrieNode{
        bool isEnd;
        TrieNode* child[26];
        TrieNode()
        {
            isEnd=false;
            for(int x=0;x<26;x++)
            {
                child[x]=NULL;
            }
        }
    };
    TrieNode *root;
    Trie() {
        root=new TrieNode();
    }
   
    /** Inserts a word into the trie. */
    void insert(string a) {
        int n=a.size();
        TrieNode *crawl=root;
        for(int x=0;x<n;x++)
        {
            if(!crawl->child[a[x]-'a'])
            {
                crawl->child[a[x]-'a']=new TrieNode();
            }
            if(x==n-1)
            {
                crawl->child[a[x]-'a']->isEnd=true;
            }
            crawl=crawl->child[a[x]-'a'];
        }
    }
   
    /** Returns if the word is in the trie. */
    bool search(string a) {
        int n=a.size();
        TrieNode *crawl=root;
        for(int x=0;x<n && crawl;x++)
        {
            if(!crawl->child[a[x]-'a'])
            {
                return false;
            }
            if(x==n-1 && crawl->child[a[x]-'a']->isEnd==false)
            {
                return false;
            }
            crawl=crawl->child[a[x]-'a'];
        }
        return true;
    }
   
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string a) {
        int n=a.size();
        TrieNode *crawl=root;
        for(int x=0;x<n && crawl;x++)
        {
            if(!crawl->child[a[x]-'a'])
            {
                return false;
            }
            crawl=crawl->child[a[x]-'a'];
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
