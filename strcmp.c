#include <stdio.h>
#include <string.h>

int main(){
	printf("meme vs. meme: %d\n",strcmp("meme","meme"));
	printf("meme vs. maim: %d\n",strcmp("meme","maim"));
	printf("ma'am vs. meme: %d\n",strcmp("ma'am","meme"));
	printf("mem vs. meme: %d\n",strcmp("mem","meme"));
	printf("meme vs. me: %d\n",strcmp("meme","me"));
	printf("meme vs. \"\": %d\n",strcmp("meme",""));
	printf("m3m3 vs. meme: %d\n",strcmp("m3m3","meme"));
	printf("meme vs. m33m: %d\n",strcmp("meme","m33m"));
	printf("Meme vs. meme: %d\n",strcmp("Meme","meme"));
	printf("(meme) vs. meme: %d\n",strcmp("(meme)","meme"));
	printf("meme vs. meme, 4 chars: %d\n",strncmp("meme","meme",4));
	printf("mem vs. meme, 3 chars: %d\n",strncmp("mem","meme",3));
	printf("mem vs. meme, 4 chars: %d\n",strncmp("mem","meme",4));
	printf("meme vs. meme, 5 chars: %d\n",strncmp("meme","meme",5));

	return 0;
}
