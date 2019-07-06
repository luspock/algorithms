class Solution { public:
    vector<int> constructRectangle(int area) {
        vector<int> results;
        int sqrt_area = sqrt(area);
        while(area%sqrt_area) --sqrt_area;
        results.push_back(area/sqrt_area);
        results.push_back(sqrt_area);
        return results;
    }
};
