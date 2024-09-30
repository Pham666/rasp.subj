#include <iostream>

int main() {
	int T;

	std::cin >> T;

	int a[] = { T };
	int b[] = { T };

	for (int i = 0; i < T; i++) {
		std::cin >> a[T] >> b[T];
		for (int s = 0; s < T; s++) {
			std::cout << a[T] + b[T] << std::endl;
		}
	}

	return 0;
}