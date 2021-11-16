bool isPrime(long long x) {
	if (x <= 1) return false;
	for (long long i = 2; i*i <= x; i++)
		if (!(x % i)) return false;
	return true;
}