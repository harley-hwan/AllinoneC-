#include <iostream>
#include <numeric>

using namespace std;

int main() {
	uint32_t unum32 = numeric_limits<uint32_t>::max();
	uint32_t unum32_ = unum32 + 1;

	int32_t num32 = numeric_limits<int32_t>::min();
	int32_t num32_ = num32 - 1;

	cout << unum32 << endl;
	cout << unum32_ << endl;	// 0

	cout << num32 << endl;
	cout << num32_ << endl;	// 0
}