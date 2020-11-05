#include<stdio.h>
#include <sys/time.h>
#include <time.h>
/* #include "checkers.h" */

struct op_per_sec {
    long double add;
    long double sub;
    long double div;
    long double mul;
    long double avg;
};

struct m_op_per_sec {
    long double item[5];
};

struct m_op_per_sec *p_op_per_sec;

struct op_per_sec for_long(long *massive, unsigned iteration_number) {

    long a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    long b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;

    struct timeval start, end;
    struct op_per_sec res;

    void init () {
        a1 = massive[0];
        a2 = massive[1];
        a3 = massive[2];
        a4 = massive[3];
        a5 = massive[4];
        a6 = massive[5];
        a7 = massive[6];
        a8 = massive[7];
        a9 = massive[8];
        a10= massive[9];
    }

    long double calc_operations_in_sec() {
        struct timeval t;
        timersub(&end, &start, &t);
        return 1/(t.tv_sec + t.tv_usec*1e-6)*iteration_number*10;
    }

    // +
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 + a3; 
        b2 = a3 + a4; 
        b3 = a4 + a5; 
        b4 = a5 + a6; 
        b5 = a6 + a7; 
        b6 = a7 + a8; 
        b7 = a8 + a9; 
        b8 = a9 + a10; 
        b9 = a10 + a1; 
        b10 = a1 + a2;
    }
    gettimeofday(&end, 0);
    res.add = calc_operations_in_sec();    

    // -
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 - a3; 
        b2 = a3 - a4; 
        b3 = a4 - a5; 
        b4 = a5 - a6; 
        b5 = a6 - a7; 
        b6 = a7 - a8; 
        b7 = a8 - a9; 
        b8 = a9 - a10; 
        b9 = a10 - a1; 
        b10 = a1 - a2;
    }
    gettimeofday(&end, 0);
    res.sub = calc_operations_in_sec();    

    // /
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a3  / a2; 
        b2 = a4  / a3; 
        b3 = a5  / a4; 
        b4 = a6  / a5; 
        b5 = a7  / a6; 
        b6 = a8  / a7; 
        b7 = a9  / a8; 
        b8 = a10 / a9; 
        b9 = a1  / a10; 
        b10 = a2 / a1;
    }
    gettimeofday(&end, 0);
    res.div = calc_operations_in_sec();    
   
    // *
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 * a3; 
        b2 = a3 * a4; 
        b3 = a4 * a5; 
        b4 = a5 * a6; 
        b5 = a6 * a7; 
        b6 = a7 * a8; 
        b7 = a8 * a9; 
        b8 = a9 * a10; 
        b9 = a10 * a1; 
        b10 = a1 * a2;
    }
    gettimeofday(&end, 0);
    res.mul = calc_operations_in_sec();    
    
    // { NOP }
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = i; 
        b2 = i; 
        b3 = i; 
        b4 = i; 
        b5 = i; 
        b6 = i; 
        b7 = i; 
        b8 = i; 
        b9 = i; 
        b10 = i;
    }
    gettimeofday(&end, 0);
    res.avg = calc_operations_in_sec();    

    return res;
}

struct op_per_sec for_int(int *massive, unsigned iteration_number) {

    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    int b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;
    struct timeval start, end;
    struct op_per_sec res;

    void init () {
        a1 = massive[0];
        a2 = massive[1];
        a3 = massive[2];
        a4 = massive[3];
        a5 = massive[4];
        a6 = massive[5];
        a7 = massive[6];
        a8 = massive[7];
        a9 = massive[8];
        a10= massive[9];
    }

    long double calc_operations_in_sec() {
        struct timeval t;
        timersub(&end, &start, &t);
        return 1/(t.tv_sec + t.tv_usec*1e-6)*iteration_number*10;
    }

