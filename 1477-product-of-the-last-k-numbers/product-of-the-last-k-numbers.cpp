class ProductOfNumbers {
public:
    vector<int> st;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        st.push_back(num);
    }
    
    int getProduct(int k) {
        int ans=1;
        //vector<int> temp;
        int i=0;
        while(k--){
            ans=ans*st[st.size()-1-i];
           // temp.push_back(st.top());
           // st.pop();
           i++;


        }
       // for(int i=0;i<temp.size();i++){
          //  st.push(temp.size()-i-1);
       // }
       // temp.empty();
        return ans;
        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */