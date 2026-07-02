class MyHashSet {
private:
    static const int SIZE=1009;
    vector<list<int>>table;

    int hashfunction(int key){
        return key%SIZE;
    }
public:
    MyHashSet() {
        table.resize(SIZE);
    }
    
    void add(int key) {
        int index=hashfunction(key);
        for(int num:table[index]){
            if(num==key){
                return;
            }
        }
        table[index].push_back(key);
    }
    
    void remove(int key) {
        int index=hashfunction(key);
        table[index].remove(key);
    }
    
    bool contains(int key) {
        int index=hashfunction(key);
        for(int num:table[index]){
            if(num==key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */