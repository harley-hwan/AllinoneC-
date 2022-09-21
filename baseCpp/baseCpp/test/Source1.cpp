#include <iostream>
#include <string>

using namespace std;

int main()
{
	static string ClubTypes[] =
	{
		"1Wood",    "2Wood", "3Wood",    "4Wood",    "5Wood", "6Wood",    "7Wood",    "8Wood",  "9Wood",
		"2Hybrid",  "3Hybrid", "4Hybrid", "5Hybrid",
		"1Iron",    "2Iron", "3Iron",    "4Iron",    "5Iron", "6Iron",    "7Iron",    "8Iron",  "9Iron",
		"PitchingWedge", "GapWedge", "SandWedge",   "LobWedge", "Putter"
	};

	static string ClubTypesNum[] =
	{
		"W1", "W2", "W3", "W4", "W5", "W6", "W7", "W8", "W9",
		"H2", "H3", "H4", "H5",
		"I1", "I2", "I3", "I4", "I5", "I6", "I7", "I8", "I9",
		"D1", "D6", "D2", "D7", "P1"
	};

	for (int i = 0; i < (sizeof(ClubTypes) / sizeof(*ClubTypes)); i++)
	{
		//cout << ClubTypes[i] << "\t\t" << ClubTypesNum[i] << endl;
		string ClubType = ClubTypes[i];
		string* p;
		p = find(ClubTypes, ClubTypes + (sizeof(ClubTypes) / sizeof(*ClubTypes)), ClubType);

		cout << "value is " << *p << endl;
		cout << "index is " << p - ClubTypes << endl;
		cout << "ClubTypesNum is " << ClubTypesNum[p - ClubTypes] << endl << endl;
	}
}