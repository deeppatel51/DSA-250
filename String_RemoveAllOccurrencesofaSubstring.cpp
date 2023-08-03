class Solution {
public:
    bool checkNeeded(string& s, string& sub)
    {
        int i=0;
        int k = sub.length();
        while(i<s.length())
        {
            if(s.substr(i,k)==sub)
            {
                return true;
            }
            i++;
        }
        return false;
    }
    string removePart(string& s, string& sub)
    {
        int i=0;
        int k = sub.length();
        while(i<s.length())
        {
            if(s.substr(i,k)==sub)
            {
                s.erase(i,k);
                break;
            }
            i++;
        }
        return s;
    }
    string removeOccurrences(string s, string part) {
        while(checkNeeded(s , part))
        {
            removePart(s, part);
        }
        return s;
    }
};
