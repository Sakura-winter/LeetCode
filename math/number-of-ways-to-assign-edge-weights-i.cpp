class Solution {
public:
    typedef long long ll;
    int M = 1e9+7;
    ll power(int base, int powe){
        if(powe == 0){
            return 1;
        }

        ll half = power(base, powe/2);
        ll res = (half * half) % M;

        // if exp is odd we need to multiply one more time
        if(powe % 2 == 1){
            res = (res * base) % M;
        }
        return res;
    }

    int getMaxDepth(unordered_map<int, vector<int>>& adj, int root, int parent){
        //now we will check depth
        int depth = 0;

        for(int &nbgr:adj[root]){
            if(nbgr == parent) continue;

            depth = max(depth, getMaxDepth(adj, nbgr, root) + 1);
        }
        return depth;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        //create adj list;
        unordered_map<int, vector<int>> adj;

        for(auto &edge : edges){
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        int d = getMaxDepth(adj, 1, -1);

        return power(2, d - 1);
    }
};