string Solution::simplifyPath(string A) {
    stack<string> s;
    stack<string> rev;
    string path="";
    string ans="/";
    int len=A.size();
    for(int i=0;i<len;i++){
        path="";
        while(A[i]=='/') i++;
        while(i<len && A[i]!='/'){
            path+=A[i];
            i++;
        }
        if(path.compare("..")==0){
            if(!s.empty()) s.pop();
        }
        else if(path.compare(".")==0) continue;
        else if(path.size()!=0) s.push(path);
    }
    while(!s.empty()){
        rev.push(s.top());
        s.pop();
    }
    while(!rev.empty()){
        string temp=rev.top();
        if(rev.size()!=1){
            ans.append(temp+'/');
        } else {
            ans.append(temp);
        }
        rev.pop();
    }
    return ans;
}
