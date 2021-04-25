#ifndef INC_27_LAB_SMART_POINTER_H
#define INC_27_LAB_SMART_POINTER_H

template<typename T>
class SmartPointer {
    T *ptr;
public:
    static unsigned int COUNT;

    explicit SmartPointer(T *ptr_) {
        ptr = ptr_;
        ++COUNT;
    }

    SmartPointer(const SmartPointer<T> &object) {
        this->ptr = object.ptr;
        ++COUNT;
    }

    ~SmartPointer() {
        --COUNT;
        if (!COUNT)
            delete ptr;
    }

    SmartPointer& operator=(const SmartPointer &right) {
        if (this == &right) {
            return *this;
        }
        this->ptr = right.ptr;
    }

    T& operator*() {
        return *ptr;
    }

    T* operator->() {
        return ptr;
    }
};

template<typename T>
unsigned int SmartPointer<T>::COUNT = 0;

#endif //INC_27_LAB_SMART_POINTER_H
