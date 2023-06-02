#include <iostream>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::string s;
	int table[26];
	int size(0), ans(0), i(-1);
	table[0] = 3;
	table[1] = 3;
	table[2] = 3; /*abc*/
	table[3] = 4;
	table[4] = 4;
	table[5] = 4; /*def*/
	table[6] = 5;
	table[7] = 5;
	table[8] = 5; /*ghi*/
	table[9] = 6;
	table[10] = 6;
	table[11] = 6; /*jkl*/
	table[12] = 7;
	table[13] = 7;
	table[14] = 7; /*mno*/
	table[15] = 8;
	table[16] = 8;
	table[17] = 8;
	table[18] = 8; /*pqrs*/
	table[19] = 9;
	table[20] = 9;
	table[21] = 9; /*tuv*/
	table[22] = 10;
	table[23] = 10;
	table[24] = 10;
	table[25] = 10; /*wxyz*/

	std::cin >> s;
	size = s.size();
	while (++i < size)
		ans += table[s[i] - 'A'];
	std::cout << ans;
	return (0);
}