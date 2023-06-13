/* 문자열 폭발 */

#include <iostream>

int main(void){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::string str1, str2, ans("");
	std::cin >> str1 >> str2;

	for(size_t i = 0; i < str1.size(); ++i){
		ans.push_back(str1[i]);
		if(ans.size() >= str2.size() && ans.substr(ans.size() - str2.size(), str2.size()) == str2){
			ans.erase(ans.size() - str2.size(), str2.size());
		}
	}
	std::cout << (ans.empty() ? "FRULA" : ans);
	return(0);
}