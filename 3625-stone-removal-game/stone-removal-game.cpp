class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10;
        bool ali = true;

        while (n >= remove) {
            n -= remove;
            remove--;
            ali = !ali;
        }

        return !ali;
    }
};