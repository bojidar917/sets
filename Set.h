#pragma once
class Set
{
public:
    Set();
    Set(int *set, int size);
    Set(const Set &other);
    Set &operator=(const Set &other);
    Set(Set &&other);
    ~Set();

    int *getSet() const { return set; }
    int getSize() { return size; }
    unsigned getCapacity() { return capacity; }

    void setSet(int *set);

    Set operator+(const Set &rhSet) const;
    Set operator-(const Set &rhSet) const;
    Set &operator+=(const Set &rhSet); // return this at the end
    Set &operator-=(const Set &rhSet); // again return this at the end
    int operator[](const size_t index) const;
    bool operator>(const Set &set) const;
    bool operator==(const Set &rhSet) const;

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
