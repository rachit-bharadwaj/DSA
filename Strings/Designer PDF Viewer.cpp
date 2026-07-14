// Question: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

// Difficulty: Easy

int designerPdfViewer(vector<int> h, string word)
{
    int maxHeight = 0;

    for (char c : word)
    {
        maxHeight = max(maxHeight, h[c - 'a']);
    }

    return maxHeight * (int)word.size();
}
