//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_SINGLE_LINKED_LIST_V2023_1_SINGLE_LINKED_LIST_H
#define PROG3_UNIT2_SINGLE_LINKED_LIST_V2023_1_SINGLE_LINKED_LIST_H

template <typename T>
struct node {
    T data {}; // int x {}; string y {};
    node<T>* next {};
};

template<typename T>
struct single_linked_list {

    struct sll_iterator {
        node<T> *current{};

        // Construct
        explicit sll_iterator(node<T> *current) : current(current) {}

        // Sobrecarga de operadores ( ==, !=, *, ->, ++)
        bool operator==(const sll_iterator &other) {
            return this->current == other.current;
        }

        bool operator!=(const sll_iterator &other) {
            return this->current != other.current;
        }

        T operator*() const { return current->data; }

        T *operator->() const { return &(current->data); }

        sll_iterator &operator++() {
            current = current->next;
            return *this;
        }
//        sll_iterator& operator++(int) {
//            return *this;
//        }
    };

    single_linked_list() = default;
    single_linked_list(std::initializer_list<T> il) {

    }
    void push_front(T value) {
        head = new node<T>(value, head);
    }

    template <typename ...TParams>
    void emplace_front(TParams... params) {
        head = new node<T>(T(params...), head);
    }



    void pop_front() {
        // 1. Crear variable temporal que apunte al siguiente
        auto temp = head->next;
        // 2. Eliminar el valor de head
        delete head;
        // 3. asignar el siguiente al head
        head = temp;
    }
    sll_iterator begin() { return sll_iterator(head); }
    sll_iterator end() { return sll_iterator(); }


private:
    node<T>* head;


};

#endif //PROG3_UNIT2_SINGLE_LINKED_LIST_V2023_1_SINGLE_LINKED_LIST_H
