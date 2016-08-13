#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, j, max_p, max_sol = 1;
	int primitive_sums [35] = {12,30,40,56,70,84,90,126,132,144,154,176,182,198,208,234,220,260,240,286,330,306,312,340,374,408,390,380,418,442,456,420,476,494,462};
	int perimeter_values[1000] = {0};

	for (i = 0; i < 35; i++) {
		for (j = 1; primitive_sums[i]*j <= 1000; j++) {
			perimeter_values[(primitive_sums[i]*j)-1]++;
		}
	}	

	for (i = 0; i < 1000; i++) {
		if (perimeter_values[i] > max_sol) {
			max_sol = perimeter_values[i];
			max_p = i+1;
		}
	}

	printf("For p <= 1000, p = %d has maximum number of Pythagorean triples, w/ %d\n",max_p,max_sol);

	return 0;
}
