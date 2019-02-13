/*
    Task: Copy this example as template
        1. change init numbers by some positive and negative values
        2. remove transp_matrix
        3. add min_matrix function
        3. find minimum element in the matrix using this function
        4. output results
*/

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void out_matrix(vector< vector<int> > m)
{
	for(size_t i=0; i < m.size();++i){
		for(size_t j=0; j< m[i].size(); ++j){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}

//using of reference is mandatory here
int min_matrix(vector< vector<int> >& m)
{
	int min = m[0][0];

	for(size_t i=0;i<m.size();++i){
		for(size_t j=0;j<m.size();++j){
			if (min > m[i][j]){
				min = m[i][j];
			}
		}

	}
	cout<< "min = " << min<<endl;

	return 0;

}

int main() {

	vector< vector<int> > matrix { {11,-12,13}, {21,-22,23}, {-31,32,33} };

	cout << "matrix:" << endl;
	out_matrix(matrix);

	min_matrix(matrix);

	return 0;
}

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
