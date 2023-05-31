class UndergroundSystem {
public:
    struct User{
        string stationName;
        int time;
    };
    unordered_map<int, User> mp;
    // to map fromStation and toStation with pair of their sum and count
    unordered_map<string, unordered_map<string, pair<int, int>>> stns;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        User u;
        u.stationName = stationName;
        u.time = t;
        mp[id] = u;
    }
    
    void checkOut(int id, string stationName, int t) {
        string fromStation = mp[id].stationName;
        int fromTime = mp[id].time;
        auto it = stns.find(fromStation);
		// check if entry is to be added first time to avoid runtime errors
        if(it == stns.end()){
            unordered_map<string, pair<int, int>> tmp;
            tmp[stationName] = {t-fromTime, 1};
            stns.insert({fromStation, tmp});
        } else {
            it->second[stationName].first += t-fromTime;
            it->second[stationName].second ++;
        }
        // string from = it->second.find()->first;
    }
    
    double getAverageTime(string startStation, string endStation) {
        return stns[startStation][endStation].first / (double) stns[startStation][endStation].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */