class SnapshotArray {
public:
    vector<vector<pair<int, int>>> values;
    int snaps = 0;
    
    SnapshotArray(int length) {
        snaps = 0;
        values = vector<vector<pair<int, int>>>(length, vector<pair<int, int>>());
        for (int i = 0; i < length; i++) {
            values[i].push_back({0, 0});
            // values[index] = [{snap_id, value}]
        }
    }
    
    void set(int index, int val) {
        int len = (int) values[index].size();
        if (values[index][len - 1].first == snaps) {
            values[index][len - 1].second = val;
        } else {
            values[index].push_back({snaps, val});
        }
    }
    
    int snap() {
        return snaps++;
    }
    
    int get(int index, int snap_id) {
        int len = (int) values[index].size();
        int lo = 0, hi = len - 1, mid, answer;

        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if (values[index][mid].first == snap_id) {
                answer = values[index][mid].second;
                break;
            } else if (values[index][mid].first > snap_id) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
                answer = values[index][mid].second;
            }

        }

        return answer;
    }
};


/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */