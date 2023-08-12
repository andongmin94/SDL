// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
//
// using namespace std;
//
// string number[10] = { "ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN" };
//
// int main()
// {
// 	int T;
// 	cin >> T;
// 	for (int i = 0; i < T; i++)
// 	{
// 		string s_tc, input;
// 		int tc;
// 		cin >> s_tc >> tc;
//
// 		int cnt[10] = { 0, };
// 		for (int j = 0; j < tc; j++)
// 		{
// 			cin >> input;
// 			if (input == "ZRO")
// 				cnt[0]++;
// 			else if (input == "ONE")
// 				cnt[1]++;
// 			else if (input == "TWO")
// 				cnt[2]++;
// 			else if (input == "THR")
// 				cnt[3]++;
// 			else if (input == "FOR")
// 				cnt[4]++;
// 			else if (input == "FIV")
// 				cnt[5]++;
// 			else if (input == "SIX")
// 				cnt[6]++;
// 			else if (input == "SVN")
// 				cnt[7]++;
// 			else if (input == "EGT")
// 				cnt[8]++;
// 			else if (input == "NIN")
// 				cnt[9]++;
// 		}
// 		cout << s_tc << endl;
// 		for (int k = 0; k < 10; k++)
// 		{
// 			if (cnt[k] != 0)
// 			{
// 				for (int l = 0; l < cnt[k]; l++)
// 					cout << number[k] << " ";
// 			}
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }