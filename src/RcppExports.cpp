// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// scalarMultiplication
Eigen::MatrixXd scalarMultiplication(double c, const Eigen::Map<Eigen::MatrixXd>& M);
RcppExport SEXP _RPEGLMEN_scalarMultiplication(SEXP cSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(scalarMultiplication(c, M));
    return rcpp_result_gen;
END_RCPP
}
// addReals
double addReals(double x, double y);
RcppExport SEXP _RPEGLMEN_addReals(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(addReals(x, y));
    return rcpp_result_gen;
END_RCPP
}
// fitGlmFixed
Eigen::MatrixXd fitGlmFixed(const Eigen::MatrixXd& predictor_matrix, const Eigen::VectorXd& response_vector, double alpha, int num_lambda, int glm_type, int max_iter, double abs_tol, double rel_tol, bool normalize_grad, int k_fold);
RcppExport SEXP _RPEGLMEN_fitGlmFixed(SEXP predictor_matrixSEXP, SEXP response_vectorSEXP, SEXP alphaSEXP, SEXP num_lambdaSEXP, SEXP glm_typeSEXP, SEXP max_iterSEXP, SEXP abs_tolSEXP, SEXP rel_tolSEXP, SEXP normalize_gradSEXP, SEXP k_foldSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type predictor_matrix(predictor_matrixSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type response_vector(response_vectorSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type num_lambda(num_lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type glm_type(glm_typeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type abs_tol(abs_tolSEXP);
    Rcpp::traits::input_parameter< double >::type rel_tol(rel_tolSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize_grad(normalize_gradSEXP);
    Rcpp::traits::input_parameter< int >::type k_fold(k_foldSEXP);
    rcpp_result_gen = Rcpp::wrap(fitGlmFixed(predictor_matrix, response_vector, alpha, num_lambda, glm_type, max_iter, abs_tol, rel_tol, normalize_grad, k_fold));
    return rcpp_result_gen;
END_RCPP
}
// fitGlmCv
Eigen::MatrixXd fitGlmCv(const Eigen::MatrixXd& predictor_matrix, const Eigen::VectorXd& response_vector, double alpha, int num_lambda, int glm_type, int max_iter, double abs_tol, double rel_tol, bool normalize_grad, int k_fold, bool has_intercept, int k_fold_iter);
RcppExport SEXP _RPEGLMEN_fitGlmCv(SEXP predictor_matrixSEXP, SEXP response_vectorSEXP, SEXP alphaSEXP, SEXP num_lambdaSEXP, SEXP glm_typeSEXP, SEXP max_iterSEXP, SEXP abs_tolSEXP, SEXP rel_tolSEXP, SEXP normalize_gradSEXP, SEXP k_foldSEXP, SEXP has_interceptSEXP, SEXP k_fold_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type predictor_matrix(predictor_matrixSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type response_vector(response_vectorSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type num_lambda(num_lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type glm_type(glm_typeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type abs_tol(abs_tolSEXP);
    Rcpp::traits::input_parameter< double >::type rel_tol(rel_tolSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize_grad(normalize_gradSEXP);
    Rcpp::traits::input_parameter< int >::type k_fold(k_foldSEXP);
    Rcpp::traits::input_parameter< bool >::type has_intercept(has_interceptSEXP);
    Rcpp::traits::input_parameter< int >::type k_fold_iter(k_fold_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(fitGlmCv(predictor_matrix, response_vector, alpha, num_lambda, glm_type, max_iter, abs_tol, rel_tol, normalize_grad, k_fold, has_intercept, k_fold_iter));
    return rcpp_result_gen;
END_RCPP
}
// ExpNegativeLogLikelihood_cpp
double ExpNegativeLogLikelihood_cpp(const Eigen::VectorXd& x, const Eigen::MatrixXd& predictor_matrix, const Eigen::VectorXd& response_vector, double alpha, int num_lambda, int glm_type, int max_iter, double abs_tol, double rel_tol, bool normalize_grad, int k_fold);
RcppExport SEXP _RPEGLMEN_ExpNegativeLogLikelihood_cpp(SEXP xSEXP, SEXP predictor_matrixSEXP, SEXP response_vectorSEXP, SEXP alphaSEXP, SEXP num_lambdaSEXP, SEXP glm_typeSEXP, SEXP max_iterSEXP, SEXP abs_tolSEXP, SEXP rel_tolSEXP, SEXP normalize_gradSEXP, SEXP k_foldSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type predictor_matrix(predictor_matrixSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type response_vector(response_vectorSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type num_lambda(num_lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type glm_type(glm_typeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type abs_tol(abs_tolSEXP);
    Rcpp::traits::input_parameter< double >::type rel_tol(rel_tolSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize_grad(normalize_gradSEXP);
    Rcpp::traits::input_parameter< int >::type k_fold(k_foldSEXP);
    rcpp_result_gen = Rcpp::wrap(ExpNegativeLogLikelihood_cpp(x, predictor_matrix, response_vector, alpha, num_lambda, glm_type, max_iter, abs_tol, rel_tol, normalize_grad, k_fold));
    return rcpp_result_gen;
END_RCPP
}
// GradExpNegativeLogLikelihood_cpp
Eigen::VectorXd GradExpNegativeLogLikelihood_cpp(const Eigen::VectorXd& x, const Eigen::MatrixXd& predictor_matrix, const Eigen::VectorXd& response_vector, double alpha, int num_lambda, int glm_type, int max_iter, double abs_tol, double rel_tol, bool normalize_grad, int k_fold);
RcppExport SEXP _RPEGLMEN_GradExpNegativeLogLikelihood_cpp(SEXP xSEXP, SEXP predictor_matrixSEXP, SEXP response_vectorSEXP, SEXP alphaSEXP, SEXP num_lambdaSEXP, SEXP glm_typeSEXP, SEXP max_iterSEXP, SEXP abs_tolSEXP, SEXP rel_tolSEXP, SEXP normalize_gradSEXP, SEXP k_foldSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type predictor_matrix(predictor_matrixSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type response_vector(response_vectorSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type num_lambda(num_lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type glm_type(glm_typeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type abs_tol(abs_tolSEXP);
    Rcpp::traits::input_parameter< double >::type rel_tol(rel_tolSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize_grad(normalize_gradSEXP);
    Rcpp::traits::input_parameter< int >::type k_fold(k_foldSEXP);
    rcpp_result_gen = Rcpp::wrap(GradExpNegativeLogLikelihood_cpp(x, predictor_matrix, response_vector, alpha, num_lambda, glm_type, max_iter, abs_tol, rel_tol, normalize_grad, k_fold));
    return rcpp_result_gen;
END_RCPP
}
// ProxGradDescent_cpp
Eigen::VectorXd ProxGradDescent_cpp(const Eigen::MatrixXd& predictor_matrix, const Eigen::VectorXd& response_vector, double lambda, double alpha, int glm_type, int max_iter, double abs_tol, double rel_tol, bool normalize_grad, int k_fold);
RcppExport SEXP _RPEGLMEN_ProxGradDescent_cpp(SEXP predictor_matrixSEXP, SEXP response_vectorSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP glm_typeSEXP, SEXP max_iterSEXP, SEXP abs_tolSEXP, SEXP rel_tolSEXP, SEXP normalize_gradSEXP, SEXP k_foldSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type predictor_matrix(predictor_matrixSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type response_vector(response_vectorSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type glm_type(glm_typeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type abs_tol(abs_tolSEXP);
    Rcpp::traits::input_parameter< double >::type rel_tol(rel_tolSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize_grad(normalize_gradSEXP);
    Rcpp::traits::input_parameter< int >::type k_fold(k_foldSEXP);
    rcpp_result_gen = Rcpp::wrap(ProxGradDescent_cpp(predictor_matrix, response_vector, lambda, alpha, glm_type, max_iter, abs_tol, rel_tol, normalize_grad, k_fold));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RPEGLMEN_scalarMultiplication", (DL_FUNC) &_RPEGLMEN_scalarMultiplication, 2},
    {"_RPEGLMEN_addReals", (DL_FUNC) &_RPEGLMEN_addReals, 2},
    {"_RPEGLMEN_fitGlmFixed", (DL_FUNC) &_RPEGLMEN_fitGlmFixed, 10},
    {"_RPEGLMEN_fitGlmCv", (DL_FUNC) &_RPEGLMEN_fitGlmCv, 12},
    {"_RPEGLMEN_ExpNegativeLogLikelihood_cpp", (DL_FUNC) &_RPEGLMEN_ExpNegativeLogLikelihood_cpp, 11},
    {"_RPEGLMEN_GradExpNegativeLogLikelihood_cpp", (DL_FUNC) &_RPEGLMEN_GradExpNegativeLogLikelihood_cpp, 11},
    {"_RPEGLMEN_ProxGradDescent_cpp", (DL_FUNC) &_RPEGLMEN_ProxGradDescent_cpp, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_RPEGLMEN(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
