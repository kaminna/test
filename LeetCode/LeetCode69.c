int mySqrt(int x) {
	//二分
	if (x <= 1) {
		return x;
	}
	int left = 0, right = x - 1;
	while (left <= right) {
		long long mid = left + (right - left) / 2;
		if (mid*mid <= x && (mid + 1)*(mid + 1) > x) {
			return mid;
		}
		if (mid*mid < x) {
			left = mid + 1;
		}
		if (mid*mid > x) {
			right = mid - 1;
		}
	}
	//牛顿迭代法
	/*
			if (x == 0) {
			return 0;
		}

		double C = x, x0 = x;
		while (true) {
			double xi = 0.5 * (x0 + C / x0);
			if (fabs(x0 - xi) < 1e-7) {
				break;
			}
			x0 = xi;
		}
		return int(x0);
	*/
	return -1;
}