
#include <vector>
#include <iostream>
#include <cassert>
#include <iterator>		// std::distance

#define DEBUG true

const int DIMENSION = 30;

using namespace std;

typedef vector<int> vInt;

class Map{
	private:
		vector<vInt> map;
	
	public:
		
		Map() :
			map({{3, 7, 5}, {3, 7, 5}, {3, 7, 5}})
		{
			
			
		}

		bool placeTower(int x, int y){
			cout << "Placing tower at (" << x << ", " << y << ")..."<< endl << endl;
			// check preconditions
			assert (x >= 0 and y >= 0);
			assert (x < map.size() and y < map.front().size());
			
			map[x][y] = 0;
			
			return true;
		}
		
		void display(){
			cout << "Displaying map:" << endl << endl;
			for(auto r : map){
				for(auto c : r)
					cout << c << " ";
				cout << endl;
			}
			
		}
};