#include <iostream>
#include <fstream>
using namespace std;


void loadImage(int ** Ary, int r, int c, ifstream& inputFile, ofstream& logFile){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            inputFile >> Ary[i][j];
        }
    }
}

void displayImage(int **Ary, int r, int c, ofstream& logFile){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c + 2; j++){
            cout << Ary[i][j] << " ";
        }
        cout << endl;
    }
}

void displayImage(int*Ary, int l, ofstream& logFile){
    for(int i = 0; i < l; i++){
        cout <<  Ary[i] << " ";
    }
    cout << endl;
}

int main(int argc, char** argv){

    if(argc != 3){
        cout << "Not the right amount of inputs" << endl;
        exit(1);
    }

    ifstream inFile = ifstream(argv[1]);
    ofstream logFile = ofstream(argv[2]);

    int numRows = 0; 
    int numCols = 0; 
    int minVal = 0; 
    int maxVal = 0; 

    inFile >> numRows;
    inFile >> numCols;
    inFile >> minVal;
    inFile >> maxVal;

    cout << "Number Rows: " << numRows << endl;
    cout << "Number Cols: " << numCols << endl;
    cout << "Min Value: " << minVal << endl;
    cout << "Max Value: " << maxVal << endl;


    int ** Ary  = new int*[numRows];
    for(int i = 0; i < numRows; i++){
        Ary[i] = new int[numCols]{0};
    }


    loadImage(Ary, numRows, numCols, inFile, logFile);
    cout << "Display input image" << endl;
    displayImage(Ary, numRows, numCols, logFile);

    // Projection Profile Method 

    int * HPP = new int[numRows]{0};
    int * VPP = new int[numCols]{0};
    
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            HPP[i] = Ary[i][j];
            VPP[j] = Ary[i][j];
        }
    }

    cout << "\nDisplay HPP " << endl;
    displayImage(HPP, numRows, logFile);
    cout << "\nDisplay VPP " << endl;
    displayImage(VPP, numCols, logFile);


    return 0;
}