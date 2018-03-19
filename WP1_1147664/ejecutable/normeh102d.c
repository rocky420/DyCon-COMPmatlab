/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "normeh102d.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "normel22d.h"
static mxArray * _mxarray0_;

void InitializeModule_normeh102d(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
}

void TerminateModule_normeh102d(void) {
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mnormeh102d(int nargout_,
                             mxArray * f,
                             mxArray * J,
                             mxArray * x,
                             mxArray * y,
                             mxArray * h);

_mexLocalFunctionTable _local_function_table_normeh102d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNormeh102d" contains the normal interface for the
 * "normeh102d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\normeh102d.m" (lines 1-9).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfNormeh102d(mxArray * f,
                        mxArray * J,
                        mxArray * x,
                        mxArray * y,
                        mxArray * h) {
    int nargout = 1;
    mxArray * z = NULL;
    mlfEnterNewContext(0, 5, f, J, x, y, h);
    z = Mnormeh102d(nargout, f, J, x, y, h);
    mlfRestorePreviousContext(0, 5, f, J, x, y, h);
    return mlfReturnValue(z);
}

/*
 * The function "mlxNormeh102d" contains the feval interface for the
 * "normeh102d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\normeh102d.m" (lines 1-9).
 * The feval function calls the implementation version of normeh102d through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
void mlxNormeh102d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[5];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: normeh102d Line: 1 Column:"
            " 1 The function \"normeh102d\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 5) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: normeh102d Line: 1 Column"
            ": 1 The function \"normeh102d\" was called with"
            " more than the declared number of inputs (5)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 5 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 5; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mplhs[0]
      = Mnormeh102d(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mlfRestorePreviousContext(
      0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mnormeh102d" is the implementation version of the "normeh102d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\normeh102d.m" (lines 1-9). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function z = normeh102d(f,J,x,y,h)
 */
static mxArray * Mnormeh102d(int nargout_,
                             mxArray * f,
                             mxArray * J,
                             mxArray * x,
                             mxArray * y,
                             mxArray * h) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_normeh102d);
    mxArray * z = NULL;
    mxArray * dyf = NULL;
    mxArray * dxf = NULL;
    mclCopyArray(&f);
    mclCopyArray(&J);
    mclCopyArray(&x);
    mclCopyArray(&y);
    mclCopyArray(&h);
    /*
     * 
     * % calcule la norme h10 de la fonction f donée sous la forme
     * % matricielle sur le maillage du carre
     * 
     * % calcule du gradient de f
     * [dxf,dyf] = gradient(f,x,y);
     */
    mlfGradient(
      mlfVarargout(&dxf, &dyf, NULL),
      mclVa(f, "f"),
      mclVa(x, "x"),
      mclVa(y, "y"),
      NULL);
    /*
     * 
     * z = sqrt( normel22d(dxf,J,h)^2+normel22d(dyf,J,h)^2 );
     */
    mlfAssign(
      &z,
      mlfSqrt(
        mclPlus(
          mclMpower(
            mlfNormel22d(NULL, mclVv(dxf, "dxf"), mclVa(J, "J"), mclVa(h, "h")),
            _mxarray0_),
          mclMpower(
            mlfNormel22d(NULL, mclVv(dyf, "dyf"), mclVa(J, "J"), mclVa(h, "h")),
            _mxarray0_))));
    mclValidateOutput(z, 1, nargout_, "z", "normeh102d");
    mxDestroyArray(dxf);
    mxDestroyArray(dyf);
    mxDestroyArray(h);
    mxDestroyArray(y);
    mxDestroyArray(x);
    mxDestroyArray(J);
    mxDestroyArray(f);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return z;
}
