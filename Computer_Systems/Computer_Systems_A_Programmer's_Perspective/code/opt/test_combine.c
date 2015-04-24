#include <combine.h>

#define INT
#define PROD

void combine1(vec_ptr v, data_t *dest)
{
    long int i;
    
    *dest = IDENT;
    
    for(i = 0; i < vec_length(v); i++) {
        data_t val;
        get_vec_element(v, i, &val);
        *dest = *dest OP val;
    }
}

int main(int argc, char* argv[])
{
    long int SIZE = 10000;
    vec_ptr vptr = new_vec(SIZE);
    
    data_t val = 0;
    
    combine1(vptr, &val);
}
