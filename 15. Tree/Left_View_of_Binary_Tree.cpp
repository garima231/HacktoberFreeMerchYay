void rec(Node *root,int l,vector<int>&ans){

  if(!root)return ;

  if(ans.size()==l)ans.push_back(root->data);

  rec(root->left,l+1,ans);

  rec(root->right,l+1,ans);

}

vector<int> leftView(Node *root)

{

     vector<int>ans;

     if(!root)return ans;

rec(root,0,ans);

return ans;

 

}
