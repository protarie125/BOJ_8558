#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ret = int{ 1 };
	for (int i = 1; i <= n; ++i) {
		ret *= i;
		ret %= 10;
	}

	cout << ret;

	return 0;
}