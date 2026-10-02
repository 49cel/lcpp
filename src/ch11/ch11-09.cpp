#include <iostream>

template <int N>
constexpr int factorial() {
	static_assert(N >= 0);

	int product{1};

	for (int i{2}; i < N; i++) {
		product *= i;
	}

	return product;
}

int main() {
	static_assert(factorial<0>() == 1);
	static_assert(factorial<3>() == 6);
	static_assert(factorial<5>() == 120);

	return 0;
}

// solution for the quiz in ch 11.9 on lcpp
