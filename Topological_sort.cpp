// O(n^2)

void topological_sort()
{
    visited.assign(N+1,false);
    ans.clear();
    for(ll k=1; k<=N; ++k)
        for(ll i=1; i<=N; ++i)
        {
            if(!visited[i] and !indegree[i])
            {
                ans.push_back(i);
                visited[i]=true;
                for(ll j=0; j<graph[i].size(); ++j)
                {
                    indegree[graph[i][j]]--;
                }
                break;
            }
        }
}
