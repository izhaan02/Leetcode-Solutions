class Solution {
public:
    void topoOrderBFS(int n, unordered_map<int,vector<int>>&adjList, vector<int>&topo){

        unordered_map<int,int>indegree;

        for(int i=0;i<n;i++){
            indegree[i]=0;
        }

        for(auto i:adjList){
            for(auto j:i.second){
                indegree[j]++;
            }
        }
        queue<int>q;

        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int src=q.front();
            q.pop();
            topo.push_back(src);

            for(auto nbr : adjList[src]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }




    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {    
        unordered_map<int,vector<int>>adjList;

        for(auto cour: prerequisites){
            int u=cour[1];
            int v=cour[0];
            adjList[u].push_back(v);
        }
        vector<int>topo;
        topoOrderBFS(numCourses,adjList,topo);

        if(topo.size()==numCourses) return true;
        else return false;
        
    }
};