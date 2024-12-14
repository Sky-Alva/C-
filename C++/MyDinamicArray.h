class MyDinamicArray{
    private:
        int size;
        double* m;
    public:
        MyDinamicArray();
        MyDinamicArray(int dim, double v[]);
        MyDinamicArray(const MyDinamicArray& v);
        // ~MyDinamicArray();
        int operator[](int i);
        bool operator==(const MyDinamicArray& v) const;
        bool operator!=(const MyDinamicArray& v) const;
        MyDinamicArray& operator= (const MyDinamicArray& v);
        void print();
        int arr_size();
        //friend ostream& operator<< (ostream& out, const MyDinamicArray& v);
};