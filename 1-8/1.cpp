#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> hashTable;
        for(auto index = 0; index < nums.size(); index++){
            int toFind = target - nums[index];
            if(hashTable.find(toFind) != hashTable.end() && hashTable[toFind] != index){
                res = {index, hashTable[toFind]};
                return res;
            }
            hashTable[nums[index]] = index;
        }
        return res;
    }
};

int main(){
    Solution a;
	vector<int> v = {1,3,5,8,9};
    int target = 10;
    vector<int> res = a.twoSum(v, target);

    for (auto i : res){
        cout<<i<<", ";
    }
    return 0;
}
