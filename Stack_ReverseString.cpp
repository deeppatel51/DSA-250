class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        int a=s.size();
        int b =0;
        while(b<a)
        {
            st.push(s[b]);
            b++;
        }
        b=0;
        while(b<a)
        {
            s[b]=st.top();
            b++;
            st.pop();
        }
    }
};
