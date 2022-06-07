#include <iostream>

using namespace std;

enum struct TextAttribute
{
	Bold = 1,
	Underline = 2,
	Italic = 4,
	Strikethrough = 8
};

enum class CircleAttribute
{
	Bold = 1
};

enum RectAttribute
{
	Bold = 1,
	Underline = 2
};

enum Color  : int64_t	/*±‚∫ª¿Ã 4byte*/
{
	Red = 10000000000
};

int main()
{
	int textAttrs = 0;
	//textAttrs |= Bold;
	//textAttrs |= Underline;

	textAttrs |= (int)TextAttribute::Bold;
	textAttrs |= (int)TextAttribute::Underline;
	
	cout << textAttrs << endl;
	
	if (textAttrs & (int)TextAttribute::Bold)
		cout << "Bold" << endl << endl;

	int sum = Bold + RectAttribute::Underline;
	cout << sum << endl;

	sum = (int)TextAttribute::Bold + (int)TextAttribute::Italic;
	cout << sum << endl;

	
	cout << Red << endl;
}