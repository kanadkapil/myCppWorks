#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <fstream> // For file operations

using namespace std;

void generateRandomMatches(const vector<string> &teams, ofstream &outFile) {
    vector<string> allMatches;
    int n = teams.size();
    
    // Generate all possible matches
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            allMatches.push_back(teams[i] + " vs " + teams[j]);
        }
    }
    
    // Shuffle matches to randomize
    random_device rd;
    mt19937 g(rd());
    shuffle(allMatches.begin(), allMatches.end(), g);
    
    // Output matches in sequential order with randomized content
    int matchNumber = 1;
    for (const auto &match : allMatches) {
        cout << "Match " << matchNumber << " : " << match << endl;
        outFile << "Match " << matchNumber << " : " << match << endl;
        matchNumber++;
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
    
    // Open file for writing
    ofstream outFile("Fixture.txt");
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }
    
    cout << "Generating randomized match fixtures..." << endl;
    generateRandomMatches(teams, outFile);
    
    // Close file
    outFile.close();
    
    return 0;
}
