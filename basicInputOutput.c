/* Program: Read different types of data from standard input, 
process them as shown in output format and print the answer to standard output.

Input format:
First line contains integer N.
Second line contains string S.

Output format:
First line should contain N x 2.
Second line should contain the same string S.

Constraints:
0 <= N <= 10
1 <= |S| <= 15
 where S length of string S
 */

#include <stdio.h>

int main(){
	int num;
	char str[15];
	scanf("%d", &num);              			// Reading input from STDIN
	printf("%d\n", num*2);       // Writing output to STDOUT
	scanf(" %s", str);
	printf("%s", str);
}
