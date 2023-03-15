#include<stdio.h>
#define STOP '#'
int main(void)
{
	char c;
	printf("Enter some texts(# to quit): \n");
	while ((c = getchar()) != STOP) {
		printf("%2c:%-7d", c,c);
	}
	return 0;
}
/*Enter some texts(# to quit):
Wuhan university is very beatiful!#
 W:87      u:117     h:104     a:97      n:110      :32
 u:117     n:110     i:105     v:118     e:101     r:114     
 s:115     i:105     t:116     y:121      :32      i:105
 s:115      :32      v:118     e:101     r:114     y:121    
  :32      b:98      e:101     a:97      t:116     i:105    
 f:102     u:117     l:108     !:33
*/