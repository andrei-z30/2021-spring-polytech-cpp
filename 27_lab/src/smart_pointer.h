#ifndef INC_27_LAB_SMART_POINTER_H
#define INC_27_LAB_SMART_POINTER_H

template<typename T>
class SmartPointer {
    T *ptr;
    int *count;

public:

    SmartPointer() : ptr(nullptr), count(nullptr) {}

    explicit SmartPointer(T *ptr_) : ptr(ptr_) {
        count = new int(1);
    }

    SmartPointer(const SmartPointer<T> &right) {
        if (right.ptr) {
            ptr = right.ptr;
            count = right.count;
            ++*right.count;
        }
    }

    ~SmartPointer() {
        if (ptr && !--*count) {
            delete ptr;
            delete count;
            ptr = nullptr;
        }
    }

    T &operator*() const {
        return *ptr;
    }

    T *operator->() const {
        return ptr;
    }

    int GetCount() {
        return *count;
    }
};

#endif //INC_27_LAB_SMART_POINTER_H
