#include<iostream>

class Node{
	public:
		int value;
		Node* next;

		Node(int value){
			this->value = value;
			next = nullptr;
		}	

};

class LinkedList{
	private:
		Node* head;
		Node* tail;
		int length;
	
	public:
		LinkedList(int value){
			Node* newNode = new Node(value);
			this ->head = newNode;
			this->tail =newNode;
			this->length =1;
		}
		~LinkedList{
			Node* temp = head;
			while(head){
				temp = head->next;
			 	delete temp;
			
			}
		
		
		}
		void append(int value){
			Node* newNode = new Node(value);
			if(length == 0){
				this->head = newNode;
				this->tail = newNode;
			}else{
				tail->next = newNode;
				tail = newNode;
				length++;
			}

		}	void printList(){
			Node* temp = head;
			while(temp!=nullptr){
				std::cout << temp->value <<std::endl;
				temp = temp->next;
			}
		
		}
		
 


};
int main(){
	LinkedList* list = new LinkedList(4);
	list->append(6);
	list->printList();
	return 0;

}

