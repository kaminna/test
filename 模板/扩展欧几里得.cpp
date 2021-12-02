void Exgcd(long long a, long long b, long long &x, long long &y) {
    if (!b) {
        x = 1;
        y = 0;
        return;
    }
    else {
        Exgcd(b, a % b, y, x);
        y -= a / b * x;
        return;
    }
}