#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
  adj[u].push_back(v);
  // adj[u].push_back(v);
}

void print(vector<int> adj[],int v){
  for(int i=0;i<v;i++){
    for(int x:adj[i]){
      cout<<x<<" ";
    }
    cout<<endl;
  }
}

void BFS(vector<int> adj[],int v,int s){
  vector<bool> visited(v,false);
  queue<int> q;
  visited[s] = true;
  q.push(s);
  while(!q.empty()){
    int u = q.front();
    q.pop();
    cout<<u<<" ";
    for(auto v:adj[u]){
      if(visited[v]==false){
        visited[v] = true;
        q.push(v);
      }
    }
  }
}


int main() {
  vector<int> adj[5];
  int v = 5;
  addEdge(adj,0,1);
  addEdge(adj,0,2);
  addEdge(adj,1,0);
  addEdge(adj,1,2);
  addEdge(adj,1,3);
  addEdge(adj,2,0);
  addEdge(adj,2,1);
  addEdge(adj,2,3);
  addEdge(adj,2,4);
  addEdge(adj,3,1);
  addEdge(adj,3,2);
  addEdge(adj,3,4);
  addEdge(adj,4,2);
  addEdge(adj,4,3);

  print(adj,v);
  cout<<"bfs traversal of above graph is"<<endl;
  BFS(adj,v,0);
  return 0;
}