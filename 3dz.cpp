#include "dz.3"

int main() {
	int n = 3;
	int** mas;
	mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[n];
	}
	randm(mas, n);
}
