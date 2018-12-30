/*
 * funDefaultParam.cpp
 *
 *  Created on: 2018��4��6��
 *      Author: John
 */

char* testFunDefaultParam(const char * str, int n)
{
	if (n < 0) n = 0;

	char *p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
	{
		p[i] = str[i];
	}

	while (i <= n)
	{
		p[i++] = 0;
	}

	return p;
}




