#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// Custom comparator for sorting
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    // First sort by frequency in descending order
    if (a.second != b.second)
        return a.second > b.second;
    // If frequencies are the same, sort by the element value in ascending order
    return a.first < b.first;
}

void sortByFrequency(int arr[], int n) {
    // Map to store the frequency of each element
    map<int, int> frequency;

    // Calculate frequencies
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }

    // Vector to store elements and their frequencies
    vector<pair<int, int> > freqArr;
    for (map<int, int>::iterator it = frequency.begin(); it != frequency.end(); ++it) {
        freqArr.push_back(*it);
    }

    // Sort the vector using custom comparator
    sort(freqArr.begin(), freqArr.end(), compare);

    // Print sorted elements based on frequency
    for (vector<pair<int, int> >::iterator it = freqArr.begin(); it != freqArr.end(); ++it) {
        for (int i = 0; i < it->second; ++i) {
            cout << it->first << " ";
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sortByFrequency(arr, n);
        delete[] arr;
    }
    return 0;
}

