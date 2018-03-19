/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "data3_2d.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;

void InitializeModule_data3_2d(void) {
    _mxarray0_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray1_ = mclInitializeDouble(10.0);
    _mxarray2_ = mclInitializeDouble(1.0);
}

void TerminateModule_data3_2d(void) {
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdata3_2d(mxArray * * U11,
                           int nargout_,
                           mxArray * X,
                           mxArray * Y,
                           mxArray * T);

_mexLocalFunctionTable _local_function_table_data3_2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfData3_2d" contains the normal interface for the "data3_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data3_2d.m" (lines 1-16). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfData3_2d(mxArray * * U11, mxArray * X, mxArray * Y, mxArray * T) {
    int nargout = 1;
    mxArray * U01 = NULL;
    mxArray * U11__ = NULL;
    mlfEnterNewContext(1, 3, U11, X, Y, T);
    if (U11 != NULL) {
        ++nargout;
    }
    U01 = Mdata3_2d(&U11__, nargout, X, Y, T);
    mlfRestorePreviousContext(1, 3, U11, X, Y, T);
    if (U11 != NULL) {
        mclCopyOutputArg(U11, U11__);
    } else {
        mxDestroyArray(U11__);
    }
    return mlfReturnValue(U01);
}

/*
 * The function "mlxData3_2d" contains the feval interface for the "data3_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data3_2d.m" (lines 1-16). The feval
 * function calls the implementation version of data3_2d through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxData3_2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data3_2d Line: 1 Column:"
            " 1 The function \"data3_2d\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data3_2d Line: 1 Column:"
            " 1 The function \"data3_2d\" was called with m"
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
    mplhs[0] = Mdata3_2d(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
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
 * The function "Mdata3_2d" is the implementation version of the "data3_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data3_2d.m" (lines 1-16). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [U01,U11]=data3_2d(X,Y,T)
 */
static mxArray * Mdata3_2d(mxArray * * U11,
                           int nargout_,
                           mxArray * X,
                           mxArray * Y,
                           mxArray * T) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_data3_2d);
    mxArray * U01 = NULL;
    mxArray * j = NULL;
    mxArray * i = NULL;
    mxArray * q = NULL;
    mxArray * p = NULL;
    mclCopyArray(&X);
    mclCopyArray(&Y);
    mclCopyArray(&T);
    /*
     * 
     * [p,q]=size(X);
     */
    mlfSize(mlfVarargout(&p, &q, NULL), mclVa(X, "X"), NULL);
    /*
     * U01=zeros(size(X));
     */
    mlfAssign(
      &U01, mlfZeros(mlfSize(mclValueVarargout(), mclVa(X, "X"), NULL), NULL));
    /*
     * U11=zeros(size(X));
     */
    mlfAssign(
      U11, mlfZeros(mlfSize(mclValueVarargout(), mclVa(X, "X"), NULL), NULL));
    /*
     * for i=1:p
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVv(p, "p"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray0_);
        } else {
            /*
             * for j=1:q
             * U01(i,j)=10*X(1,i)*(1-X(1,i))*Y(p-j+1,1)*(1-Y(p-j+1,1));
             * end
             * end    
             */
            for (; ; ) {
                int v_0 = mclForIntStart(1);
                int e_0 = mclForIntEnd(mclVv(q, "q"));
                if (v_0 > e_0) {
                    mlfAssign(&j, _mxarray0_);
                } else {
                    for (; ; ) {
                        mclIntArrayAssign2(
                          &U01,
                          mclMtimes(
                            mclMtimes(
                              mclMtimes(
                                mclMtimes(
                                  _mxarray1_,
                                  mclIntArrayRef2(mclVa(X, "X"), 1, v_)),
                                mclMinus(
                                  _mxarray2_,
                                  mclIntArrayRef2(mclVa(X, "X"), 1, v_))),
                              mclArrayRef2(
                                mclVa(Y, "Y"),
                                mclPlus(
                                  mclMinus(mclVv(p, "p"), mlfScalar(v_0)),
                                  _mxarray2_),
                                _mxarray2_)),
                            mclMinus(
                              _mxarray2_,
                              mclArrayRef2(
                                mclVa(Y, "Y"),
                                mclPlus(
                                  mclMinus(mclVv(p, "p"), mlfScalar(v_0)),
                                  _mxarray2_),
                                _mxarray2_))),
                          v_,
                          v_0);
                        if (v_0 == e_0) {
                            break;
                        }
                        ++v_0;
                    }
                    mlfAssign(&j, mlfScalar(v_0));
                }
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    mclValidateOutput(U01, 1, nargout_, "U01", "data3_2d");
    mclValidateOutput(*U11, 2, nargout_, "U11", "data3_2d");
    mxDestroyArray(p);
    mxDestroyArray(q);
    mxDestroyArray(i);
    mxDestroyArray(j);
    mxDestroyArray(T);
    mxDestroyArray(Y);
    mxDestroyArray(X);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return U01;
    /*
     * 
     * 
     * %end
     * 
     * 
     */
}
