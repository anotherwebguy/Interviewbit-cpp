int Solution::majorityElement(const vector<int> &A) {
    int majorityIndex = 0;
    for (int count = 1, i = 1; i<A.size(); ++i)
    {
        A[majorityIndex] == A[i] ? ++count : --count;
        if (count == 0)
        {
            majorityIndex = i;
            count = 1;
        }
    }
    return A[majorityIndex];
}
