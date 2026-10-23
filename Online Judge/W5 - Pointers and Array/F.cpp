#include<stdio.h>
#include<string.h>
int main(){
	int t, a;
	char s[100005];
	scanf("%d", &t);
	for(int i=1 ; i<=t ; i++){
		int memo[26] = {0};
		int distinct = 0;
		scanf("%s", &s);
		a = strlen(s);
		for(int j=0 ; j<a ; j++);
			int index;
			index = s[j] - 97; //'a'
			if(memo[index]==0){
			memo[index]++;
			distinct++;
			}
		if (distinct % 2 == 0) {
            printf("Case #%d: Yay\n", i);
        } else {
            printf("Case #%d: Ewwww\n", i);
        }
	}
	return 0;
}
