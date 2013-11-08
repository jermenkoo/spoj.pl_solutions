#include <cstdlib>
#include <cstdio>

#define uint64_t long long unsigned

static const uint64_t iter = 2;

inline uint64_t mul(uint64_t a, uint64_t b, uint64_t c) {
	uint64_t x = 0;
	uint64_t y = a % c;
	while (b > 0) {
		if (b % 2) {
			x = (x + y) % c;
		}
		y = (y * 2) % c;
		b /= 2;
	}
	return x % c;
}

inline uint64_t mod(uint64_t a, uint64_t b, uint64_t c) {
	uint64_t x = 1;
	uint64_t y = a;
	while (b > 0) {
		if (b % 2) {
			x = mul(x, y, c);
		}
		y = mul(y, y, c);
		b /= 2;
	}
	return x % c;
}

inline bool Miller(uint64_t p, uint64_t k) {
	if (p < 2 || (p != 2 && !(p % 2))) return false;

	uint64_t s = p - 1;
	while (s % 2 == 0) s /= 2;

	for (uint64_t i = 0; i < k; i++) {
		uint64_t a = rand() % (p - 1) + 1;
		uint64_t tt = s;
		uint64_t md = mod(a, tt, p);
		while (tt != (p - 1) && md != 1 && md != (p - 1)) {
			md = mul(md, md, p);
			tt *= 2;
		}
		if (md != (p - 1) && !(tt % 2)) {
			return false;
		}
	}

	return true;
}

int main() {
	int N;
	scanf("%d", &N);
	while (N--) {
		uint64_t t;
		scanf("%llu", &t);
		printf("%s\n", (Miller(t, iter) ? "YES" : "NO"));
	}
}