    // +
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 + a3; 
        b2 = a3 + a4; 
        b3 = a4 + a5; 
        b4 = a5 + a6; 
        b5 = a6 + a7; 
        b6 = a7 + a8; 
        b7 = a8 + a9; 
        b8 = a9 + a10; 
        b9 = a10 + a1; 
        b10 = a1 + a2;
    }
    gettimeofday(&end, 0);
    res.add = calc_operations_in_sec();    

    // -
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 - a3; 
        b2 = a3 - a4; 
        b3 = a4 - a5; 
        b4 = a5 - a6; 
        b5 = a6 - a7; 
        b6 = a7 - a8; 
        b7 = a8 - a9; 
        b8 = a9 - a10; 
        b9 = a10 - a1; 
        b10 = a1 - a2;
    }
    gettimeofday(&end, 0);
    res.sub = calc_operations_in_sec();    

    // /
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a3  / a2; 
        b2 = a4  / a3; 
        b3 = a5  / a4; 
        b4 = a6  / a5; 
        b5 = a7  / a6; 
        b6 = a8  / a7; 
        b7 = a9  / a8; 
        b8 = a10 / a9; 
        b9 = a1  / a10; 
        b10 = a2 / a1;
    }
    gettimeofday(&end, 0);
    res.div = calc_operations_in_sec();    
   
    // *
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 * a3; 
        b2 = a3 * a4; 
        b3 = a4 * a5; 
        b4 = a5 * a6; 
        b5 = a6 * a7; 
        b6 = a7 * a8; 
        b7 = a8 * a9; 
        b8 = a9 * a10; 
        b9 = a10 * a1; 
        b10 = a1 * a2;
    }
    gettimeofday(&end, 0);
    res.mul = calc_operations_in_sec();    
    
    // { NOP }
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = i; 
        b2 = i; 
        b3 = i; 
        b4 = i; 
        b5 = i; 
        b6 = i; 
        b7 = i; 
        b8 = i; 
        b9 = i; 
        b10 = i;
    }
    gettimeofday(&end, 0);
    res.avg = calc_operations_in_sec();    

    return res;
}

struct op_per_sec for_char(char *massive, unsigned iteration_number) {

    char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    char b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;

    struct timeval start, end;
    struct op_per_sec res;

    void init () {
        a1 = massive[0];
        a2 = massive[1];
        a3 = massive[2];
        a4 = massive[3];
        a5 = massive[4];
        a6 = massive[5];
        a7 = massive[6];
        a8 = massive[7];
        a9 = massive[8];
        a10= massive[9];
    }

    long double calc_operations_in_sec() {
        struct timeval t;
        timersub(&end, &start, &t);
        return 1/(t.tv_sec + t.tv_usec*1e-6)*iteration_number*10;
    }

    // +
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 + a3; 
        b2 = a3 + a4; 
        b3 = a4 + a5; 
        b4 = a5 + a6; 
        b5 = a6 + a7; 
        b6 = a7 + a8; 
        b7 = a8 + a9; 
        b8 = a9 + a10; 
        b9 = a10 + a1; 
        b10 = a1 + a2;
    }
    gettimeofday(&end, 0);
    res.add = calc_operations_in_sec();    

    // -
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 - a3; 
        b2 = a3 - a4; 
        b3 = a4 - a5; 
        b4 = a5 - a6; 
        b5 = a6 - a7; 
        b6 = a7 - a8; 
        b7 = a8 - a9; 
        b8 = a9 - a10; 
        b9 = a10 - a1; 
        b10 = a1 - a2;
    }
    gettimeofday(&end, 0);
    res.sub = calc_operations_in_sec();    

    // /
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a3  / a2; 
        b2 = a4  / a3; 
        b3 = a5  / a4; 
        b4 = a6  / a5; 
        b5 = a7  / a6; 
        b6 = a8  / a7; 
        b7 = a9  / a8; 
        b8 = a10 / a9; 
        b9 = a1  / a10; 
        b10 = a2 / a1;
    }
    gettimeofday(&end, 0);
    res.div = calc_operations_in_sec();    
   
    // *
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 * a3; 
        b2 = a3 * a4; 
        b3 = a4 * a5; 
        b4 = a5 * a6; 
        b5 = a6 * a7; 
        b6 = a7 * a8; 
        b7 = a8 * a9; 
        b8 = a9 * a10; 
        b9 = a10 * a1; 
        b10 = a1 * a2;
    }
    gettimeofday(&end, 0);
    res.mul = calc_operations_in_sec();    
    
    // { NOP }
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = i; 
        b2 = i; 
        b3 = i; 
        b4 = i; 
        b5 = i; 
        b6 = i; 
        b7 = i; 
        b8 = i; 
        b9 = i; 
        b10 = i;
    }
    gettimeofday(&end, 0);
    res.avg = calc_operations_in_sec();    

    return res;
}

