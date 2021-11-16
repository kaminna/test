#define MOD 1000000007
long long fastPower(long long base, long long power) {
    long long result = 1;
    while (power > 0) {
        if (power & 1) result = result * base % MOD;
        power >>= 1;
        base = base * base % MOD;
    }
    return result;
}