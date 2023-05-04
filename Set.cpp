#include "Set.h"
#include <iostream>

Set::Set()
    : set(new int[16]), size(0), capacity(16)
{
}

Set::Set(int *set, int size)
    : set(set), size(size)
{
    setSize(size);
    this->capacity = size * 2;
}

Set::Set(const Set &other)
{
    this->set = other.set;
    this->capacity = other.capacity;
    this->size = other.size;
}

Set &Set::operator=(const Set &other)
{
    if (this != &other)
    {
        delete[] set;
        this->capacity = other.capacity;
        this->size = other.size;
        this->set = other.set;
        // for (int i = 0; i < other.size; i++)
        // {
        //     set[i] = other.set[i];
        // }
    }

    return *this;
}

// move ctor
Set::Set(Set &&other)
{
    this->set = other.set;
    this->capacity = other.capacity;
    this->size = other.size;
    other.size = 0;
    other.capacity = 0;
    other.set = nullptr;
}

Set::~Set()
{
    destroy();
}

void Set::setSet(int *set)
{
    if (set != nullptr)
        this->set = set;
}

Set Set::operator+(const Set &rhSet) const
{
    Set newSet;
    newSet += *this;
    newSet += rhSet;
    return newSet;
}

Set Set::operator-(const Set &rhSet) const
{
}

Set &Set::operator+=(const Set &rhSet)
{
    int *temp = new int[this->size + rhSet.size];
    for (int i = 0; i < this->size; i++)
    {
        temp[i] = set[i];
    }

    int thisSizeCnt = this->size;
    int *rhSetArr = rhSet.getSet();
    for (int i = 0; i < rhSet.size; i++)
    {
        temp[thisSizeCnt] = rhSetArr[i];
        thisSizeCnt++;
    }

    delete[] this->set; // free previously allocated memory
    this->set = temp;
    this->size += rhSet.size;

    return *this;
}

Set &Set::operator-=(const Set &rhSet)
{
    // TODO: insert return statement here
}

int Set::operator[](const size_t check)
{
    return 0;
}

bool Set::operator>(const Set &set) const
{
    return false;
}

bool Set::operator==(const Set &rhSet) const
{
    return false;
}

void Set::print() const
{
    std::cout << "size " << this->size << std::endl;
    for (int i = 0; i < this->size; i++)
    {
        std::cout << set[i] << " ";
    }
}

int Set::getLength()
{
    int length = sizeof(set) / 4;
    return length;
}

void Set::setSize(int size)
{
    if (size < 0)
        size = 0;

    this->size = size;
}

void Set::setCapacity(int capacity)
{
    if (capacity < 0)
        capacity = 0;

    this->capacity = capacity;
}

int Set::calcSize()
{
    return 0;
}

void Set::resize()
{
    this->capacity = capacity * 2;
    int *newArr = new int[capacity];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = set[i];
    }

    delete[] set;
    set = newArr;
}

void Set::destroy()
{
    delete[] set;
}
