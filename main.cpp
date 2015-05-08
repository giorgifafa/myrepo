#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iomanip>

using namespace std;


struct node {
	int data;
	node* left;
	node* right;
};

struct node* newNode(int data) {
	struct node* newnode = new node;
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}


int main() {
	struct node* root = newNode(10);
	return 0;
}