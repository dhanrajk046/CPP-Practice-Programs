 /* 
 To solve the Circular Pattern Matching problem using the KMP (Knuth-Morris-Pratt) algorithm, the core idea is to transform the circular string problem into a standard linear string matching problem.
 
 A circular string can be conceptually "unrolled" by duplicating it. If we have a circular text $T$ of length $N$, any circular shift of $T$ will appear as a contiguous substring of length $N$ inside the doubled string $T + T$.
 
 Step-by-Step Approach
 1. Double the Text: Create a new string $T' = T + T$. This ensures that all possible circular rotations of $T$ are contained within $T'$ as normal substrings.
 2. Handle Pattern Length: If the length of the pattern $P$ is greater than the length of the text $T$ ($M > N$), it's impossible for $P$ to exist as a circular rotation, so we can return false/not found immediately.
 3. Apply KMP Algorithm: Run the standard KMP search algorithm to find occurrences of the pattern $P$ inside the doubled text $T'$.
 4. Validate the Match: If KMP finds a match starting at index $i$, it is a valid circular match as long as the match fits within a single rotation window (i.e., the starting index $i \le N$).
 */

#include<iostream>
#include<vector>
#include<string>

using namespace std;

// Function to compute the LPS (Longest Proper Prefix which is alse Suffix) array
vector<int> computeLPS(const string& pattern) {
    int m = pattern.length();
    vector<int> lps(m, 0);
    int length = 0;
    int i = 1;

    while(i < m)
    {
        if(pattern[i] == pattern[length])
        {
            length++;
            lps[i] = length;
            i++;
        }
        else
        {
            if(length != 0)
            {
                length = lps[length - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

// Function to check if any rotation of pattern exists in text
bool hasCircularMatch(const string& text, const string& pattern) 
{
    int n = text.length();
    int m = pattern.length();

    // If pattern is longer than text, a match is impossible
    if(m > n)
    {
        return false;
    }

    // Doubling the text allows us to check all circular substrings of length N/M efficiently
    string extendedText = text + text;
    vector<int> lps = computeLPS(pattern);

    int i = 0; // index for extendedText
    int j = 0; // index for pattern

    while(i < extendedText.length())
    {
        if(pattern[j] == extendedText[i])
        {
            i++;
            j++;
        }
        if(j == m)
        {
            return true; // Found a rotation of the pattern in the text
        }
        else if (i<extendedText.length() && pattern[j] != extendedText[i])
        {
            if(j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return false;
}


int main() {
    string text = "welcometocoding";
    string pattern = "metocod"; // Rotation of "codmeto" (sub-segment of text)

    if(hasCircularMatch(text,pattern)) 
    {
        cout<<"Match found! A rotation of the pattern exists int the text." <<endl;
    }
    else
    {
        cout<<"No match found."<<endl;
    }

    return 0;
}