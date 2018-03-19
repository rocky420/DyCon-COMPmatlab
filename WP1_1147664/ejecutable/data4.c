/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "data4.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;
static mxArray * _mxarray4_;

void InitializeModule_data4(void) {
    _mxarray0_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray1_ = mclInitializeDouble(.5);
    _mxarray2_ = mclInitializeDouble(2.0);
    _mxarray3_ = mclInitializeDouble(0.0);
    _mxarray4_ = mclInitializeDouble(1.0);
}

void TerminateModule_data4(void) {
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdata4(mxArray * * u1, int nargout_, mxArray * x);

_mexLocalFunctionTable _local_function_table_data4
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfData4" contains the normal interface for the "data4"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data4.m" (lines 1-20). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
mxArray * mlfData4(mxArray * * u1, mxArray * x) {
    int nargout = 1;
    mxArray * u0 = NULL;
    mxArray * u1__ = NULL;
    mlfEnterNewContext(1, 1, u1, x);
    if (u1 != NULL) {
        ++nargout;
    }
    u0 = Mdata4(&u1__, nargout, x);
    mlfRestorePreviousContext(1, 1, u1, x);
    if (u1 != NULL) {
        mclCopyOutputArg(u1, u1__);
    } else {
        mxDestroyArray(u1__);
    }
    return mlfReturnValue(u0);
}

/*
 * The function "mlxData4" contains the feval interface for the "data4"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data4.m" (lines 1-20). The feval
 * function calls the implementation version of data4 through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxData4(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data4 Line: 4 Column: 1 The function \"data4"
            "\" was called with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data4 Line: 4 Column: 1 The function \"data4"
            "\" was called with more than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mdata4(&mplhs[1], nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mdata4" is the implementation version of the "data4"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data4.m" (lines 1-20). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * % Introducir los datos iniciales:
 * % u0=u(0,x)
 * % u1=u_t(0,x)
 * function [u0,u1]=data4(x)
 */
static mxArray * Mdata4(mxArray * * u1, int nargout_, mxArray * x) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_data4);
    mxArray * u0 = NULL;
    mxArray * i = NULL;
    mclCopyArray(&x);
    /*
     * % Ejemplo 2: funcion sombrero
     * for i=1:length(x)
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclLengthInt(mclVa(x, "x"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray0_);
        } else {
            /*
             * if x(i)<.5
             * u1(i)=2*x(i);
             * else
             * u1(i)=0;
             * end
             * end
             */
            for (; ; ) {
                if (mclLtBool(mclIntArrayRef1(mclVa(x, "x"), v_), _mxarray1_)) {
                    mclIntArrayAssign1(
                      u1,
                      mclMtimes(_mxarray2_, mclIntArrayRef1(mclVa(x, "x"), v_)),
                      v_);
                } else {
                    mclIntArrayAssign1(u1, _mxarray3_, v_);
                }
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * 
     * for i=1:length(x)
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclLengthInt(mclVa(x, "x"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray0_);
        } else {
            /*
             * if x(i)<.5
             * u0(i)=2*x(i);
             * else
             * u0(i)=2*(1-x(i));
             * end
             * end
             */
            for (; ; ) {
                if (mclLtBool(mclIntArrayRef1(mclVa(x, "x"), v_), _mxarray1_)) {
                    mclIntArrayAssign1(
                      &u0,
                      mclMtimes(_mxarray2_, mclIntArrayRef1(mclVa(x, "x"), v_)),
                      v_);
                } else {
                    mclIntArrayAssign1(
                      &u0,
                      mclMtimes(
                        _mxarray2_,
                        mclMinus(
                          _mxarray4_, mclIntArrayRef1(mclVa(x, "x"), v_))),
                      v_);
                }
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    mclValidateOutput(u0, 1, nargout_, "u0", "data4");
    mclValidateOutput(*u1, 2, nargout_, "u1", "data4");
    mxDestroyArray(i);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return u0;
}
