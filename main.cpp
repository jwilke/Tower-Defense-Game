
#include "main.h"

// prototypes

int main(){
	cVector z (DIMENSION, '1');
	vector<cVector> y (DIMENSION, z);
	int map [DIMENSION][DIMENSION] = {{3, 7, 5}, {3, 7, 5}, {3, 7, 5}, {3, 7, 5}};
	Map m;
	
	
	cout << "y: " << y.size() << endl;
	cout << "y: " << y[0].size() << endl;
	
	
	cout << "map: " << (sizeof (map[0]) / sizeof (int)) << endl;
	cout << "*map: " << map[0][3] << endl;
	
	
	m.display();
	
	m.placeTower(1, 2);
	
	m.display();
	
	return 0;
}