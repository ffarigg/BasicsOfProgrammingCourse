#ifndef LAB_14_VECTOR_H
#define LAB_14_VECTOR_H
#include <stdio.h>
#include <malloc.h>
#include <stdint.h>
#include <assert.h>
#include <memory.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct vector {
    int *data ; // указатель на элементы вектора
    size_t size ; // размер вектора
    size_t capacity ; // вместимость вектора
} vector ;
//возвращает структуру-дескриптор вектор из n значений
vector createVector(size_t n);
//изменяет количество памяти, выделенное под хранение элементов вектора
void reserve(vector *v, size_t newCapacity);
//удаляет элементы из контейнера, но не освобождает выделенную память
void clear(vector *v);
//освобождает память, выделенную под неиспользуемые элементы
void shrinkToFit(vector *v);
//освобождает память, выделенную вектору
bool isEmpty(vector *v);
//проверяет является ли вектор полным
bool isFull(vector *v);
//возвращает i-ый элемент вектора
int getVectorValue(vector *v, size_t i);
//добавляет элемент x в конец вектора
void pushBack(vector *v, int x);
//удаляет последний элемент из вектора
void popBack(vector *v);
#endif //LAB_14_VECTOR_H