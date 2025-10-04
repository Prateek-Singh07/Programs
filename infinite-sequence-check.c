/*Problem Description:
Today is Darsh's birthday but I forgot to bring a gift for him. He is very angry with me. I have an idea for a gift. He likes coding very much. Why not give him a problem to solve as his gift?
Darsh likes everything infinite. Now he is studying the properties of a sequence s, such that its first element is equal to a (s1 = a), and the difference between any two neighbouring elements is equal to c (si - si - 1 = c). In particular, Darsh wonders if his favourite integer b appears in this sequence, that is, there exists a positive integer i, such that si = b. Of course, you are the person he asks for a help.
Constraints:
1≤ a, b, c ≤ 10^9
Input Format:
The first line of the input contain three integers a, b and c — the first element of the sequence, Darsh's favorite number and the difference between any two neighbouring elements of the sequence, respectively.
Output Format:
If b appears in the sequence s print "YES" (without quotes), otherwise print "NO" (without quotes).*/
#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(c==0){
		if(a==b){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}else if(c>0){
		if((b-a)%c==0 && b>=a){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}else{
		if((b-a)%c==0 && b<=a){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
