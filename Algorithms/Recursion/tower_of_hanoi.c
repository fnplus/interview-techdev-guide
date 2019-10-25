#include<stdio.h>


void tower_of_hanoi(int n, char from, char to, char temp) {
	if(n == 1) {
		printf("Move Disc 1: %c -> %c\n", from, to);
		return;
	}

	tower_of_hanoi(n-1, from, temp, to);
	printf("Move Disc %d: %c -> %c\n", n, from , to);
	tower_of_hanoi(n-1, temp, to , from);
}

int main() {
	int n;
	scanf("%d", &n);
	tower_of_hanoi(n, 'A', 'C', 'B');
	return 0;
}
