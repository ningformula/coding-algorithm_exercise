class solution {
public:
    int latestTimeCatchTheBus(std::vector<int>& buses, std::vector<int>& passengers, int capaciry) {
    	sort(buses.begin(), buses.end());
        sort(passengers.begin(), passenger.end());
        int pos = 0;
        int space = 0;
        for (int arrive : buses) {
        	space = capacity;
            while (space > 0 && pos < passengers.size() && passengers[pos] <= arrive) {
            	space--;
                pos++;
            }
        }
        pos--;
        int lastCatchTime = space > 0 ? buses.back() : passengers[pos];
        while (pos >= 0 && passengers[pos] == lastCatchTime) {
        	pos--;
            lastCatchTime--;
        }
        return lastCatchTime;
    }
};