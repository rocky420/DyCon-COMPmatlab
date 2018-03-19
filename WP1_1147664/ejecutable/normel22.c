/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "normel22.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

void InitializeModule_normel22(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(1.0);
}

void TerminateModule_normel22(void) {
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mnormel22(int nargout_, mxArray * f, mxArray * J, mxArray * h);

_mexLocalFunctionTable _local_function_table_normel22
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNormel22" contains the normal interface for the "normel22"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\normel22.m" (lines 1-16). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfNormel22(mxArray * f, mxArray * J, mxArray * h) {
    int nargout = 1;
    mxArray * z1 = NULL;
    mlfEnterNewContext(0, 3, f, J, h);
    z1 = Mnormel22(nargout, f, J, h);
    mlfRestorePreviousContext(0, 3, f, J, h);
    return mlfReturnValue(z1);
}

/*
 * The function "mlxNormel22" contains the feval interface for the "normel22"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\normel22.m" (lines 1-16). The feval
 * function calls the implementation version of normel22 through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxNormel22(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: normel22 Line: 1 Column:"
            " 1 The function \"normel22\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: normel22 Line: 1 Column:"
            " 1 The function \"normel22\" was called with m"
            "ore than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mnormel22(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mnormel22" is the implementation version of the "normel22"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\normel22.m" (lines 1-16). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function z1 = normel22(f,J,h)
 */
static mxArray * Mnormel22(int nargout_,
                           mxArray * f,
                           mxArray * J,
                           mxArray * h) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_normel22);
    mxArray * z1 = NULL;
    mxArray * res = NULL;
    mclCopyArray(&f);
    mclCopyArray(&J);
    mclCopyArray(&h);
    /*
     * 
     * % Calcule la norme L2 de la fonction f donnée sous la forme 
     * % d'une matrice sur le carré.
     * 
     * % L'intégration numérique est faite avec la méthode des trapèzes.
     * % diffère de normel2 par le fait qu'elle n'est calculé que sur l'
     * % intérieur du domaine.
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
     * z1 = sqrt(res);
     */
    mlfAssign(&z1, mlfSqrt(mclVv(res, "res")));
    mclValidateOutput(z1, 1, nargout_, "z1", "normel22");
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