struct op_per_sec for_float(float *massive, unsigned iteration_number) {

    float a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    float b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;

    struct timeval start, end;
    struct op_per_sec res;

    void init () {
        a1 = massive[0];
        a2 = massive[1];
        a3 = massive[2];
        a4 = massive[3];
        a5 = massive[4];
        a6 = massive[5];
        a7 = massive[6];
        a8 = massive[7];
        a9 = massive[8];
        a10= massive[9];
    }

    long double calc_operations_in_sec() {
        struct timeval t;
        timersub(&end, &start, &t);
        return 1/(t.tv_sec + t.tv_usec*1e-6)*iteration_number*10;
    }

    // +
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 + a3; 
        b2 = a3 + a4; 
        b3 = a4 + a5; 
        b4 = a5 + a6; 
        b5 = a6 + a7; 
        b6 = a7 + a8; 
        b7 = a8 + a9; 
        b8 = a9 + a10; 
        b9 = a10 + a1; 
        b10 = a1 + a2;
    }
    gettimeofday(&end, 0);
    res.add = calc_operations_in_sec();    

    // -
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 - a3; 
        b2 = a3 - a4; 
        b3 = a4 - a5; 
        b4 = a5 - a6; 
        b5 = a6 - a7; 
        b6 = a7 - a8; 
        b7 = a8 - a9; 
        b8 = a9 - a10; 
        b9 = a10 - a1; 
        b10 = a1 - a2;
    }
    gettimeofday(&end, 0);
    res.sub = calc_operations_in_sec();    

    // /
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a3  / a2; 
        b2 = a4  / a3; 
        b3 = a5  / a4; 
        b4 = a6  / a5; 
        b5 = a7  / a6; 
        b6 = a8  / a7; 
        b7 = a9  / a8; 
        b8 = a10 / a9; 
        b9 = a1  / a10; 
        b10 = a2 / a1;
    }
    gettimeofday(&end, 0);
    res.div = calc_operations_in_sec();    
   
    // *
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 * a3; 
        b2 = a3 * a4; 
        b3 = a4 * a5; 
        b4 = a5 * a6; 
        b5 = a6 * a7; 
        b6 = a7 * a8; 
        b7 = a8 * a9; 
        b8 = a9 * a10; 
        b9 = a10 * a1; 
        b10 = a1 * a2;
    }
    gettimeofday(&end, 0);
    res.mul = calc_operations_in_sec();    
    
    // { NOP }
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = i; 
        b2 = i; 
        b3 = i; 
        b4 = i; 
        b5 = i; 
        b6 = i; 
        b7 = i; 
        b8 = i; 
        b9 = i; 
        b10 = i;
    }
    gettimeofday(&end, 0);
    res.avg = calc_operations_in_sec();    

    return res;
}

struct op_per_sec for_double(double *massive, unsigned iteration_number) {

    double a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    double b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;

    struct timeval start, end;
    struct op_per_sec res;

    void init () {
        a1 = massive[0];
        a2 = massive[1];
        a3 = massive[2];
        a4 = massive[3];
        a5 = massive[4];
        a6 = massive[5];
        a7 = massive[6];
        a8 = massive[7];
        a9 = massive[8];
        a10= massive[9];
    }

    long double calc_operations_in_sec() {
        struct timeval t;
        timersub(&end, &start, &t);
        return 1/(t.tv_sec + t.tv_usec*1e-6)*iteration_number*10;
    }

