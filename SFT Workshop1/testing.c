#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/**
* Determine if the string s starts with the string prefix.
* @param s - the string to see if it starts with prefix
* @param prefix - the prefix to test
* @returns true if the strings begins with the prefix.
*/
int startsWith(const char s[], const char prefix[])
{
	char buf[20];
	int i, j;
	int sz = strlen(prefix);


	for (i = 0; i < sz; i++)
	{
		buf[i] = s[i];
	}
	if (sz > 20) 
	{
		buf[19] = '\0';
		//limit comparison of str length to buffer limit
	}
	else
	{
		buf[sz] = '\0';
	}
	

	if (sz != 0)
	{
		j = (0 == strcmp(buf, prefix)); //
	}
	else
	{
		j = (0 == 1); //return false
	}

	return j;
}
/**
* Determine if the string s ends with the string suffix.
* @param s - the string to see if it ends with suffix
* @param suffix - the suffix to test
* @returns true if the strings ends with the suffix.
*/
int endsWith(const char s[], const char suffix[])
{
	int j;
	int sz = strlen(suffix);
	int slen = strlen(s);

	if (sz != 0)
	{
		j = (0 == strcmp(s + slen - sz, suffix));
	}
	else
	{
		j = (0 == 1);
	}
	return j;
}
int main(void)
{
	/*   original code
	char s1[] = {"upended"};
	char prefix[] = { "up" };
	char suffix[] = { "ed" };
	printf("%s does %s start with %s\n",s1, startsWith(s1, prefix) ? "" : " not", prefix);
	printf("%s does %s end with %s\n",s1, endsWith(s1, suffix) ? "" : " not", suffix);
	
	*/

	//Testing starts
	

	char s2[] = { "testing" };
	char prefix[] = { "testings" };
	char suffix[] = { "testings" };
	printf("%s does %s start with %s\n", s2, startsWith(s2, prefix) ? "" : " not", prefix);
	printf("%s does %s end with %s\n",s2, endsWith(s2, suffix) ? "" : " not", suffix);
	

	//Testing ends

	return 0;
}