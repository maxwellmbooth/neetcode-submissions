class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (i > 0 && s[i] == 'V' && s[i-1] == 'I') {
                sum += 3;
            } else if (i > 0 && s[i] == 'X' && s[i-1] == 'I') {
                sum += 8;
            } else if (i > 0 && s[i] == 'L' && s[i-1] == 'X') {
                sum += 30;
            } else if (i > 0 && s[i] == 'C' && s[i-1] == 'X') {
                sum += 80;
            } else if (i > 0 && s[i] == 'D' && s[i-1] == 'C') {
                sum += 300;
            } else if (i > 0 && s[i] == 'M' && s[i-1] == 'C') {
                sum += 800;
            } else {
                if (s[i] == 'I') sum += 1;
                else if (s[i] == 'V') sum += 5;
                else if (s[i] == 'X') sum += 10;
                else if (s[i] == 'L') sum += 50;
                else if (s[i] == 'C') sum += 100;
                else if (s[i] == 'D') sum += 500;
                else if (s[i] == 'M') sum += 1000;
            }
        }

        return sum;
    }
};