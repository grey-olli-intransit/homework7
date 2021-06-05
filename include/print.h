#ifndef PRINT_H
#define PRINT_H
namespace olli {
    void print_int_array(int* arr, size_t size) {
        for(size_t i=0;i<size;i++)
            std::cout << arr[i] << " ";
	std::cout << std::endl;
    }
    
    template <size_t size_x, size_t size_y>
    void print_int_2d_array(int (&arr)[size_x][size_y]) {
        for(size_t i=0;i<size_x;i++) {
	    for(size_t j=0;j<size_y;j++)
                std::cout << *(*(arr + i) + j) << " ";
	    std::cout << std::endl;
	}
    }
    
}
#endif
