#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateMatches(const vector<string> &teams) {
    int n = teams.size();
    int matchNumber = 1;
    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            cout << "Match " << matchNumber << " : " << teams[i] << " vs " << teams[j] << endl;
            matchNumber++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of teams: ";
    cin >> n;
    
    vector<string> teams(n);
    
    cout << "Enter the names of the teams:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Team " << (i + 1) << ": ";
        cin >> teams[i];
    }
    
    cout << "Generating match fixtures..." << endl;
    generateMatches(teams);
    
    return 0;
}
