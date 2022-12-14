#ifndef WEEK_9_TASK1_H
#define WEEK_9_TASK1_H

namespace Task1 {
    
    /// Performs task 1.
    void run();
    
    /// Base class. Parent class of class B.
    template<typename T>
    class A {
    public:
        /// Initialises a new A object with a private member field.
        A(T value);

        /// Prints the class name into the console.
        virtual void print();
        /// Accessor method for class' unique field.
        T get_value();
        
    private:
        /// Unique field defined in class A.
        T value;
    };
    
    // Derived class of class A, parent class of class C.
    template<typename T>
    class B : public A<T> {
    public:
        /// Initialises a new A object with a private member field.
        B(T value) : A<T>(value) {};
        void print() override;
    };
    
}

#endif //WEEK_9_TASK1_H