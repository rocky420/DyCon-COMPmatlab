/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "normehm12d.h"
#include "libmatlbm.h"
#include "normeh102d.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

void InitializeModule_normehm12d(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(0.0);
}

void TerminateModule_normehm12d(void) {
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mnormehm12d(int nargout_,
                             mxArray * f,
                             mxArray * D,
                             mxArray * G,
                             mxArray * J,
                             mxArray * x,
                             mxArray * y,
                             mxArray * h);

_mexLocalFunctionTable _local_function_table_normehm12d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNormehm12d" contains the normal interface for the
 * "normehm12d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\normehm12d.m" (lines
 * 1-20). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfNormehm12d(mxArray * f,
                        mxArray * D,
                        mxArray * G,
                        mxArray * J,
                        mxArray * x,
                        mxArray * y,
                        mxArray * h) {
    int nargout = 1;
    mxArray * z = NULL;
    mlfEnterNewContext(0, 7, f, D, G, J, x, y, h);
    z = Mnormehm12d(nargout, f, D, G, J, x, y, h);
    mlfRestorePreviousContext(0, 7, f, D, G, J, x, y, h);
    return mlfReturnValue(z);
}

/*
 * The function "mlxNormehm12d" contains the feval interface for the
 * "normehm12d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\normehm12d.m" (lines
 * 1-20). The feval function calls the implementation version of normehm12d
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxNormehm12d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[7];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: normehm12d Line: 1 Column:"
            " 1 The function \"normehm12d\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 7) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: normehm12d Line: 1 Column"
            ": 1 The function \"normehm12d\" was called with"
            " more than the declared number of inputs (7)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 7 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 7; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    mplhs[0]
      = Mnormehm12d(
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6]);
    mlfRestorePreviousContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mnormehm12d" is the implementation version of the "normehm12d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\normehm12d.m" (lines 1-20). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function z = normehm12d(f,D,G,J,x,y,h)
 */
static mxArray * Mnormehm12d(int nargout_,
                             mxArray * f,
                             mxArray * D,
                             mxArray * G,
                             mxArray * J,
                             mxArray * x,
                             mxArray * y,
                             mxArray * h) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_normehm12d);
    mxArray * z = NULL;
    mxArray * W = NULL;
    mxArray * w = NULL;
    mclCopyArray(&f);
    mclCopyArray(&D);
    mclCopyArray(&G);
    mclCopyArray(&J);
    mclCopyArray(&x);
    mclCopyArray(&y);
    mclCopyArray(&h);
    /*
     * 
     * % Calculate the standard H-1 of the scalar function given 
     * % under matrix shape on the meshing of the square f is given under shape vector
     * 
     * % G meshing
     * % D matrix of the laplacien negatif: D=delsq ( G )
     * 
     * % Normeh-1 ( f ) = normeh10 ( w ) where w solution of
     * % -laplacien ( w ) = f in omega
     * % W = 0 on boundary of omega
     * 
     * % calculate of W
     * f = f*h^2;
     */
    mlfAssign(
      &f, mclMtimes(mclVa(f, "f"), mclMpower(mclVa(h, "h"), _mxarray0_)));
    /*
     * w = D\f;
     */
    mlfAssign(&w, mlfMldivide(mclVa(D, "D"), mclVa(f, "f")));
    /*
     * W = zeros(J+2);
     */
    mlfAssign(&W, mlfZeros(mclPlus(mclVa(J, "J"), _mxarray0_), NULL));
    /*
     * W(G>0) = full(w(G(G>0)));
     */
    mclArrayAssign1(
      &W,
      mlfFull(
        mclArrayRef1(
          mclVv(w, "w"),
          mclArrayRef1(mclVa(G, "G"), mclGt(mclVa(G, "G"), _mxarray1_)))),
      mclGt(mclVa(G, "G"), _mxarray1_));
    /*
     * 
     * % norm h10 of W
     * z = normeh102d(W,J,x,y,h);
     */
    mlfAssign(
      &z,
      mlfNormeh102d(
        mclVv(W, "W"),
        mclVa(J, "J"),
        mclVa(x, "x"),
        mclVa(y, "y"),
        mclVa(h, "h")));
    mclValidateOutput(z, 1, nargout_, "z", "normehm12d");
    mxDestroyArray(w);
    mxDestroyArray(W);
    mxDestroyArray(h);
    mxDestroyArray(y);
    mxDestroyArray(x);
    mxDestroyArray(J);
    mxDestroyArray(G);
    mxDestroyArray(D);
    mxDestroyArray(f);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return z;
}
