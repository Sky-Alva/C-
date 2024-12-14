class DynamicArray{
    private: 
        int* arr;
        int dim;
    public:
        DynamicArray();
        DynamicArray(int dim);
        DynamicArray(int dim, int *v);
        DynamicArray(const DynamicArray& v);
        int& operator[](int);
        DynamicArray& operator= (const DynamicArray& v);
        bool operator==(const DynamicArray& v) const;
        bool operator!=(const DynamicArray& v) const;
        void print() const;
        int size();
        friend std::ostream & operator << (std::ostream &out, const DynamicArray &v);
        friend std::istream & operator >> (std::istream &out, DynamicArray &v);
};