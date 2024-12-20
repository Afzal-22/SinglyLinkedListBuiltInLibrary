template<typename T>
class Node{
	public:
		T data;
		Node* next;

		Node(T data){
			this->data = data;
			this->next = nullptr;
		}
};

//Using is alternative for typedef in c++
template<typename T>
using NodePtr = Node<T>* ;


template<typename T>
class Iterator{
	public:
		NodePtr<T> mPtr;
		Iterator(NodePtr<T> ptr){
			mPtr = ptr;
		}

		void operator++(int){
			if(mPtr!=nullptr){
				mPtr = mPtr->next;
			}
		}

		bool operator!=(Iterator a){
			return mPtr != a.mPtr;
		}

		T& operator*(){
			return mPtr->data;
		}
};


template<typename T>
class LinkedList{
	public:
		NodePtr<T> head = nullptr;

		bool isEmpty(){
			return head==nullptr;
		}

		Iterator<T> begin(){
			return Iterator<T>(head);
		}
		Iterator<T> end(){
			return Iterator<T>(nullptr);
		}

		void insertAtFirst(T data){
			if(isEmpty()){
				head = new Node<T>(data);
			}
			else{
				NodePtr<T> newNode = new Node<T>(data);
				newNode->next = head;
				head = newNode;
			}
		}

		void insertAtLast(T data){
			if(isEmpty()){
				insertAtFirst(data);
			}
			else{
				NodePtr<T> temp = head;
				while(temp->next!=nullptr){
					temp = temp->next;
				}
				NodePtr<T> newNode = new Node<T>(data);
				temp->next = newNode;
			}
		}

		void insertAt(int index, T data){
			if(index == 0){
				insertAtFirst(data);
			}
			NodePtr<T> temp = head;
			for(int i=1;i<index;i++){
				if(temp->next == nullptr){break;}
				temp = temp->next;
			}

			NodePtr<T> newNode = new Node<T>(data);
			newNode->next = temp->next;
			temp->next = newNode;
		}


		void deleteFirst(){
			if(isEmpty()){return;}
			NodePtr<T> temp = head;
			head = head->next;
			delete temp;
		}

		void deleteLast(){
			NodePtr<T> temp = head;
			if(isEmpty()){return;}
			else if(head->next == nullptr){
				deleteFirst();
				return;
			}
			else{
				while(temp->next->next!=nullptr){
					temp = temp->next;
				}
				delete temp->next;
				temp->next = nullptr;
			}
		}
int sizeoflist()
{
    int count=0;
    NodePtr<T> currptr = head;
    while(currptr!=nullptr)
    {

        currptr=currptr->next;
        count++;
    }
    return count;
}

void reverseList(){
    if(isEmpty()){return;}
    else{
    NodePtr<T> prevptr=nullptr;
    NodePtr<T> currptr=head;
    while(currptr!=nullptr)
    {
        NodePtr<T>  nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr = currptr;
        currptr=nextptr;
    }
   head=prevptr;

}
}
void clearElement()
{
       NodePtr<T> temp;
       while(head!=nullptr)
       {
           temp=head;
           head=head->next;
           delete temp;

       }
}

bool findData(T data) {
    NodePtr<T> currptr = head;
    while (currptr != nullptr) {

        if (currptr->data == data){

            return true;
        }

        currptr = currptr->next;
    }
    return false;
}
void sorting() {
    for (NodePtr<T> curr = head; curr != nullptr; curr = curr->next) {
        NodePtr<T> minNode = curr;
        for (NodePtr<T> temp = curr->next; temp != nullptr; temp = temp->next) {
            if (temp->data < minNode->data) {
                minNode = temp;
            }
        }
        if (minNode != curr) {
            T sortData = curr->data;
            curr->data = minNode->data;
            minNode->data = sortData;
        }
    }
}


void append(LinkedList<T>& aList) {
    if (aList.isEmpty()) {
        return;
    }
    if (isEmpty()) {
        head = aList.head;
        return;
    }
    NodePtr<T> temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = aList.head;
}

};
