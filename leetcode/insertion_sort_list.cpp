#include <bits/stdc++.h>
using namespace std;

// Auxiliary code
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

 ListNode* insert(int data, ListNode * head){
    if(head == NULL){
        head = new ListNode(data);
    } else{
        ListNode* temp = head;
        while(temp -> next != NULL)
            temp = temp -> next;
        temp -> next = new ListNode(data);
    }
    return head;
 }

 void display(ListNode* ptr){ 
    while(ptr != NULL){ 
        cout << ptr -> val << " "; 
        ptr = ptr -> next; 
    }
    cout << endl;
}

// Solution for the leetcode problem https://leetcode.com/problems/insertion-sort-list/
class Solution{
    public:
        ListNode* insertionSortList(ListNode* head){
            // Resulting list
            ListNode* temp = new ListNode(0);
            while (head) {
                // The next value to evalueate from the original list in the next iteration
                ListNode* current = head -> next;
                // We star from the beggining of the resulting list after each iteration
                ListNode* first = temp;
                // While we have values in the resulting list and they are sorted we move forward
                while (first -> next && first -> next -> val < head -> val)
                    first = first -> next;
                // Otherwise we open up a space between the smalles value so far and the value
                // that is not yet sorted
                head -> next = first -> next;
                // The current evaluated value in the original list goes into the space
                // because is certainly smaller than the current tail giving the second condition of the while
                first -> next = head;
                // Consider the next unseen value (delete the previous evaluated value from the original list)
                head = current;
            }
            return temp -> next;
        }
};


int main(){
    ListNode * head = NULL;
    int temp;
    
    string line;
    getline(cin, line);
    istringstream iss(line);
    while(iss >> temp){
        head = insert(temp, head);
    }
    cout << "Input: ";
    display(head);
    Solution sol = Solution();
    head = sol.insertionSortList(head);
    cout << "Output: ";
    display(head);
    return 0;
}