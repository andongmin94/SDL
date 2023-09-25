#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i < 11; i++)
	{
		int N;
		cin >> N;
		char str1[10] = { 0, };
		scanf_s("%s", str1);
		char str2[1000] = { 0, };
		scanf_s("%s", str2);
		int cnt = 0;
		for (int j = 0; j < 1000; j++)
		{
			if (str1[0] == str2[j])
			{
				int k = 0;
				while (str1[k] != NULL)
				{
					if (str1[k] != str2[j + k])
						break;
					k++;
				}
				if (str1[k] == NULL)
					cnt++;
			}
		}
		cout << "#" << i << " " << cnt << endl;
	}
}