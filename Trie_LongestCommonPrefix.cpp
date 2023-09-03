class Trie{
private:
    struct Node{
        Node* links[26];
        bool flag;
        int cp = 0;

        bool contains(char e){
            return links[e-'a'] != NULL;
        }

        void add(char e,Node* node){
            links[e-'a'] = node;
        }

        Node* next(char e){
            return links[e-'a'];
        }

        void setend(){
            this->flag = true;
        }
        void incresePrefix(){
            this->cp++;
        }
    };
private:
    Node* root;
public:
    Trie(){
        root = new Node();
    }
    void insert(string&s){
        Node* node = root;
        for(char&e: s){
            if(!node->contains(e))
                node->add(e,new Node());
            node = node->next(e);
            node->incresePrefix();
        }
        node->setend();
    }
    int num_of_prefix(string&s){
        Node* node = root;
        for(char&e: s){
            if(!node->contains(e)) return 0;
            node = node->next(e);
        }
        return node->cp;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = size(strs), mn = 1e9;
        Trie *trie = new Trie();
        string s,t;
        for(auto&e: strs){
            if(size(e) < mn){
                mn = size(e);
                s = e;
            }
            trie->insert(e);
        }
        for(char&e: s){
            t += e;
            if(trie->num_of_prefix(t) != n){
                t.pop_back();
                return t;
            }
        }
        return t;
    }
};
