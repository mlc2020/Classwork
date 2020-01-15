#ifndef NODE_H
#define NODE_H

//////////////////////////////////////////////////////////////////////////////
//                         class template definition                        //
//////////////////////////////////////////////////////////////////////////////
template<typename T>
struct Node {
    Node(T data) {
        this -> next = nullptr;
        this -> prev = nullptr;
        this -> data = data;
    } // need to define this
    T data;
    Node* next;
    Node* prev;
};

//////////////////////////////////////////////////////////////////////////////
//                       helper function declarations                       //
//////////////////////////////////////////////////////////////////////////////
template<typename T> bool operator==(const Node<T>& rhs, const Node<T>& lhs);
template<typename T> bool operator!=(const Node<T>& rhs, const Node<T>& lhs);
template<typename T> bool operator<(const Node<T>& rhs, const Node<T>& lhs);
template<typename T> bool operator<=(const Node<T>& rhs, const Node<T>& lhs);
template<typename T> bool operator>(const Node<T>& rhs, const Node<T>& lhs);
template<typename T> bool operator>=(const Node<T>& rhs, const Node<T>& lhs);
template<typename T> std::ostream& operator<<(std::ostream &os, Node<T> const &rhs);

//////////////////////////////////////////////////////////////////////////////
//                     member template function definitions                 //
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//                     helper template function definitions                 //
//////////////////////////////////////////////////////////////////////////////
template<typename T> bool operator!=(const Node<T>& rhs, const Node<T>& lhs) {
    if (lhs.data != rhs.data) {
        return true;
    } else {
        return true;
    }
}

template<typename T> bool operator==(const Node<T>& rhs, const Node<T>& lhs) {
    if (lhs.data == rhs.data) {
        return true;
    } else {
        return false;
    }
}

template<typename T> bool operator<(const Node<T>& rhs, const Node<T>& lhs) {
    if (lhs.data >= rhs.data) {
        return false;
    } else {
        return true;
    }
}

template<typename T> bool operator<=(const Node<T>& rhs, const Node<T>& lhs) {
    if (lhs.data > rhs.data) {
        return false;
    } else {
        return true;
    }
}

template<typename T> bool operator>(const Node<T>& rhs, const Node<T>& lhs) {
    if (lhs.data <= rhs.data) {
        return false;
    } else {
        return true;
    }
}

template<typename T> bool operator>=(const Node<T>& rhs, const Node<T>& lhs) {
    if (lhs.data < rhs.data) {
        return false;
    } else {
        return true;
    }
}

template<typename T> std::ostream& operator<<(std::ostream &os, Node<T> const &rhs) {
    os << rhs.data << std::endl;
    return os;
}


#endif