/* PATTERN 1
void nForest(int n) {
	// Write your code here.
	for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

PATTERN 2

void nForest(int n) {
	// Write your code here.
	for(int i=0; i<n ; i++){
		for(int j=0; j<=i; j++){
			cout << "* ";
		}
		cout << endl;
	}
}

PATTERN 3

void nTriangle(int n){
	// Write your code here
	for(int i=0; i<n; i++){
          for (int j = 0; j <= i; j++) {
            cout << j+1 << " ";
          }
		  cout << endl;
        }
}

PATTERN 4

void triangle(int n) {
	// Write your code here
	for(int i=1; i<=n;i++){
		for(int j=1; j<=i; j++){
			cout << i << " ";
		}
		cout << endl;
	}
}

PATTERN 5

void seeding(int n) {
	// Write your code here.
	for(int i=1; i<=n; i++){
		for(int j=0; j< n-i+1; j++){
			cout <<"* ";
		}
		cout << endl;
	}
}

PATTERN 6 

void nNumberTriangle(int n) {
   // Write your code here.
	for(int i=1; i<=n; i++){
		for(int j=1; j<= n-i+1; j++){
			cout << j << " ";
		}
		cout << endl;
	}
}

PATTERN 7

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout << (" ");
        }
        //star
         for(int j=0; j<2*i+1; j++){
            cout << ("*");
        }
        //space
         for(int j=0; j<n-i-1; j++){
            cout << (" ");
        }

        cout << endl;
    }
}

PATTERN 8

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0; i < n; i++){
        //space
        for (int j = 0; j < i ;j++) {
          cout << " ";
        }
        //stars
        for (int j = 0; j < 2*n-2*i-1;j++) {
          cout << "*";
        }
        //space
        for (int j = 0; j < i ;j++) {
          cout << " ";
        }
        cout << endl;
    }
}

PATTERN 9



*/





#include<bits/stdc++.h>
using namespace std;
void print1(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print1(n);
}