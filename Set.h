#pragma once
class Set
{
public:
    Set();
    Set(const Set &other);
    Set &operator=(const Set &other);
    Set(Set &&other);
    Set &operator=(Set &&other);
    ~Set();

    void setRange(int start, int end);

    int const *getSet() const { return set; }
    int getSize() const { return size; }
    unsigned getCapacity() const { return capacity; }

    void setSet(int *set);

    Set operator+(const Set &rhSet) const;
    Set operator-(const Set &rhSet) const;
    Set &operator+=(const Set &rhSet); // return this at the end
    Set &operator-=(const Set &rhSet); // this divides two sets

    Set &operator+=(const int element); // this adds new element to the set
    Set &operator-=(const int element); // this removes element from the set

    int operator[](const size_t index) const;
    bool operator>(const Set &set) const;
    bool operator=(const Set &set) const;
    bool operator<(const Set &set) const;
    bool operator==(const Set &rhSet) const;
    bool operator!=(const Set &rhSet) const;
    bool operator<<(const Set &rhSet) const;

    void print() const;

    int getLength();

private:
    int *set;
    int size;
    unsigned capacity;
    void setSize(int size);
    void setCapacity(int capacity);
    void resize();

    void destroy();
};
