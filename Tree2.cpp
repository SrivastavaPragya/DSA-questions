// counting no of nodes using recursion

int NumNodes(TressNide<int>*root){
    int ans=1;
    for(int i=o;i<children.size;i++){
        ans+=NumNodes(root->children)
    }
    return ans;
}