    // +
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 + a3; 
        b2 = a3 + a4; 
        b3 = a4 + a5; 
        b4 = a5 + a6; 
        b5 = a6 + a7; 
        b6 = a7 + a8; 
        b7 = a8 + a9; 
        b8 = a9 + a10; 
        b9 = a10 + a1; 
        b10 = a1 + a2;
    }
    gettimeofday(&end, 0);
    res.add = calc_operations_in_sec();    

    // -
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 - a3; 
        b2 = a3 - a4; 
        b3 = a4 - a5; 
        b4 = a5 - a6; 
        b5 = a6 - a7; 
        b6 = a7 - a8; 
        b7 = a8 - a9; 
        b8 = a9 - a10; 
        b9 = a10 - a1; 
        b10 = a1 - a2;
    }
    gettimeofday(&end, 0);
    res.sub = calc_operations_in_sec();    

    // /
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a3  / a2; 
        b2 = a4  / a3; 
        b3 = a5  / a4; 
        b4 = a6  / a5; 
        b5 = a7  / a6; 
        b6 = a8  / a7; 
        b7 = a9  / a8; 
        b8 = a10 / a9; 
        b9 = a1  / a10; 
        b10 = a2 / a1;
    }
    gettimeofday(&end, 0);
    res.div = calc_operations_in_sec();    
   
    // *
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = a2 * a3; 
        b2 = a3 * a4; 
        b3 = a4 * a5; 
        b4 = a5 * a6; 
        b5 = a6 * a7; 
        b6 = a7 * a8; 
        b7 = a8 * a9; 
        b8 = a9 * a10; 
        b9 = a10 * a1; 
        b10 = a1 * a2;
    }
    gettimeofday(&end, 0);
    res.mul = calc_operations_in_sec();    
    
    // { NOP }
    init();
    gettimeofday(&start, 0);
    for (int i = 0; i < iteration_number; i++) {
        b1 = i; 
        b2 = i; 
        b3 = i; 
        b4 = i; 
        b5 = i; 
        b6 = i; 
        b7 = i; 
        b8 = i; 
        b9 = i; 
        b10 = i;
    }
    gettimeofday(&end, 0);
    res.avg = calc_operations_in_sec();    

    return res;
}

void draw_table_line(char *operation, char *type_, double long operation_in_sec, long double max_oper_in_sec)
{
  unsigned int persentage = (unsigned int)((operation_in_sec/max_oper_in_sec)*100);

  const short unsigned max_persentage_string_length = 86;
  unsigned int num_of_fillers_of_persentage_line = (unsigned int)((operation_in_sec/max_oper_in_sec)*max_persentage_string_length);
  num_of_fillers_of_persentage_line += num_of_fillers_of_persentage_line == 0;
  char persentage_string[num_of_fillers_of_persentage_line  - 1];
  for (int i = 0; i <= num_of_fillers_of_persentage_line; i++) { 
    persentage_string[i] = 'X';
  }
  
  persentage_string[num_of_fillers_of_persentage_line - 1] =  '\0';

  printf(" %s\t%s\t\t%Le\t%-86s\t%u%%\n", operation, type_, operation_in_sec, persentage_string, persentage);
}

