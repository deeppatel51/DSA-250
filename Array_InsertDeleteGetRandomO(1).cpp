class RandomizedSet {
public:
    vector<int> set;
    unordered_map<int,int> indexFinder;
    RandomizedSet() {
        //RandomizedSet randomizedSet = new RandomizedSet();
    }
    
    bool insert(int val) {
        if(indexFinder.find(val) != indexFinder.end()) return false;
        else
        {
            set.push_back(val);
            indexFinder[val] = set.size()-1;
            return true;
        }
    }
    
    bool remove(int val) {
        if(indexFinder.find(val) == indexFinder.end()) return false;
        else{
            int lastEle = set.back();
            int indexToBeRemoved = indexFinder[val];
            set[indexToBeRemoved] = lastEle;
            set.pop_back();
            indexFinder[lastEle] = indexToBeRemoved;
            indexFinder.erase(val);
            return true;

        }
    }
    
    int getRandom() {
        return set[rand()%set.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
