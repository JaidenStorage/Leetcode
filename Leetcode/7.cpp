class Solution {
public:
	int reverse(int x) {
		long result = 0;
		while (x <= -1 || 1 <= x)
		{
			result = result * 10 + (x % 10);
			x /= 10;
		}
		return result;
	}
};