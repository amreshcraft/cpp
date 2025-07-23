
  int findGCD(int a, int b) {
    int limit = a > b ? b : a;
    int hcf = 1;
    for (int i = 2; i <= limit; i++) {
      if (a % i == 0 && b % i == 0) {
        hcf = i;
      }
    }

    return hcf;
  }
