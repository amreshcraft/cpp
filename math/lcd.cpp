
  int findLCM(int a, int b) {
    int limit = a * b;
    int smallest = a < b ? a : b;
    for (int i = smallest; i <= limit; i++) {
      if (i % a == 0 && i % b == 0)
        return i;
    }
    return limit;
  }
