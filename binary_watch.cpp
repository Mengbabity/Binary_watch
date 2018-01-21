class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> times;

		for (int h = 0; h < 12; h++)
			for (int m = 0; m < 60; m++)
				if (bitset<10>(h*64+m).count() == num)
					times.emplace_back(to_string(h) + (m < 10 ? ":0" : ":") + to_string(m));
        
        return times;
    }
};
