/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "normel2.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;

void InitializeModule_normel2(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeDouble(.5);
}

void TerminateModule_normel2(void) {
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mnormel2(mxArray * * z2,
                          int nargout_,
                          mxArray * f,
                          mxArray * J,
                          mxArray * h);

_mexLocalFunctionTable _local_function_table_normel2
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNormel2" contains the normal interface for the "normel2"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\normel2.m" (lines 1-19). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfNormel2(mxArray * * z2, mxArray * f, mxArray * J, mxArray * h) {
    int nargout = 1;
    mxArray * z1 = NULL;
    mxArray * z2__ = NULL;
    mlfEnterNewContext(1, 3, z2, f, J, h);
    if (z2 != NULL) {
        ++nargout;
    }
    z1 = Mnormel2(&z2__, nargout, f, J, h);
    mlfRestorePreviousContext(1, 3, z2, f, J, h);
    if (z2 != NULL) {
        mclCopyOutputArg(z2, z2__);
    } else {
        mxDestroyArray(z2__);
    }
    return mlfReturnValue(z1);
}

/*
 * The function "mlxNormel2" contains the feval interface for the "normel2"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\normel2.m" (lines 1-19). The feval
 * function calls the implementation version of normel2 through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxNormel2(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: normel2 Line: 1 Column: "
            "1 The function \"normel2\" was called with mor"
            "e than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: normel2 Line: 1 Column:"
            " 1 The function \"normel2\" was called with m"
            "ore than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mnormel2(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mnormel2" is the implementation version of the "normel2"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\normel2.m" (lines 1-19). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [z1,z2] = normel2(f,J,h)
 */
static mxArray * Mnormel2(mxArray * * z2,
                          int nargout_,
                          mxArray * f,
                          mxArray * J,
                          mxArray * h) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_normel2);
    mxArray * z1 = NULL;
    mxArray * res = NULL;
    mclCopyArray(&f);
    mclCopyArray(&J);
    mclCopyArray(&h);
    /*
     * 
     * % Calcule la norme L2 de la fonction f donnée sous la forme 
     * % d'une matrice sur le carré.
     * % L'intégration numérique est faite avec la méthode des trapèzes.
     * % Les poids associés aux différents points du maillage sont les
     * % suivant:	w = 0.25 pour les sommets du carré
     * %		w = 0.5 pour les points du bord du domaine qui
     * %			ne sont pas des sommets du domaine
     * %		w = 1 pour les points intérieurs au domaine
     * 
     * 
     * f = f.^2;
     */
    mlfAssign(&f, mlfPower(mclVa(f, "f"), _mxarray0_));
    /*
     * res = h * sum(f(2:J+1));
     */
    mlfAssign(
      &res,
      mclMtimes(
        mclVa(h, "h"),
        mlfSum(
          mclArrayRef1(
            mclVa(f, "f"),
            mlfColon(_mxarray0_, mclPlus(mclVa(J, "J"), _mxarray1_), NULL)),
          NULL)));
    /*
     * res = res + h * 0.5 * ( f(1) + f(J+2) );
     */
    mlfAssign(
      &res,
      mclPlus(
        mclVv(res, "res"),
        mclMtimes(
          mclMtimes(mclVa(h, "h"), _mxarray2_),
          mclPlus(
            mclIntArrayRef1(mclVa(f, "f"), 1),
            mclArrayRef1(mclVa(f, "f"), mclPlus(mclVa(J, "J"), _mxarray0_))))));
    /*
     * z1 = sqrt(res);
     */
    mlfAssign(&z1, mlfSqrt(mclVv(res, "res")));
    mclValidateOutput(z1, 1, nargout_, "z1", "normel2");
    mclValidateOutput(*z2, 2, nargout_, "z2", "normel2");
    mxDestroyArray(res);
    mxDestroyArray(h);
    mxDestroyArray(J);
    mxDestroyArray(f);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return z1;
    /*
     * 
     * 
     * 
     */
}
