

#include <iostream>
using namespace std;

/* -------- Singly Linked List for Polynomial -------- */

struct SNode {
    int coeff;
    int exp;
    SNode* next;

    SNode(int c, int e) {
        coeff = c;
        exp = e;
        next = NULL;
    }
};

SNode* insertPoly(SNode* head, int c, int e) {
    SNode* newNode = new SNode(c, e);

    if (!head)
        return newNode;

    SNode* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

void displayPoly(SNode* head) {
    SNode* temp = head;

    while (temp) {
        cout << "(" << temp->coeff << "," << temp->exp << ")";
        if (temp->next) cout << " -> ";
        temp = temp->next;
    }
}

/* -------- Polynomial Addition -------- */

SNode* addPoly(SNode* p1, SNode* p2) {
    SNode* result = NULL;

    while (p1 && p2) {
        if (p1->exp == p2->exp) {
            result = insertPoly(result, p1->coeff + p2->coeff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->exp > p2->exp) {
            result = insertPoly(result, p1->coeff, p1->exp);
            p1 = p1->next;
        }
        else {
            result = insertPoly(result, p2->coeff, p2->exp);
            p2 = p2->next;
        }
    }

    while (p1) {
        result = insertPoly(result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2) {
        result = insertPoly(result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return result;
}

/* -------- Doubly Linked List for Multiplication -------- */

struct DNode {
    int coeff;
    int exp;
    DNode* prev;
    DNode* next;

    DNode(int c, int e) {
        coeff = c;
        exp = e;
        prev = NULL;
        next = NULL;
    }
};

DNode* insertDLL(DNode* head, int c, int e) {
    DNode* newNode = new DNode(c, e);

    if (!head)
        return newNode;

    DNode* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

/* -------- Polynomial Multiplication -------- */

DNode* multiplyPoly(SNode* p1, SNode* p2) {
    DNode* head = NULL;

    for (SNode* a = p1; a != NULL; a = a->next) {
        for (SNode* b = p2; b != NULL; b = b->next) {
            int c = a->coeff * b->coeff;
            int e = a->exp + b->exp;
            head = insertDLL(head, c, e);
        }
    }

    return head;
}

void displayDLL(DNode* head) {
    DNode* temp = head;

    while (temp) {
        cout << "(" << temp->coeff << "," << temp->exp << ")";
        if (temp->next) cout << " ⇄ ";
        temp = temp->next;
    }
}

/* -------- Reverse Doubly Linked List -------- */

DNode* reverseDLL(DNode* head) {
    DNode* curr = head;
    DNode* temp = NULL;

    while (curr) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    if (temp)
        head = temp->prev;

    return head;
}

/* -------- Circular Linked List -------- */

struct CNode {
    int coeff;
    int exp;
    CNode* next;

    CNode(int c, int e) {
        coeff = c;
        exp = e;
        next = NULL;
    }
};

CNode* convertToCircular(DNode* head) {
    if (!head) return NULL;

    CNode* chead = NULL;
    CNode* tail = NULL;

    DNode* temp = head;

    while (temp) {
        CNode* newNode = new CNode(temp->coeff, temp->exp);

        if (!chead) {
            chead = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }

        temp = temp->next;
    }

    tail->next = chead;
    return chead;
}

void displayCircular(CNode* head) {
    if (!head) return;

    CNode* temp = head;

    do {
        cout << "(" << temp->coeff << "," << temp->exp << ") -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to (" << head->coeff << "," << head->exp << "))";
}

/* -------- Main -------- */

int main() {

    SNode* p1 = NULL;
    SNode* p2 = NULL;

    int n1, n2;

    cout << "Enter number of terms in Polynomial P1: ";
    cin >> n1;

    cout << "Enter (coefficient exponent) for P1:\n";
    for (int i = 0; i < n1; i++) {
        int c,e;
        cin >> c >> e;
        p1 = insertPoly(p1,c,e);
    }

    cout << "Enter number of terms in Polynomial P2: ";
    cin >> n2;

    cout << "Enter (coefficient exponent) for P2:\n";
    for (int i = 0; i < n2; i++) {
        int c,e;
        cin >> c >> e;
        p2 = insertPoly(p2,c,e);
    }

    SNode* add = addPoly(p1,p2);

    cout << "\nAddition: ";
    displayPoly(add);

    DNode* mult = multiplyPoly(p1,p2);

    cout << "\nMultiplication: ";
    displayDLL(mult);

    mult = reverseDLL(mult);

    cout << "\nReversed DLL: ";
    displayDLL(mult);

    CNode* circ = convertToCircular(mult);

    cout << "\nCircular List: ";
    displayCircular(circ);

    return 0;
}