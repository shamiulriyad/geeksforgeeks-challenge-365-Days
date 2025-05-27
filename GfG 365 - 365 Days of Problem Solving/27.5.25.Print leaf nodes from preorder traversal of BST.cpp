
class Solution {
  public:
    vector<int> leafNodes(vector<int>& preorder) {
        // code here
        stack <int> st;
        int n=preorder.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int temp =-1;
            int cont=0;
            if((!st.empty())&&(st.top()<preorder[i])){
            temp=st.top();
        }
        while((!st.empty())&&(st.top()<preorder[i])){
            cont++;
            st.pop();
        }
        if(cont>=2){
            ans.push_back(temp);
        }
        st.push(preorder[i]);
        }
        if(!st.empty()){
            ans.push_back(st.top());
        }
        return ans;
        
        
        
    }
};