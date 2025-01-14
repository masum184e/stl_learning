#include <bits/stdc++.h>
using namespace std;
#define int long long int

class HashTable{
    private:
        int size;
        list<pair<int, string>> *table;
        int hashFunction(int key){
            return key % size;
        }
    public:
        HashTable(int size){
            table = new list<pair<int, string>>[size];
        }
        ~HashTable(){
            delete[] table;
        }
        void insert(int key, string value){
            int index = hashFunction(key);
            table[index].push_back({key, value});
        }
        void remove(int key){
            int index = hashFunction(key);
            for(auto it = table[index].begin(); it != table[index].end(); it++){
                if(it->first == key){
                    table[index].erase(it);
                    break;
                }
            }
        }
        string search(int key){
            int index = hashFunction(key);
            for(auto it = table[index].begin(); it != table[index].end(); it++){
                if(it->first == key){
                    return it->second;
                }
            }
            return "Not Found";
        }
};

int32_t main(){

    HashTable ht(10);
    ht.insert(1, "One");
    ht.insert(2, "Two");
    ht.insert(3, "Three");
    cout << ht.search(1) << endl;
    cout << ht.search(2) << endl;
    cout << ht.search(3) << endl;
    ht.remove(2);
    cout << ht.search(2) << endl;

    return 0;
}