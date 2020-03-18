#include <stdio.h>

int main() {
	float A0 = 2.8, An, Anm1 = A0, B0 = 0, Bn, Bnm1 = B0, C0 = 0, Cn, Cnm1 = C0, BMax;
	int n = 0;

	printf("%d %f %f %f\n", n, A0, B0, C0);

	while(n < 9) {
		An = 0.7 * (Anm1);
		Bn = (0.9 * (Bnm1)) + (0.3 * (Anm1));
		Cn = (Cnm1) + (0.1 * (Bnm1));
		Anm1 = An;
		Bnm1 = Bn;
		Cnm1 = Cn;
		n++;
		printf("%d %f %f %f\n", n, An, Bn, Cn);

	}

    while((n < 9) && Bn < 16777215) {
        Bn = BMax;
        printf("%f\n", BMax);
    }

	return 0;
}
