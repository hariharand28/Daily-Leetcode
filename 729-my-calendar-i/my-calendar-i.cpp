class MyCalendar {
public:
vector<pair<int,int>> vec;
    MyCalendar() { }
    
    bool book(int start, int end) {
        for(auto const& pair: vec){
            int st=pair.first;
            int en=pair.second;

            if(start<en && end>st )
                return false;
        }
        vec.push_back(make_pair(start, end));
    return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */