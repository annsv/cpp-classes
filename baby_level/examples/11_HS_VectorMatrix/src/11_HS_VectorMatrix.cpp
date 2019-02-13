/*
    Task: Write a program that
        1. initiates matrix by some integer negative and positive numbers
        2. finds max and min values in the matrix
        3. outputs results
*/

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
	vector<vector<int>> matr{{1,3,-5},{-8,-24,-5},{67,7,8}};

	for(size_t i=0;i<matr.size();++i){
		for(size_t j=0;j<matr.size();++j){
			cout<< matr[i][j]<< " ";
		}
		cout<< "\n";
	}

	int min = matr[0][0];
	int max = matr[0][0];

	for(size_t i=0;i<matr.size();++i){
		for(size_t j=0;j<matr.size();++j){
			if (min > matr[i][j]){
				min = matr[i][j];
			}
			if (max < matr[i][j]){
				max = matr[i][j];
			}
		}

	}
	cout<< "min = " << min<<endl;
	cout<< "max = " << max<<endl;


	return 0;
}
