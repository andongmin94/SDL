#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//const unsigned char opt0 = 1 << 0;
	//const unsigned char opt1 = 1 << 1;
	//const unsigned char opt2 = 1 << 2;
	//const unsigned char opt3 = 1 << 3;

	//cout << bitset<8>(opt0) << endl;
	//cout << bitset<8>(opt1) << endl;
	//cout << bitset<8>(opt2) << endl;
	//cout << bitset<8>(opt3) << endl;

	//unsigned char items_flag = 0;

	//cout << "No item : " << bitset<8>(items_flag) << endl;

	//// item0 on
	//items_flag |= opt0;
	//cout << "item0 obtained : " << bitset<8>(items_flag) << endl;

	//// item3 on
	//items_flag |= opt3;
	//cout << "item3 obtained : " << bitset<8>(items_flag) << endl;

	//// item4 lost
	//items_flag &= ~opt3;
	//cout << "item3 lost : " << bitset<8>(items_flag) << endl;

	//// has item1?
	//if (items_flag & opt1)
	//	cout << "Has item1" << endl;
	//else
	//	cout << "Not has item1" << endl;

	//// has item0?
	//if (items_flag & opt0)
	//	cout << "Has item0" << endl;
	//else
	//	cout << "Not has item0" << endl;

	//// obtain item2, 3
	//items_flag |= (opt2 | opt3);
	//cout << bitset<8>(opt2 | opt3) << endl;
	//cout << "item2, 3 obtained : " << bitset<8>(items_flag) << endl;

	//if ((items_flag & opt2) && !(items_flag & opt1))
	//{
	//	items_flag ^= opt2;
	//	items_flag ^= opt1;
	//}
	//cout << bitset<8>(items_flag) << endl;

	//// glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << bitset<32>(red_mask) << endl;
	cout << bitset<32>(green_mask) << endl;
	cout << bitset<32>(blue_mask) << endl;

	unsigned int pixel_color = 0xDAA520;
	cout << bitset<32>(pixel_color) << endl;
	unsigned int red = pixel_color & red_mask;
	unsigned int green = pixel_color & green_mask;
	unsigned int blue = pixel_color & blue_mask;

	cout << "red : " << bitset<8>(red >> 16) << " " << static_cast<int>(red) << endl;
	cout << "green : " << bitset<8>(green >> 8) << " " << static_cast<int>(green) << endl;
	cout << "blue : " << bitset<8>(blue) << " " << static_cast<int>(blue) << endl;
}