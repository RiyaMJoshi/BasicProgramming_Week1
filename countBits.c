/*

Problem: Given a number N, print the number of set bits in the binary representation of this number.

Input:
The first contains a single integer T denoting the number of test cases. Each test case contains a single integer N

Output:
For each test case, print a single integer denoting the number of set bits in the binary representation of the given N .

Constraints:

1 <= T <= 1000
1 <= N <= 1000

*/

include <stdio.h>

int main(){
	int t, n;
	scanf("%d", &t);
	//
	
	while(t > 0){
		scanf("%d", &n); 
		int count = 0;
		while(n){
			n = n & (n - 1);
			count++;
		}
		t--;
		printf("%d\n", count);
	}
	
}

