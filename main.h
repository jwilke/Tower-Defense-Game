#include <vector>
#include <iostream>
#include <algorithm>	// std::copy
#include <cassert>
#include <iterator>		// std::distance

#define DEBUG true

const int DIMENSION = 16;

using namespace std;

typedef vector<char> cVector;

class Map{
	private:
		vector<cVector> map;
	public:
		// constructor
		Map()
			//: map({{3, 7, 5}, {3, 7, 5}, {3, 7, 5}})
		{
			cVector r(DIMENSION, '-');
			map = vector<cVector>(DIMENSION, r);
			
			// create path
			int pathCol = DIMENSION / 2;
			for(auto& r : map)
				r[pathCol] = 'P';
		}
		
		void spawnWave(){
			
			;
		}
		
		/*
		Return true if successful.
		*/
		bool placeTower(int x, int y){
			cout << "Placing tower at (" << x << ", " << y << ")..."<< endl << endl;
			// check preconditions
			assert (x >= 0 and y >= 0);
			assert (x < map.size() and y < map.front().size());
			
			map[x][y] = 'T';
			
			//string amb = {"Anna Maria"};
			//copy(amb.begin(), amb.end(), map.front().begin());
			
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