#include <bits/stdc++.h>
using namespace std;

size_t sz;
list< pair<int, int> > keys;
unordered_map< int , list< pair<int, int> >::iterator> info;

LRUCache::LRUCache(int capacity) {
    sz = capacity;
    keys.clear();
    info.clear();
}

int LRUCache::get(int key) {
    int value = -1;
    if(info.find(key) != info.end()) {
        auto itr = info[key];
        value = itr->second;
        keys.erase(itr);
        keys.push_front( make_pair(key, value) );
        info[key] = keys.begin();
    }
    return value;
}

void LRUCache::set(int key, int value) {
    
    if(info.find(key) == info.end()) {
        if(sz == keys.size()){
            auto last = keys.back();
            info.erase(last.first);
            keys.pop_back();
        }
    }
    else {
        keys.erase( info[key] );
    }
    keys.push_front( make_pair(key, value) );
    info[key] = keys.begin(); 
}
