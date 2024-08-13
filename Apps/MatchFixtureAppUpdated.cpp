#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>

using namespace std;

void generateRandomMatches(const vector<string> &teams) {
    vector<string> allMatches;
    int n = teams.size();
    int matchNumber = 1;
    
    // Generate all possible matches
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            allMatches.push_back("Match " + to_string(matchNumber) + " : " + teams[i] + " vs " + teams[j]);
            matchNumber++;
        }
    }
    
    // Shuffle matches to randomize
    random_device rd;
    mt19937 g(rd());
    shuffle(allMatches.begin(), allMatches.end(), g);
    
    // Output randomized matches
    for (const auto &match : allMatches) {
        cout << match << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of teams: ";
    cin >> n;
    
    if (n < 2) {
        cout << "Number of teams should be at least 2." << endl;
        return 1;
    }
    
    vector<string> teams(n);
    
    cout << "Enter the names of the teams:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Team " << (i + 1) << ": ";
        cin >> teams[i];
    }
    
    cout << "Generating randomized match fixtures..." << endl;
    generateRandomMatches(teams);
    
    return 0;
}
