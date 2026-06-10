#include <iostream>
using namespace std;

// Read numbers from the user
// Length is passed by reference so changes affect main()
void Reading(int Arr[100], int& Length){

    cout << "How many numbers do you want to enter? (1-100)\n";
    cin >> Length;

    // Store user numbers in the array
    for(int i = 0; i < Length; i++){
        cout << "Please enter number " << i + 1 << endl;
        cin >> Arr[i];
    }

    cout << "Input completed.\n";
}

// Print all numbers in the array
void Preinting(int Arr[100], int Length){

    for(int i = 0; i < Length; i++){
        cout << "Number [" << i + 1 << "] : " << Arr[i] << endl;
    }
}

// Calculate the sum of all array elements
int Calculater(int Arr[100], int Length){

    int Sum = 0;

    for(int i = 0; i < Length; i++){
        Sum += Arr[i];
    }

    return Sum;
}

// Calculate the average
// Cast to float to avoid integer division
float Calculatert_floats(int Arr[100], int Length){
    return (float)Calculater(Arr, Length) / Length;
}

int main()
{
    // Array to store numbers
    int Arr[100];

    // Number of elements entered by the user
    int Length = 0;

    // Read values
    Reading(Arr, Length);

    // Display values
    Preinting(Arr, Length);

    // Get total sum
    int Sum = Calculater(Arr, Length);

    cout << "\n*************************************\n";
    cout << "Sum = " << Sum << endl;

    // Print average as float
    cout << "Average = "
         << Calculatert_floats(Arr, Length)
         << endl;

    // Multiplication table
    for(int i = 1; i < 10; i++){
        cout << "i = " << i << endl;
        cout << "**********************************\n";

        for(int j = 1; j < 10; j++){
            cout << i << " * " << j << " = " << i * j << "\n";
        }

        cout << "**********************************\n";
    }

    // Print a simple star pattern
    for(int r = 1; r <= 20; r++){

        for(int e = 0; e < r; e++){
            cout << "*";

            for(int w = 1; w < r; w++){
                cout << "  ";
            }
        }

        cout << "\n";
    }

    return 0;
}