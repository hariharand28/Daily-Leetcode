class Solution {
public:
    double angleClock(int h, int m) {
        double an=abs((30.0*h)-(11.0*m/2.00));
        return min(an, abs(360.0-an));
    }
};