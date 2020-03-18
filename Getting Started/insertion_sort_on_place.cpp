#include <bits/stdc++.h>
using namespace std;

// INSERTION_SORT(A) pseudocode
// for j = 2 to A.length
// key = A[j]
// // Insert A[j] into the sorted sequence A[1..j-1],
// i = j - 1
// while i > 0 and A[i] > key
//     A[i + 1] = A[i]
//     i = i - 1
// A[i + 1] = ley

void print_vector(vector<int> &, int);
void insertion_sort(vector<int> &, int);

int main(){
    int n; // array size
    vector<int> A; // array to be sorted
    int temp;

    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string line;
    getline(cin, line);
    istringstream iss(line);

    while(iss >> temp){
        A.push_back(temp);
    }

    cout << "Before sorting" << endl;
    print_vector(A, n);
    cout << "After sorting" << endl;
    insertion_sort(A, n);
    print_vector(A, n);
    return 0;
}

void print_vector(vector<int> &A, int n){
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

void insertion_sort(vector<int> &A, int n){
    int key, i;
    for (int j = 1; j < n; j++){
        key = A[j];
        i = j - 1;
        while (i > -1 && A[i] > key){
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = key;
    }
}