class MyLinkedList {
public:

    struct Node {
        int val;
        Node* next;
        Node(int x) {
            val = x;
            next = NULL;
        }
    };

    Node* head;
    int size;

    MyLinkedList() {
        head = NULL;
        size = 0;
    }

    // Get value at index
    int get(int index) {
        if (index < 0 || index >= size) return -1;

        Node* temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }
        return temp->val;
    }

    // Add at head
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    // Add at tail
    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        size++;
    }

    // Add at index
    void addAtIndex(int index, int val) {
        if (index > size) return;

        if (index <= 0) {
            addAtHead(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }

    // Delete at index
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* temp = head;

            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }

            Node* delNode = temp->next;
            temp->next = temp->next->next;
            delete delNode;
        }

        size--;
    }
};
