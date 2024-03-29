#include<bits/stdc++.h>
using namespace std;    

struct MinHeapNode{
    char data;
    int freq;
    MinHeapNode *left, *right;
    MinHeapNode(char data, int freq)
    {
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};

struct compare{
    bool operator()(MinHeapNode* l, MinHeapNode* r)
    {
        return (l->freq > r->freq);
    }
};

void HuffmanCode(char data[], int freq[], int size)
{
    MinHeapNode *left, *right, *top;
    priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> minHeap;
    for(int i = 0; i < size; ++i)
    minHeap.push(new MinHeapNode(data[i], freq[i]));
    while(minHeap.size() != 1){
        left = minHeap.top();
        minHeap.pop();
        right = minHeap.top();
        minHeap.pop();
        top = new MinHeapNode('$',left->freq + right->freq);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }
    
}

int main()
{
    char arr[] = {'a', 'c', 'g'};
    int freq[] = {21, 32, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    HuffmanCode(arr, freq, size);
    return 0;
}