void draw_entire_table()
{   
    struct op_per_sec res;
    p_op_per_sec = &res;
    long double max_oper_in_sec;

    double massive_d[] = {101.0, 103.0, 107.0, 109.0, 113.0, 127.0, 131.0, 137.0, 139.0, 149.0};
    float  massive_f[] = {101.0, 103.0, 107.0, 109.0, 113.0, 127.0, 131.0, 137.0, 139.0, 149.0};
    long   massive_l[] = {101, 103, 107, 109, 113, 127, 131, 137, 139, 149};
    int    massive_i[] = {101, 103, 107, 109, 113, 127, 131, 137, 139, 149};
    char   massive_c[] = {101, 103, 107, 109, 113, 127, 131, 137, 139, 149};

    unsigned int float_iter_num  = 10000;
    unsigned int int_iter_num    = 10000;
    unsigned int char_iter_num   = 10000;
    unsigned int long_iter_num   = 10000;
    unsigned int double_iter_num = 10000;

    res = for_float(massive_f, float_iter_num);
    long double d_f_oper_in_sec = res.div;
    long double m_f_oper_in_sec = res.mul;
    long double a_f_oper_in_sec = res.add;
    long double s_f_oper_in_sec = res.sub;

    max_oper_in_sec = p_op_per_sec->item[0];
    for (int i=1; i<4; i++) {
        if (max_oper_in_sec < p_op_per_sec->item[i]) {
            max_oper_in_sec = p_op_per_sec->item[i];
        }
    }

    res = for_int(massive_i, int_iter_num);
    long double d_i_oper_in_sec = res.div;
    long double m_i_oper_in_sec = res.mul;
    long double a_i_oper_in_sec = res.add;
    long double s_i_oper_in_sec = res.sub;

    for (int i=0; i<4; i++) {
        if (max_oper_in_sec < p_op_per_sec->item[i]) {
            max_oper_in_sec = p_op_per_sec->item[i];
        }
    }

    res = for_long(massive_l, long_iter_num);
    long double d_l_oper_in_sec = res.div;
    long double m_l_oper_in_sec = res.mul;
    long double a_l_oper_in_sec = res.add;
    long double s_l_oper_in_sec = res.sub;

    for (int i=0; i<4; i++) {
        if (max_oper_in_sec < p_op_per_sec->item[i]) {
            max_oper_in_sec = p_op_per_sec->item[i];
        }
    }

    res = for_char(massive_c, char_iter_num);
    long double d_c_oper_in_sec = res.div;
    long double m_c_oper_in_sec = res.mul;
    long double a_c_oper_in_sec = res.add;
    long double s_c_oper_in_sec = res.sub;

    for (int i=0; i<4; i++) {
        if (max_oper_in_sec < p_op_per_sec->item[i]) {
            max_oper_in_sec = p_op_per_sec->item[i];
        }
    }

    res = for_double(massive_d, double_iter_num);
    long double d_d_oper_in_sec = res.div;
    long double m_d_oper_in_sec = res.mul;
    long double a_d_oper_in_sec = res.add;
    long double s_d_oper_in_sec = res.sub; 
    
    for (int i=0; i<4; i++) {
        if (max_oper_in_sec < p_op_per_sec->item[i]) {
            max_oper_in_sec = p_op_per_sec->item[i];
        }
    }

    draw_table_line("/", "long  ", d_l_oper_in_sec, max_oper_in_sec);
    draw_table_line("*", "long  ", m_l_oper_in_sec, max_oper_in_sec);
    draw_table_line("+", "long  ", a_l_oper_in_sec, max_oper_in_sec);
    draw_table_line("-", "long  ", s_l_oper_in_sec, max_oper_in_sec);

    draw_table_line("/", "int   ", d_i_oper_in_sec, max_oper_in_sec);
    draw_table_line("*", "int   ", m_i_oper_in_sec, max_oper_in_sec);
    draw_table_line("+", "int   ", a_i_oper_in_sec, max_oper_in_sec);
    draw_table_line("-", "int   ", s_i_oper_in_sec, max_oper_in_sec);

    draw_table_line("/", "char  ", d_c_oper_in_sec, max_oper_in_sec);
    draw_table_line("*", "char  ", m_c_oper_in_sec, max_oper_in_sec);
    draw_table_line("+", "char  ", a_c_oper_in_sec, max_oper_in_sec);
    draw_table_line("-", "char  ", s_c_oper_in_sec, max_oper_in_sec);

    draw_table_line("/", "float ", d_f_oper_in_sec, max_oper_in_sec);
    draw_table_line("*", "float ", m_f_oper_in_sec, max_oper_in_sec);
    draw_table_line("+", "float ", a_f_oper_in_sec, max_oper_in_sec);
    draw_table_line("-", "float ", s_f_oper_in_sec, max_oper_in_sec);

    draw_table_line("/", "double", d_d_oper_in_sec, max_oper_in_sec);
    draw_table_line("*", "double", m_d_oper_in_sec, max_oper_in_sec);
    draw_table_line("+", "double", a_d_oper_in_sec, max_oper_in_sec);
    draw_table_line("-", "double", s_d_oper_in_sec, max_oper_in_sec);
    

}

// MAIN
int main(void) {
    draw_entire_table();
    return 0;
}

