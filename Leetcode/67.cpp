#include <string>

class Solution {
public:
	std::string addBinary(std::string a, std::string b) {
		std::string Result = "";
		int a_pos = a.size() - 1;
		int b_pos = b.size() - 1;
		int up = 0;


		while (a_pos >= 0 || b_pos >= 0 || up > 0)
		{
			if (a_pos >= 0) a[a_pos--] == '1' ? up++ : 0;
			if (b_pos >= 0) b[b_pos--] == '1' ? up++ : 0;
			Result = up % 2 == 1 ? "1" + Result : "0" + Result;
			up /= 2;
		}
		return Result;
	}
};