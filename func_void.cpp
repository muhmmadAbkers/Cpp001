// Multiply two numbers and return the result
int both(int bb ,int ba){
    int s = bb;
    int b = ba;

    return s * b;
}

// Read two numbers from the user and display the result
void sytem(){
    int s, f;

    cout << "Choose first number: \n";
    cin >> s;

    cout << "Choose second number: \n";
    cin >> f;

    cout << "Result :: " << both(s,f) << endl;
}

// Store personal information
struct reInfo
{
    string email;
    string phone;
    int age;
};

// Read personal information from the user
void ReadAdre(reInfo &infos)
{
    cout << "Please enter your email:\n";
    cin >> infos.email;

    cout << "Please enter your phone number:\n";
    cin >> infos.phone;

    cout << "Please enter your age:\n";
    cin >> infos.age;
}

// Print personal information
void prentIn(reInfo info)
{
    cout << "**************************************\n";
    cout << "email : " << info.email << endl;
    cout << "phone : " << info.phone << endl;
    cout << "age   : " << info.age << endl;
    cout << "**************************************\n";
}

// Read integer values into an array
void ReadIntger(int index[4]){
    // Note: index[4] means array size should be at least 5
}

// Print all integer values from the array
void prentINTger(int index[4]){
}

// Calculate a value from array elements
int bigH(int index[3]){
    return (index[0] % index[1] + index[2] + index[3]) / 100;
}

// Store identity information
struct identity
{
    string FristName;
    string LastName;
    string phone;
    int age;
};

// Read identity information from user
void Gs(identity FileId[1])
{
}

// Display identity information
void Id(identity FileId[1])
{
}

int main()
{
    // Create array of identities
    identity FileId[2];

    // Read and display identity information
    Gs(FileId);
    Id(FileId);

    // Read and display integer array values
    int logs[4];
    ReadIntger(logs);
    prentINTger(logs);

    // Show calculated result
    cout << bigH(logs) << " integer byte\n";

    // Read and display personal information
    reInfo persnolty;
    ReadAdre(persnolty);
    prentIn(persnolty);

    return 0;
}