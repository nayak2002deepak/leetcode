class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        return "1";
        string say=countAndSay( n-1);
        int t=say.size();
        int i=0;
        string result="";
        while(i<t){
            char ch=say[i];
            int count=1;
            while(i<t && say[i]==say[i+1]){
                count++;
                i++;
            }
            result +=to_string(count)+string(1,ch);
            i++;

        }
        return result;
    }
};