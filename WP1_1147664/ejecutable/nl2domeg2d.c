/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "nl2domeg2d.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;

void InitializeModule_nl2domeg2d(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeDouble(3.0);
}

void TerminateModule_nl2domeg2d(void) {
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mnl2domeg2d(int nargout_,
                             mxArray * f,
                             mxArray * X,
                             mxArray * Y,
                             mxArray * J,
                             mxArray * h);

_mexLocalFunctionTable _local_function_table_nl2domeg2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNl2domeg2d" contains the normal interface for the
 * "nl2domeg2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\nl2domeg2d.m" (lines
 * 1-23). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfNl2domeg2d(mxArray * f,
                        mxArray * X,
                        mxArray * Y,
                        mxArray * J,
                        mxArray * h) {
    int nargout = 1;
    mxArray * z = NULL;
    mlfEnterNewContext(0, 5, f, X, Y, J, h);
    z = Mnl2domeg2d(nargout, f, X, Y, J, h);
    mlfRestorePreviousContext(0, 5, f, X, Y, J, h);
    return mlfReturnValue(z);
}

/*
 * The function "mlxNl2domeg2d" contains the feval interface for the
 * "nl2domeg2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\nl2domeg2d.m" (lines
 * 1-23). The feval function calls the implementation version of nl2domeg2d
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxNl2domeg2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[5];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: nl2domeg2d Line: 1 Column:"
            " 1 The function \"nl2domeg2d\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 5) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: nl2domeg2d Line: 1 Column"
            ": 1 The function \"nl2domeg2d\" was called with"
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
      = Mnl2domeg2d(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mlfRestorePreviousContext(
      0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mnl2domeg2d" is the implementation version of the "nl2domeg2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\nl2domeg2d.m" (lines 1-23). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function z = nl2domeg2d(f,X,Y,J,h)
 */
static mxArray * Mnl2domeg2d(int nargout_,
                             mxArray * f,
                             mxArray * X,
                             mxArray * Y,
                             mxArray * J,
                             mxArray * h) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_nl2domeg2d);
    mxArray * z = NULL;
    mxArray * bord = NULL;
    mxArray * bord4 = NULL;
    mxArray * bord3 = NULL;
    mxArray * bord2 = NULL;
    mxArray * bord1 = NULL;
    mclCopyArray(&f);
    mclCopyArray(&X);
    mclCopyArray(&Y);
    mclCopyArray(&J);
    mclCopyArray(&h);
    /*
     * 
     * % Calculate the standard L2 of f on the edge of coeff associated to the 
     * % hurt differents square the domain
     * 
     * % ********** Determination of the edge, the inclusive corners************ 
     * %bord1 = find(X==0 & Y<1 & Y>0);
     * %bord2 = find(Y==1 & X<1 & X>0);
     * %bord3 = find(X==1 & Y>0 & Y<1);
     * %bord4 = find(Y==0 & X>0 & X<1);
     * 
     * bord1 = (2:J+1)';
     */
    mlfAssign(
      &bord1,
      mlfCtranspose(
        mlfColon(_mxarray0_, mclPlus(mclVa(J, "J"), _mxarray1_), NULL)));
    /*
     * bord2 = (J+3:J+2:(J+2)*J+1)';
     */
    mlfAssign(
      &bord2,
      mlfCtranspose(
        mlfColon(
          mclPlus(mclVa(J, "J"), _mxarray2_),
          mclPlus(mclVa(J, "J"), _mxarray0_),
          mclPlus(
            mclMtimes(mclPlus(mclVa(J, "J"), _mxarray0_), mclVa(J, "J")),
            _mxarray1_))));
    /*
     * bord3 = ((J+2)*(J+1)+2:(J+2)^2-1)';
     */
    mlfAssign(
      &bord3,
      mlfCtranspose(
        mlfColon(
          mclPlus(
            mclMtimes(
              mclPlus(mclVa(J, "J"), _mxarray0_),
              mclPlus(mclVa(J, "J"), _mxarray1_)),
            _mxarray0_),
          mclMinus(
            mclMpower(mclPlus(mclVa(J, "J"), _mxarray0_), _mxarray0_),
            _mxarray1_),
          NULL)));
    /*
     * bord4 = ((J+2)*2:J+2:(J+2)*(J+1))';
     */
    mlfAssign(
      &bord4,
      mlfCtranspose(
        mlfColon(
          mclMtimes(mclPlus(mclVa(J, "J"), _mxarray0_), _mxarray0_),
          mclPlus(mclVa(J, "J"), _mxarray0_),
          mclMtimes(
            mclPlus(mclVa(J, "J"), _mxarray0_),
            mclPlus(mclVa(J, "J"), _mxarray1_)))));
    /*
     * 
     * bord = [bord1;bord2;bord3;bord4;1;J+2;(J+2)*(J+1)+1;(J+2)^2];
     */
    mlfAssign(
      &bord,
      mlfVertcat(
        mclVv(bord1, "bord1"),
        mclVv(bord2, "bord2"),
        mclVv(bord3, "bord3"),
        mclVv(bord4, "bord4"),
        _mxarray1_,
        mclPlus(mclVa(J, "J"), _mxarray0_),
        mclPlus(
          mclMtimes(
            mclPlus(mclVa(J, "J"), _mxarray0_),
            mclPlus(mclVa(J, "J"), _mxarray1_)),
          _mxarray1_),
        mclMpower(mclPlus(mclVa(J, "J"), _mxarray0_), _mxarray0_),
        NULL));
    /*
     * 
     * f = f.*f;
     */
    mlfAssign(&f, mclTimes(mclVa(f, "f"), mclVa(f, "f")));
    /*
     * 
     * z = sqrt( h*sum(f(bord)) );
     */
    mlfAssign(
      &z,
      mlfSqrt(
        mclMtimes(
          mclVa(h, "h"),
          mlfSum(mclArrayRef1(mclVa(f, "f"), mclVv(bord, "bord")), NULL))));
    mclValidateOutput(z, 1, nargout_, "z", "nl2domeg2d");
    mxDestroyArray(bord1);
    mxDestroyArray(bord2);
    mxDestroyArray(bord3);
    mxDestroyArray(bord4);
    mxDestroyArray(bord);
    mxDestroyArray(h);
    mxDestroyArray(J);
    mxDestroyArray(Y);
    mxDestroyArray(X);
    mxDestroyArray(f);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return z;
    /*
     * 
     */
}
