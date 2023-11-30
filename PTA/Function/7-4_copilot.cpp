#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;

int main() {
    // Get the target word.
    string target_word;
    cin >> target_word;
    transform(target_word.begin(), target_word.end(), target_word.begin(),
              ::tolower);

    cin.ignore();  // ignore the newline character after target_word

    // Get the target sentence.
    string target_sentence;
    getline(cin, target_sentence);

    // Split the sentence into words and record their positions.
    vector<string> words;
    vector<int> positions;
    string word;
    for (int i = 0; i < target_sentence.length(); i++) {
        if (target_sentence[i] != ' ') {
            word += target_sentence[i];
        } else {
            words.push_back(word);
            positions.push_back(i - word.length());
            word.clear();
        }
    }
    words.push_back(word);
    positions.push_back(target_sentence.length() - word.length());

    // Count the appearances of the target word.
    int word_appearance_count = 0;
    vector<int> word_appearance_positions;
    for (int i = 0; i < words.size(); i++) {
        string word = words[i];
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        if (word == target_word) {
            word_appearance_positions.push_back(positions[i]);
            word_appearance_count++;
        }
    }

    // Output
    if (word_appearance_count == 0)
        cout << "-1";
    else
        cout << word_appearance_count << " " << word_appearance_positions[0];

    return 0;
}