// Complete the freqQuery function below.
vector<int> freqQuery(vector<vector<int>> queries) {
    map <int, int> mp;
    map <int, int> mp1;
    vector <int> result;
    int n=queries.size();
    for(int i=0;i<n;i++){
        if(queries[i][0]==1){
            mp1[mp[queries[i][1]]]--;
            mp[queries[i][1]]++;
            mp1[mp[queries[i][1]]]++;
        }
            
        else if(queries[i][0]==2){
            if(mp[queries[i][1]]>0){
                mp1[mp[queries[i][1]]]--;
                mp[queries[i][1]]--;
                mp1[mp[queries[i][1]]]++;
            }
                
        }
            
        else if(queries[i][0]==3){
            
            if(mp1[queries[i][1]]>0)
                result.push_back(1);
            else
                result.push_back(0);
        }
    }
    return result;

}