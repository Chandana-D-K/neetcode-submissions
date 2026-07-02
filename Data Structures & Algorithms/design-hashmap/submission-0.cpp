class MyHashMap {
private:
    static const int SIZE=1009;
    vector<list<pair<int,int>>>table;

    int hashfunction(int key){
        return key%SIZE;
    }
public:
    MyHashMap() {
        table.resize(SIZE);
    }
    
    void put(int key, int value) {
        int index=hashfunction(key);
        for(auto &it:table[index]){
            if(it.first==key){
                it.second=value;
                return;
            }
        }
        table[index].push_back({key,value});
    }
    
    int get(int key) {
        int index=hashfunction(key);
        for(auto it:table[index]){
            if(it.first==key){
                return it.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index=hashfunction(key);
        for(auto &it:table[index]){
            if(it.first==key){
                table[index].remove(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */