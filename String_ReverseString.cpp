class Solution {
public:
    void reverseString(vector<char>& s) {
        int en = s.size()-1, st=0;
        while(st<=en)
        {
            swap(s[st++], s[en--]);
        }
    }
};
