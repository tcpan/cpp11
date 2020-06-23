// Generated by cpp11: do not edit by hand

#include "cpp11/declarations.hpp"
#include <Rcpp.h>
using namespace Rcpp;

// add.cpp
SEXP cpp11_add_vec_for_(cpp11::writable::doubles x, double num);
extern "C" SEXP _cpp11test_cpp11_add_vec_for_(SEXP x, SEXP num) {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp11_add_vec_for_(cpp11::unmove(cpp11::as_cpp<cpp11::writable::doubles>(x)), cpp11::unmove(cpp11::as_cpp<double>(num))));
  END_CPP11
}
// data_frame.cpp
SEXP data_frame_();
extern "C" SEXP _cpp11test_data_frame_() {
  BEGIN_CPP11
    return cpp11::as_sexp(data_frame_());
  END_CPP11
}
// find-intervals.cpp
SEXP remove_altrep(SEXP x);
extern "C" SEXP _cpp11test_remove_altrep(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(remove_altrep(cpp11::unmove(cpp11::as_cpp<SEXP>(x))));
  END_CPP11
}
// find-intervals.cpp
double upper_bound(doubles x, doubles breaks);
extern "C" SEXP _cpp11test_upper_bound(SEXP x, SEXP breaks) {
  BEGIN_CPP11
    return cpp11::as_sexp(upper_bound(cpp11::unmove(cpp11::as_cpp<doubles>(x)), cpp11::unmove(cpp11::as_cpp<doubles>(breaks))));
  END_CPP11
}
// find-intervals.cpp
integers findInterval2(doubles x, doubles breaks);
extern "C" SEXP _cpp11test_findInterval2(SEXP x, SEXP breaks) {
  BEGIN_CPP11
    return cpp11::as_sexp(findInterval2(cpp11::unmove(cpp11::as_cpp<doubles>(x)), cpp11::unmove(cpp11::as_cpp<doubles>(breaks))));
  END_CPP11
}
// find-intervals.cpp
integers findInterval2_5(doubles x, doubles breaks);
extern "C" SEXP _cpp11test_findInterval2_5(SEXP x, SEXP breaks) {
  BEGIN_CPP11
    return cpp11::as_sexp(findInterval2_5(cpp11::unmove(cpp11::as_cpp<doubles>(x)), cpp11::unmove(cpp11::as_cpp<doubles>(breaks))));
  END_CPP11
}
// find-intervals.cpp
integers findInterval3(doubles x, doubles breaks);
extern "C" SEXP _cpp11test_findInterval3(SEXP x, SEXP breaks) {
  BEGIN_CPP11
    return cpp11::as_sexp(findInterval3(cpp11::unmove(cpp11::as_cpp<doubles>(x)), cpp11::unmove(cpp11::as_cpp<doubles>(breaks))));
  END_CPP11
}
// find-intervals.cpp
IntegerVector findInterval4(NumericVector x, NumericVector breaks);
extern "C" SEXP _cpp11test_findInterval4(SEXP x, SEXP breaks) {
  BEGIN_CPP11
    return cpp11::as_sexp(findInterval4(cpp11::unmove(cpp11::as_cpp<NumericVector>(x)), cpp11::unmove(cpp11::as_cpp<NumericVector>(breaks))));
  END_CPP11
}
// grow.cpp
cpp11::writable::doubles grow_(R_xlen_t n);
extern "C" SEXP _cpp11test_grow_(SEXP n) {
  BEGIN_CPP11
    return cpp11::as_sexp(grow_(cpp11::unmove(cpp11::as_cpp<R_xlen_t>(n))));
  END_CPP11
}
// insert.cpp
SEXP cpp11_insert_(SEXP num_sxp);
extern "C" SEXP _cpp11test_cpp11_insert_(SEXP num_sxp) {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp11_insert_(cpp11::unmove(cpp11::as_cpp<SEXP>(num_sxp))));
  END_CPP11
}
// matrix.cpp
SEXP gibbs_cpp(int N, int thin);
extern "C" SEXP _cpp11test_gibbs_cpp(SEXP N, SEXP thin) {
  BEGIN_CPP11
    return cpp11::as_sexp(gibbs_cpp(cpp11::unmove(cpp11::as_cpp<int>(N)), cpp11::unmove(cpp11::as_cpp<int>(thin))));
  END_CPP11
}
// matrix.cpp
cpp11::doubles_matrix gibbs_cpp2(int N, int thin);
extern "C" SEXP _cpp11test_gibbs_cpp2(SEXP N, SEXP thin) {
  BEGIN_CPP11
    return cpp11::as_sexp(gibbs_cpp2(cpp11::unmove(cpp11::as_cpp<int>(N)), cpp11::unmove(cpp11::as_cpp<int>(thin))));
  END_CPP11
}
// matrix.cpp
NumericMatrix gibbs_rcpp(int N, int thin);
extern "C" SEXP _cpp11test_gibbs_rcpp(SEXP N, SEXP thin) {
  BEGIN_CPP11
    return cpp11::as_sexp(gibbs_rcpp(cpp11::unmove(cpp11::as_cpp<int>(N)), cpp11::unmove(cpp11::as_cpp<int>(thin))));
  END_CPP11
}
// matrix.cpp
NumericMatrix gibbs_rcpp2(int N, int thin);
extern "C" SEXP _cpp11test_gibbs_rcpp2(SEXP N, SEXP thin) {
  BEGIN_CPP11
    return cpp11::as_sexp(gibbs_rcpp2(cpp11::unmove(cpp11::as_cpp<int>(N)), cpp11::unmove(cpp11::as_cpp<int>(thin))));
  END_CPP11
}
// protect.cpp
void protect_one_(SEXP x, int n);
extern "C" SEXP _cpp11test_protect_one_(SEXP x, SEXP n) {
  BEGIN_CPP11
    protect_one_(cpp11::unmove(cpp11::as_cpp<SEXP>(x)), cpp11::unmove(cpp11::as_cpp<int>(n)));
  return R_NilValue;
  END_CPP11
}
// protect.cpp
void protect_one_sexp_(SEXP x, int n);
extern "C" SEXP _cpp11test_protect_one_sexp_(SEXP x, SEXP n) {
  BEGIN_CPP11
    protect_one_sexp_(cpp11::unmove(cpp11::as_cpp<SEXP>(x)), cpp11::unmove(cpp11::as_cpp<int>(n)));
  return R_NilValue;
  END_CPP11
}
// protect.cpp
void protect_one_cpp11_(SEXP x, int n);
extern "C" SEXP _cpp11test_protect_one_cpp11_(SEXP x, SEXP n) {
  BEGIN_CPP11
    protect_one_cpp11_(cpp11::unmove(cpp11::as_cpp<SEXP>(x)), cpp11::unmove(cpp11::as_cpp<int>(n)));
  return R_NilValue;
  END_CPP11
}
// protect.cpp
void protect_one_preserve_(SEXP x, int n);
extern "C" SEXP _cpp11test_protect_one_preserve_(SEXP x, SEXP n) {
  BEGIN_CPP11
    protect_one_preserve_(cpp11::unmove(cpp11::as_cpp<SEXP>(x)), cpp11::unmove(cpp11::as_cpp<int>(n)));
  return R_NilValue;
  END_CPP11
}
// protect.cpp
void protect_many_(int n);
extern "C" SEXP _cpp11test_protect_many_(SEXP n) {
  BEGIN_CPP11
    protect_many_(cpp11::unmove(cpp11::as_cpp<int>(n)));
  return R_NilValue;
  END_CPP11
}
// protect.cpp
void protect_many_cpp11_(int n);
extern "C" SEXP _cpp11test_protect_many_cpp11_(SEXP n) {
  BEGIN_CPP11
    protect_many_cpp11_(cpp11::unmove(cpp11::as_cpp<int>(n)));
  return R_NilValue;
  END_CPP11
}
// protect.cpp
void protect_many_sexp_(int n);
extern "C" SEXP _cpp11test_protect_many_sexp_(SEXP n) {
  BEGIN_CPP11
    protect_many_sexp_(cpp11::unmove(cpp11::as_cpp<int>(n)));
  return R_NilValue;
  END_CPP11
}
// protect.cpp
void protect_many_preserve_(int n);
extern "C" SEXP _cpp11test_protect_many_preserve_(SEXP n) {
  BEGIN_CPP11
    protect_many_preserve_(cpp11::unmove(cpp11::as_cpp<int>(n)));
  return R_NilValue;
  END_CPP11
}
// protect.cpp
void protect_many_rcpp_(int n);
extern "C" SEXP _cpp11test_protect_many_rcpp_(SEXP n) {
  BEGIN_CPP11
    protect_many_rcpp_(cpp11::unmove(cpp11::as_cpp<int>(n)));
  return R_NilValue;
  END_CPP11
}
// release.cpp
void cpp11_release_(int n);
extern "C" SEXP _cpp11test_cpp11_release_(SEXP n) {
  BEGIN_CPP11
    cpp11_release_(cpp11::unmove(cpp11::as_cpp<int>(n)));
  return R_NilValue;
  END_CPP11
}
// release.cpp
void rcpp_release_(int n);
extern "C" SEXP _cpp11test_rcpp_release_(SEXP n) {
  BEGIN_CPP11
    rcpp_release_(cpp11::unmove(cpp11::as_cpp<int>(n)));
  return R_NilValue;
  END_CPP11
}
// safe.cpp
SEXP cpp11_safe_(SEXP x_sxp);
extern "C" SEXP _cpp11test_cpp11_safe_(SEXP x_sxp) {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp11_safe_(cpp11::unmove(cpp11::as_cpp<SEXP>(x_sxp))));
  END_CPP11
}
// sum_int.cpp
int sum_int_for_(cpp11::integers x);
extern "C" SEXP _cpp11test_sum_int_for_(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(sum_int_for_(cpp11::unmove(cpp11::as_cpp<cpp11::integers>(x))));
  END_CPP11
}
// sum_rcpp.cpp
SEXP rcpp_sum_dbl_for_(SEXP x_sxp);
extern "C" SEXP _cpp11test_rcpp_sum_dbl_for_(SEXP x_sxp) {
  BEGIN_CPP11
    return cpp11::as_sexp(rcpp_sum_dbl_for_(cpp11::unmove(cpp11::as_cpp<SEXP>(x_sxp))));
  END_CPP11
}
// sum_rcpp.cpp
SEXP rcpp_sum_dbl_foreach_(SEXP x_sxp);
extern "C" SEXP _cpp11test_rcpp_sum_dbl_foreach_(SEXP x_sxp) {
  BEGIN_CPP11
    return cpp11::as_sexp(rcpp_sum_dbl_foreach_(cpp11::unmove(cpp11::as_cpp<SEXP>(x_sxp))));
  END_CPP11
}
// sum_rcpp.cpp
SEXP rcpp_sum_dbl_accumulate_(SEXP x_sxp);
extern "C" SEXP _cpp11test_rcpp_sum_dbl_accumulate_(SEXP x_sxp) {
  BEGIN_CPP11
    return cpp11::as_sexp(rcpp_sum_dbl_accumulate_(cpp11::unmove(cpp11::as_cpp<SEXP>(x_sxp))));
  END_CPP11
}
// sum_rcpp.cpp
SEXP rcpp_grow_(SEXP n_sxp);
extern "C" SEXP _cpp11test_rcpp_grow_(SEXP n_sxp) {
  BEGIN_CPP11
    return cpp11::as_sexp(rcpp_grow_(cpp11::unmove(cpp11::as_cpp<SEXP>(n_sxp))));
  END_CPP11
}
// sum.cpp
double sum_dbl_for_(cpp11::doubles x);
extern "C" SEXP _cpp11test_sum_dbl_for_(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(sum_dbl_for_(cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(x))));
  END_CPP11
}
// sum.cpp
double sum_dbl_for2_(SEXP x_sxp);
extern "C" SEXP _cpp11test_sum_dbl_for2_(SEXP x_sxp) {
  BEGIN_CPP11
    return cpp11::as_sexp(sum_dbl_for2_(cpp11::unmove(cpp11::as_cpp<SEXP>(x_sxp))));
  END_CPP11
}
// sum.cpp
double sum_dbl_for3_(SEXP x_sxp);
extern "C" SEXP _cpp11test_sum_dbl_for3_(SEXP x_sxp) {
  BEGIN_CPP11
    return cpp11::as_sexp(sum_dbl_for3_(cpp11::unmove(cpp11::as_cpp<SEXP>(x_sxp))));
  END_CPP11
}
// sum.cpp
double sum_dbl_foreach_(cpp11::doubles x);
extern "C" SEXP _cpp11test_sum_dbl_foreach_(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(sum_dbl_foreach_(cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(x))));
  END_CPP11
}
// sum.cpp
double sum_dbl_foreach2_(SEXP x_sxp);
extern "C" SEXP _cpp11test_sum_dbl_foreach2_(SEXP x_sxp) {
  BEGIN_CPP11
    return cpp11::as_sexp(sum_dbl_foreach2_(cpp11::unmove(cpp11::as_cpp<SEXP>(x_sxp))));
  END_CPP11
}
// sum.cpp
double sum_dbl_accumulate_(cpp11::doubles x);
extern "C" SEXP _cpp11test_sum_dbl_accumulate_(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(sum_dbl_accumulate_(cpp11::unmove(cpp11::as_cpp<cpp11::doubles>(x))));
  END_CPP11
}
// sum.cpp
double sum_dbl_accumulate2_(SEXP x_sxp);
extern "C" SEXP _cpp11test_sum_dbl_accumulate2_(SEXP x_sxp) {
  BEGIN_CPP11
    return cpp11::as_sexp(sum_dbl_accumulate2_(cpp11::unmove(cpp11::as_cpp<SEXP>(x_sxp))));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _cpp11test_cpp11_add_vec_for_(SEXP, SEXP);
extern SEXP _cpp11test_cpp11_insert_(SEXP);
extern SEXP _cpp11test_cpp11_release_(SEXP);
extern SEXP _cpp11test_cpp11_safe_(SEXP);
extern SEXP _cpp11test_data_frame_();
extern SEXP _cpp11test_findInterval2(SEXP, SEXP);
extern SEXP _cpp11test_findInterval2_5(SEXP, SEXP);
extern SEXP _cpp11test_findInterval3(SEXP, SEXP);
extern SEXP _cpp11test_findInterval4(SEXP, SEXP);
extern SEXP _cpp11test_gibbs_cpp(SEXP, SEXP);
extern SEXP _cpp11test_gibbs_cpp2(SEXP, SEXP);
extern SEXP _cpp11test_gibbs_rcpp(SEXP, SEXP);
extern SEXP _cpp11test_gibbs_rcpp2(SEXP, SEXP);
extern SEXP _cpp11test_grow_(SEXP);
extern SEXP _cpp11test_protect_many_(SEXP);
extern SEXP _cpp11test_protect_many_cpp11_(SEXP);
extern SEXP _cpp11test_protect_many_preserve_(SEXP);
extern SEXP _cpp11test_protect_many_rcpp_(SEXP);
extern SEXP _cpp11test_protect_many_sexp_(SEXP);
extern SEXP _cpp11test_protect_one_(SEXP, SEXP);
extern SEXP _cpp11test_protect_one_cpp11_(SEXP, SEXP);
extern SEXP _cpp11test_protect_one_preserve_(SEXP, SEXP);
extern SEXP _cpp11test_protect_one_sexp_(SEXP, SEXP);
extern SEXP _cpp11test_rcpp_grow_(SEXP);
extern SEXP _cpp11test_rcpp_release_(SEXP);
extern SEXP _cpp11test_rcpp_sum_dbl_accumulate_(SEXP);
extern SEXP _cpp11test_rcpp_sum_dbl_for_(SEXP);
extern SEXP _cpp11test_rcpp_sum_dbl_foreach_(SEXP);
extern SEXP _cpp11test_remove_altrep(SEXP);
extern SEXP _cpp11test_sum_dbl_accumulate_(SEXP);
extern SEXP _cpp11test_sum_dbl_accumulate2_(SEXP);
extern SEXP _cpp11test_sum_dbl_for_(SEXP);
extern SEXP _cpp11test_sum_dbl_for2_(SEXP);
extern SEXP _cpp11test_sum_dbl_for3_(SEXP);
extern SEXP _cpp11test_sum_dbl_foreach_(SEXP);
extern SEXP _cpp11test_sum_dbl_foreach2_(SEXP);
extern SEXP _cpp11test_sum_int_for_(SEXP);
extern SEXP _cpp11test_upper_bound(SEXP, SEXP);
extern SEXP run_testthat_tests(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_cpp11test_cpp11_add_vec_for_",       (DL_FUNC) &_cpp11test_cpp11_add_vec_for_,       2},
    {"_cpp11test_cpp11_insert_",            (DL_FUNC) &_cpp11test_cpp11_insert_,            1},
    {"_cpp11test_cpp11_release_",           (DL_FUNC) &_cpp11test_cpp11_release_,           1},
    {"_cpp11test_cpp11_safe_",              (DL_FUNC) &_cpp11test_cpp11_safe_,              1},
    {"_cpp11test_data_frame_",              (DL_FUNC) &_cpp11test_data_frame_,              0},
    {"_cpp11test_findInterval2",            (DL_FUNC) &_cpp11test_findInterval2,            2},
    {"_cpp11test_findInterval2_5",          (DL_FUNC) &_cpp11test_findInterval2_5,          2},
    {"_cpp11test_findInterval3",            (DL_FUNC) &_cpp11test_findInterval3,            2},
    {"_cpp11test_findInterval4",            (DL_FUNC) &_cpp11test_findInterval4,            2},
    {"_cpp11test_gibbs_cpp",                (DL_FUNC) &_cpp11test_gibbs_cpp,                2},
    {"_cpp11test_gibbs_cpp2",               (DL_FUNC) &_cpp11test_gibbs_cpp2,               2},
    {"_cpp11test_gibbs_rcpp",               (DL_FUNC) &_cpp11test_gibbs_rcpp,               2},
    {"_cpp11test_gibbs_rcpp2",              (DL_FUNC) &_cpp11test_gibbs_rcpp2,              2},
    {"_cpp11test_grow_",                    (DL_FUNC) &_cpp11test_grow_,                    1},
    {"_cpp11test_protect_many_",            (DL_FUNC) &_cpp11test_protect_many_,            1},
    {"_cpp11test_protect_many_cpp11_",      (DL_FUNC) &_cpp11test_protect_many_cpp11_,      1},
    {"_cpp11test_protect_many_preserve_",   (DL_FUNC) &_cpp11test_protect_many_preserve_,   1},
    {"_cpp11test_protect_many_rcpp_",       (DL_FUNC) &_cpp11test_protect_many_rcpp_,       1},
    {"_cpp11test_protect_many_sexp_",       (DL_FUNC) &_cpp11test_protect_many_sexp_,       1},
    {"_cpp11test_protect_one_",             (DL_FUNC) &_cpp11test_protect_one_,             2},
    {"_cpp11test_protect_one_cpp11_",       (DL_FUNC) &_cpp11test_protect_one_cpp11_,       2},
    {"_cpp11test_protect_one_preserve_",    (DL_FUNC) &_cpp11test_protect_one_preserve_,    2},
    {"_cpp11test_protect_one_sexp_",        (DL_FUNC) &_cpp11test_protect_one_sexp_,        2},
    {"_cpp11test_rcpp_grow_",               (DL_FUNC) &_cpp11test_rcpp_grow_,               1},
    {"_cpp11test_rcpp_release_",            (DL_FUNC) &_cpp11test_rcpp_release_,            1},
    {"_cpp11test_rcpp_sum_dbl_accumulate_", (DL_FUNC) &_cpp11test_rcpp_sum_dbl_accumulate_, 1},
    {"_cpp11test_rcpp_sum_dbl_for_",        (DL_FUNC) &_cpp11test_rcpp_sum_dbl_for_,        1},
    {"_cpp11test_rcpp_sum_dbl_foreach_",    (DL_FUNC) &_cpp11test_rcpp_sum_dbl_foreach_,    1},
    {"_cpp11test_remove_altrep",            (DL_FUNC) &_cpp11test_remove_altrep,            1},
    {"_cpp11test_sum_dbl_accumulate_",      (DL_FUNC) &_cpp11test_sum_dbl_accumulate_,      1},
    {"_cpp11test_sum_dbl_accumulate2_",     (DL_FUNC) &_cpp11test_sum_dbl_accumulate2_,     1},
    {"_cpp11test_sum_dbl_for_",             (DL_FUNC) &_cpp11test_sum_dbl_for_,             1},
    {"_cpp11test_sum_dbl_for2_",            (DL_FUNC) &_cpp11test_sum_dbl_for2_,            1},
    {"_cpp11test_sum_dbl_for3_",            (DL_FUNC) &_cpp11test_sum_dbl_for3_,            1},
    {"_cpp11test_sum_dbl_foreach_",         (DL_FUNC) &_cpp11test_sum_dbl_foreach_,         1},
    {"_cpp11test_sum_dbl_foreach2_",        (DL_FUNC) &_cpp11test_sum_dbl_foreach2_,        1},
    {"_cpp11test_sum_int_for_",             (DL_FUNC) &_cpp11test_sum_int_for_,             1},
    {"_cpp11test_upper_bound",              (DL_FUNC) &_cpp11test_upper_bound,              2},
    {"run_testthat_tests",                  (DL_FUNC) &run_testthat_tests,                  1},
    {NULL, NULL, 0}
};
}



extern "C" void R_init_cpp11test(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  
}

