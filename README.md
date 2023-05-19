# Task #0: Single Linked List  
**course:** Programación III  
**unit:** 2  
**cmake project:** prog3_unit2_single_linked_list_v2023_1
## Instructions
Subir a gradescope el siguiente archivo:
- `single_linked_list.h`

## Question #1 (20 points)
  
Desarrollar la clase template `single_linked_list` que implemente una lista enlazada simple.

- Esta clase debera contar con un constructor que tomo como argumento un parámetro del tipo `initializer_list` que permite crear la lista con un conjunto de valores.
- Debera tener implementado el `copy` y `move` constructor y operador assignment, que permita realizar de forma segura la copia de un objeto `single_linked_list` a otro objeto del mismo tipo.
- Para evitar el uso del destructor debera de utilizarse puntero inteligente (`unique_ptr`, `shared_ptr` y `weak_ptr`) de modo que memoria dinámica que almacena el texto sea liberada.
- Implementar los métodos `push_front`, `pop_front`, `emplace_front`, `begin`, `end`
- Un forward iterator con la sobrecarga de sus operadores.
  
**Case Use #1:**
```cpp
utec::single_linked_list<int> sll;
sll.push_front(10);
sll.push_front(20);
sll.push_front(30);
sll.push_front(40);
sll.push_front(50);
cout << sll;
```


**Case Use #2:**
```cpp
utec::single_linked_list<double> sll = {10.5, 20.3, 30.2, 40.1, 50.4};
cout << sll;
```

**Case use #3:**
```cpp
utec::single_linked_list<int> sll = {10, 20, 30, 40, 50};
for (auto it = begin(sll); it != end(sll); 
	cout << *it;
```
**Case use #4:**
```cpp
utec::single_linked_list<int> sll = {10, 20, 30, 40, 50};
auto total = accumulate(begin(sll), end(sll), 0);
```

**Case use #5:**
```cpp
utec::single_linked_list<int> sll1 = {10, 20, 30, 40, 50};
auto sll2 = sll1;
for (auto& item: sll1)
    item *=10;
cout << sll1 << endl;
cout << sll2 << endl;
```

