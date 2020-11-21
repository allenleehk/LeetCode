1. TwoSum

   使用hashtable，可以第一遍先存第二遍查找，或者直接一遍解决。

   C++用的是Unordered_map

   ```C++
   unordered_map<int, int> hash;
   hash.find(numberToFind) != hash.end()
   ```

2. 