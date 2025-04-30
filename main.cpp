#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Trie node definition
class TrieNode {
public:
    bool isEndOfWord;
    TrieNode* children[26];

    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

// Trie class
class Trie {
private:
    TrieNode* root;

    // Helper function to recursively find all words with given prefix
    void dfs(TrieNode* node, string prefix, vector<string>& results) {
        if (node->isEndOfWord) {
            results.push_back(prefix);
        }
        for (int i = 0; i < 26; i++) {
            if (node->children[i]) {
                char nextChar = 'a' + i;
                dfs(node->children[i], prefix + nextChar, results);
            }
        }
    }

public:
    Trie() {
        root = new TrieNode();
    }

    // Insert a word into the trie
    void insert(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (!isalpha(ch)) continue; // Skip non-alphabetic characters
            ch = tolower(ch);
            int index = ch - 'a';
            if (!node->children[index])
                node->children[index] = new TrieNode();
            node = node->children[index];
        }
        node->isEndOfWord = true;
    }

    // Get suggestions for a prefix
    vector<string> getSuggestions(string prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            if (!isalpha(ch)) return {}; // invalid input
            ch = tolower(ch);
            int index = ch - 'a';
            if (!node->children[index])
                return {};
            node = node->children[index];
        }

        vector<string> suggestions;
        dfs(node, prefix, suggestions);
        sort(suggestions.begin(), suggestions.end());
        return suggestions;
    }
};

int main() {
    Trie trie;

    // Load dictionary
    ifstream file("dictionary.txt");
    if (!file.is_open()) {
        cerr << "Error: Could not open dictionary.txt\n";
        return 1;
    }

    string word;
    int wordCount = 0;
    while (getline(file, word)) {
        if (!word.empty()) {
            trie.insert(word);
            wordCount++;
        }
    }
    file.close();

    cout << "✅ Loaded " << wordCount << " words into the Trie.\n";

    while (true) {
        string input;
        cout << "\nEnter a prefix to search (or type 'exit' to quit): ";
        cin >> input;

        if (input == "exit") break;

        vector<string> suggestions = trie.getSuggestions(input);

        if (suggestions.empty()) {
            cout << "No suggestions found.\n";
        } else {
            cout << "Suggestions:\n";
            for (const string& suggestion : suggestions) {
                cout << " - " << suggestion << '\n';
            }
        }
    }

    return 0;
}
