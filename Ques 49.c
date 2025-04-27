#include <stdio.h>
#include <stdbool.h>
bool is_prime(int n);
int main(){
	int i;
	for (i = 1; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

bool is_prime(int n) {
	int i;
    if (n < 2) {
        return false;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

