public int singleNumber(int[] A) {
    int one = 0, two = 0;
    for (int i = 0; i < A.length; i++) {
        int one_ = (one ^ A[i]) & ~two;
        int two_ = A[i] & one | ~A[i] & two;
        one = one_;
        two = two_;
    }
    return one;
}
