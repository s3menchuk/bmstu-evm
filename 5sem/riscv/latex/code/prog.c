#define len 9 // Размер массива
#define enroll 2 // Количество обрабатываемых элементов за одну итерацию
#define elem_sz 4 // Размер одного элемента массива

int _x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int _start() {
    int *x1 = _x;
    int *x20 = x1 + elem_sz * len; // Адрес элемента, следующего за последним
    int x31 = x1[0];
    x1 += elem_sz;
    do {
        int x2 = x1[0];
        int x3 = x1[1];
        if (x2 >= x31)
            x31 = x2;
        if (x3 >= x31)
            x31 = x3;
        x1 += elem_sz * enroll;
    } while (x1 != x20);
    while (1);
}