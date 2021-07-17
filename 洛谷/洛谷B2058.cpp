#include <cstdio>
int main(int argc, char** argv) {
	int n, Gold, Silver, Bronze, Au = 0, Ag = 0, Cu = 0, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &Gold, &Silver, &Bronze);
		Au += Gold;
		Ag += Silver;
		Cu += Bronze;
		sum += Gold + Silver + Bronze;
	}
	printf("%d %d %d %d", Au, Ag, Cu, sum);
	return 0;
}