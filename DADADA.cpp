#include <iostream>
#include <vector>
#include <ctime>
using namespace std;


int main()
{
    vector<int> Inspector;
    srand(time(NULL));
    
    for (int i = 0; i < 15; i++){
        Inspector.push_back(rand()%100);
    };
   

    cout << "Size:" << Inspector.size() << endl;
    
    for (int i = 0; i < 15; i++){
        cout << endl <<  Inspector[i] << endl;
    };
    
    cout << "-------------------------------------" << endl ;
    cout << "Resize on X number:" << endl;
    int n;
    cin >> n;
    /////////////
    Inspector.resize(n);

    cout << "Size:" << Inspector.size() << endl;
    
    for (int i = 15; i < 15+n; i++) {
        Inspector.insert(15, n, rand() % 100);
    };

    for (int i = 0; i < 15+n; i++) {
        cout << endl << Inspector[i] << endl;
    };
    cout << endl << Inspector.size() << endl;
        return 0;
}