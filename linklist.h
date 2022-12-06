struct NODE{
    struct NODE *PREV;
    struct NODE *NEXT;
    int DATA;
};

struct NODE* createNode();
int insertInFront(int data);
int insertAtEnd(int data);
int insertData(int data);
int deleteAtFront();
int deleteAtEnd();
int deleteNode();

struct NODE* searchNode();