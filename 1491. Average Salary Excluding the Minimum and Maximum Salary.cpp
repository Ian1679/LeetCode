class Solution {
public:
    double average(vector<int>& salary) {
        for (const auto &i : salary){
            sort(salary.begin(),salary.end());
        }
        salary.erase(salary.begin());
        salary.pop_back();
        return std::accumulate(salary.begin(),salary.end(),0.0) /salary.size();
    }
};
