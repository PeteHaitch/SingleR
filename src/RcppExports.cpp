// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// find_classic_markers
Rcpp::List find_classic_markers(int nlabels, int ngenes, Rcpp::List labels, Rcpp::List ref, int de_n, int nthreads);
RcppExport SEXP _SingleR_find_classic_markers(SEXP nlabelsSEXP, SEXP ngenesSEXP, SEXP labelsSEXP, SEXP refSEXP, SEXP de_nSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type nlabels(nlabelsSEXP);
    Rcpp::traits::input_parameter< int >::type ngenes(ngenesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type labels(labelsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type ref(refSEXP);
    Rcpp::traits::input_parameter< int >::type de_n(de_nSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(find_classic_markers(nlabels, ngenes, labels, ref, de_n, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// integrate_build
SEXP integrate_build(Rcpp::IntegerVector test_features, Rcpp::List references, Rcpp::List ref_ids, Rcpp::List labels, Rcpp::List prebuilt, int nthreads);
RcppExport SEXP _SingleR_integrate_build(SEXP test_featuresSEXP, SEXP referencesSEXP, SEXP ref_idsSEXP, SEXP labelsSEXP, SEXP prebuiltSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type test_features(test_featuresSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type references(referencesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type ref_ids(ref_idsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type labels(labelsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type prebuilt(prebuiltSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(integrate_build(test_features, references, ref_ids, labels, prebuilt, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// integrate_run
SEXP integrate_run(Rcpp::RObject test, Rcpp::List results, SEXP integrated_build, double quantile, int nthreads);
RcppExport SEXP _SingleR_integrate_run(SEXP testSEXP, SEXP resultsSEXP, SEXP integrated_buildSEXP, SEXP quantileSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type test(testSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type results(resultsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type integrated_build(integrated_buildSEXP);
    Rcpp::traits::input_parameter< double >::type quantile(quantileSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(integrate_run(test, results, integrated_build, quantile, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// prebuild
SEXP prebuild(Rcpp::RObject ref, Rcpp::IntegerVector labels, Rcpp::List markers, bool approximate, int nthreads);
RcppExport SEXP _SingleR_prebuild(SEXP refSEXP, SEXP labelsSEXP, SEXP markersSEXP, SEXP approximateSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type ref(refSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type labels(labelsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type markers(markersSEXP);
    Rcpp::traits::input_parameter< bool >::type approximate(approximateSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(prebuild(ref, labels, markers, approximate, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// get_subset
Rcpp::IntegerVector get_subset(SEXP built);
RcppExport SEXP _SingleR_get_subset(SEXP builtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type built(builtSEXP);
    rcpp_result_gen = Rcpp::wrap(get_subset(built));
    return rcpp_result_gen;
END_RCPP
}
// is_valid_built
Rcpp::LogicalVector is_valid_built(SEXP built);
RcppExport SEXP _SingleR_is_valid_built(SEXP builtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< SEXP >::type built(builtSEXP);
    rcpp_result_gen = Rcpp::wrap(is_valid_built(built));
    return rcpp_result_gen;
END_RCPP
}
// run
SEXP run(Rcpp::RObject test, Rcpp::IntegerVector subset, SEXP prebuilt, double quantile, bool use_fine_tune, double fine_tune_threshold, int nthreads);
RcppExport SEXP _SingleR_run(SEXP testSEXP, SEXP subsetSEXP, SEXP prebuiltSEXP, SEXP quantileSEXP, SEXP use_fine_tuneSEXP, SEXP fine_tune_thresholdSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type test(testSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type subset(subsetSEXP);
    Rcpp::traits::input_parameter< SEXP >::type prebuilt(prebuiltSEXP);
    Rcpp::traits::input_parameter< double >::type quantile(quantileSEXP);
    Rcpp::traits::input_parameter< bool >::type use_fine_tune(use_fine_tuneSEXP);
    Rcpp::traits::input_parameter< double >::type fine_tune_threshold(fine_tune_thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(run(test, subset, prebuilt, quantile, use_fine_tune, fine_tune_threshold, nthreads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SingleR_find_classic_markers", (DL_FUNC) &_SingleR_find_classic_markers, 6},
    {"_SingleR_integrate_build", (DL_FUNC) &_SingleR_integrate_build, 6},
    {"_SingleR_integrate_run", (DL_FUNC) &_SingleR_integrate_run, 5},
    {"_SingleR_prebuild", (DL_FUNC) &_SingleR_prebuild, 5},
    {"_SingleR_get_subset", (DL_FUNC) &_SingleR_get_subset, 1},
    {"_SingleR_is_valid_built", (DL_FUNC) &_SingleR_is_valid_built, 1},
    {"_SingleR_run", (DL_FUNC) &_SingleR_run, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_SingleR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
