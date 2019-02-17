/*################################################################################
  ##
  ##   Copyright (C) 2011-2019 Keith O'Hara
  ##
  ##   This file is part of the StatsLib C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#include "stats.hpp"
#include "../stats_tests.hpp"

// int main()
// {
//     double err_tol = 1E-06;
//     int round_digits_1 = 3;
//     int round_digits_2 = 5;

//     double rate_par = 10.0;

//     std::cout << "\n*** ppois: begin tests. ***\n" << std::endl;

//     //

//     int x_1 = 0;
//     double val_1 = 4.539993e-05;
//     double dens_1 = stats::ppois(x_1,rate_par);

//     bool success_1 = (std::abs(dens_1 - val_1) < err_tol);
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1-1) << "ppois(" << x_1 << "): ";
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << dens_1 << ". Success = " << success_1 << std::endl;

//     //

//     int x_2 = 1;
//     double val_2 = 0.0004993992;
//     double dens_2 = stats::ppois(x_2,rate_par);

//     bool success_2 = (std::abs(dens_2 - val_2) < err_tol);
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1-1) << "ppois(" << x_2 << "): ";
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << dens_2 << ". Success = " << success_2 << std::endl;
    
//     //

//     int x_3 = 2;
//     double val_3 = 0.002769396;
//     double dens_3 = stats::ppois(x_3,rate_par);

//     bool success_3 = (std::abs(dens_3 - val_3) < err_tol);
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1-1) << "ppois(" << x_3 << "): ";
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << dens_3 << ". Success = " << success_3 << std::endl;

//     //

//     int x_4 = 3;
//     double val_4 = 0.01033605;
//     double dens_4 = stats::ppois(x_4,rate_par);

//     bool success_4 = (std::abs(dens_4 - val_4) < err_tol);
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1-1) << "ppois(" << x_4 << "): ";
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << dens_4 << ". Success = " << success_4 << std::endl;

//     //

//     int x_5 = 5;
//     double val_5 = 0.06708596;
//     double dens_5 = stats::ppois(x_5,rate_par);

//     bool success_5 = (std::abs(dens_5 - val_5) < err_tol);
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1-1) << "ppois(" << x_5 << "): ";
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << dens_5 << ". Success = " << success_5 << std::endl;

//     //

//     int x_6 = 8;
//     double val_6 = 0.3328197;
//     double dens_6 = stats::ppois(x_6,rate_par);

//     bool success_6 = (std::abs(dens_6 - val_6) < err_tol);
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1-1) << "ppois(" << x_6 << "): ";
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << dens_6 << ". Success = " << success_6 << std::endl;

//     //

//     int x_7 = 10;
//     double val_7 = 0.5830398;
//     double dens_7 = stats::ppois(x_7,rate_par);

//     bool success_7 = (std::abs(dens_7 - val_7) < err_tol);
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1-1) << "ppois(" << x_7 << "): ";
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << dens_7 << ". Success = " << success_7 << std::endl;

//     //

//     int x_8 = 14;
//     double val_8 = 0.9165415;
//     double dens_8 = stats::ppois(x_8,rate_par);

//     bool success_8 = (std::abs(dens_8 - val_8) < err_tol);
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1-1) << "ppois(" << x_8 << "): ";
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << dens_8 << ". Success = " << success_8 << std::endl;

//     //

//     int x_9 = 20;
//     double val_9 = 0.9984117;
//     double dens_9 = stats::ppois(x_9,rate_par);

//     bool success_9 = (std::abs(dens_9 - val_9) < err_tol);
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_1-1) << "ppois(" << x_9 << "): ";
//     std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(round_digits_2) << dens_9 << ". Success = " << success_9 << std::endl;

//     //

//     if (success_1 && success_2 && success_3 && success_4 && success_5 && success_6 && success_7 && success_8 && success_9) {
//         std::cout << "\n*** ppois: \033[32mall tests PASSED.\033[0m ***\n" << std::endl;
//     } else {
//         std::cout << "\n*** ppois: \033[31msome tests FAILED.\033[0m ***\n" << std::endl;
//     }

//     //
//     // coverage tests

// #ifdef STATS_TEST_MATRIX_FEATURES
//     mat_obj x_mat(2,1);
//     x_mat(0,0) = 5;
//     x_mat(1,0) = 6;

//     stats::ppois(x_mat,rate_par);
//     stats::ppois(x_mat,rate_par,true);
// #endif

//     return 0;
// }

int main()
{
    print_begin("ppois");

    // settings

    double err_tol = 1E-05;
    int print_level = TEST_PRINT_LEVEL;

    int print_precision_1 = 2;
    int print_precision_2 = 5;

    // parameters

    double rate = 10.0;

    //

    std::vector<int> inp_vals    = { 8,          10,         12 };
    std::vector<double> exp_vals = { 0.3328197,  0.5830398,  0.7915565 };

    //
    // scalar tests

    int test_number = 0;

    STATS_TEST_EXPECTED_VAL(ppois,inp_vals[0],exp_vals[0],false,rate);
    STATS_TEST_EXPECTED_VAL(ppois,inp_vals[1],exp_vals[1],true,rate);
    STATS_TEST_EXPECTED_VAL(ppois,inp_vals[2],exp_vals[2],false,rate);

    // STATS_TEST_EXPECTED_VAL(ppois,TEST_NAN,TEST_NAN,false,3);                                       // Input NaNs
    STATS_TEST_EXPECTED_VAL(ppois,1,TEST_NAN,false,TEST_NAN);

    STATS_TEST_EXPECTED_VAL(ppois,0,1,false,0);                                                     // rate <= 0
    STATS_TEST_EXPECTED_VAL(ppois,1,1,false,0);
    // STATS_TEST_EXPECTED_VAL(ppois,TEST_POSINF,0,false,0);
    STATS_TEST_EXPECTED_VAL(ppois,1,TEST_NAN,false,-1.0);
    STATS_TEST_EXPECTED_VAL(ppois,1,TEST_NAN,false,TEST_NEGINF);

    STATS_TEST_EXPECTED_VAL(ppois,1,0,false,TEST_POSINF);                                           // rate == Inf
    // STATS_TEST_EXPECTED_VAL(ppois,TEST_POSINF,0,false,TEST_POSINF);

    STATS_TEST_EXPECTED_VAL(ppois,0,0.006737947,false,5);                                           // x == 0

    STATS_TEST_EXPECTED_VAL(ppois,-1,0,false,2);                                                    // x < 0

    // STATS_TEST_EXPECTED_VAL(ppois,TEST_POSINF,0,false,10);                                          // x == Inf

    //
    // vector/matrix tests

#ifdef STATS_TEST_STDVEC_FEATURES
    STATS_TEST_EXPECTED_MAT(ppois,inp_vals,exp_vals,std::vector<double>,false,rate);
    STATS_TEST_EXPECTED_MAT(ppois,inp_vals,exp_vals,std::vector<double>,true,rate);
#endif

#ifdef STATS_TEST_MATRIX_FEATURES
    mat_obj inp_mat(2,3);
    inp_mat(0,0) = inp_vals[0];
    inp_mat(1,0) = inp_vals[2];
    inp_mat(0,1) = inp_vals[1];
    inp_mat(1,1) = inp_vals[0];
    inp_mat(0,2) = inp_vals[2];
    inp_mat(1,2) = inp_vals[1];

    mat_obj exp_mat(2,3);
    exp_mat(0,0) = exp_vals[0];
    exp_mat(1,0) = exp_vals[2];
    exp_mat(0,1) = exp_vals[1];
    exp_mat(1,1) = exp_vals[0];
    exp_mat(0,2) = exp_vals[2];
    exp_mat(1,2) = exp_vals[1];

    STATS_TEST_EXPECTED_MAT(ppois,inp_mat,exp_mat,mat_obj,false,rate);
    STATS_TEST_EXPECTED_MAT(ppois,inp_mat,exp_mat,mat_obj,true,rate);
#endif

    // 

    print_final("ppois",test_number);

    return 0;
}
