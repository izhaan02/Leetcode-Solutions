class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>adjList;
        for(auto i: prerequisites){
            int u=i[1];
            int v=i[0];
            adjList[u].push_back(v);

        }
        vector<int>topoOrder;
        unordered_map<int,int>indegree;

        for(auto i: adjList){
            for(auto j : i.second){
                indegree[j]++;
            }
        }
        queue<int>q;

        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }

        while(!q.empty()){
            int src=q.front();
            q.pop();
            topoOrder.push_back(src);

            for(auto nbr : adjList[src]){
                indegree[nbr]--;
                if(indegree[nbr]==0) q.push(nbr);
            }
        }
        if(topoOrder.size()==numCourses) return topoOrder;
        else return {};
    }
};