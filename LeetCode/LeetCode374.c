/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n) {
	int left = 0, right = n;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (guess(mid) == 0) {
			return mid;
		}
		if (guess(mid) == -1) {
			right = mid - 1;
		}
		if (guess(mid) == 1) {
			left = mid + 1;
		}
	}
	return -1;
}