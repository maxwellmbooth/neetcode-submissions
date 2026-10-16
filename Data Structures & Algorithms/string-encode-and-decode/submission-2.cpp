class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (string s : strs) {
            encoded.append(s).append("##%^#");
        }
        cout << encoded << endl;
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> res;
        size_t first = 0;
        size_t last = 0;
        size_t len = s.size();

        while (true) {
            last = s.find("##%^#", first);
            if (last < len) {
                cout << last << endl;
                string sub = s.substr(first, last-first);
                res.push_back(sub);
                first = last + 5;
            } else {
                break;
            }
        }

        return res;
    }
};
