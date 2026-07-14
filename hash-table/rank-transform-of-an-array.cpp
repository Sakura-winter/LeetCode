class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        /*unordered_map<int, int> rank;
        vector<int> copy = arr;
        
        sort(copy.begin(), copy.end());
        int cont = 1;
        for(int& i : copy){
            if(!rank.count(i)){
                rank[i] = cont++;
            }
        }
        for(int i = 0; i < arr.size(); i++){
            copy[i] = rank[arr[i]];
        }
        return copy;*/

        //let's do it sorting indices
        //{40, 10, 20, 30}
        if(arr.empty()) return {};
        vector<int> idx(arr.size());//{0,0,0,0}
        iota(idx.begin(), idx.end(), 0); // filling idx{0,1,2,3,4}
        sort(idx.begin(), idx.end(),
        [&](int a, int b){
            return arr[a] < arr[b];
        });//{1,3,4,0}

        vector<int> ans(arr.size());
        int rank = 1;
        ans[idx[0]] = 1;//ans = {?, 1, ?, ?}
        for(int i = 1; i < arr.size(); i++){
            if(arr[idx[i]] != arr[idx[i - 1]]) rank++;
            ans[idx[i]] = rank;
        }
        return ans;




    }
};