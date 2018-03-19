/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "prosca2d.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;
static mxArray * _mxarray4_;

void InitializeModule_prosca2d(void) {
    _mxarray0_ = mclInitializeDouble(0.0);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeDouble(2.0);
    _mxarray3_ = mclInitializeDouble(.5);
    _mxarray4_ = mclInitializeDouble(.25);
}

void TerminateModule_prosca2d(void) {
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mprosca2d(int nargout_,
                           mxArray * u01,
                           mxArray * u11,
                           mxArray * v01,
                           mxArray * v11,
                           mxArray * x,
                           mxArray * J,
                           mxArray * h,
                           mxArray * G,
                           mxArray * X,
                           mxArray * Y);

_mexLocalFunctionTable _local_function_table_prosca2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfProsca2d" contains the normal interface for the "prosca2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\prosca2d.m" (lines 1-26). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfProsca2d(mxArray * u01,
                      mxArray * u11,
                      mxArray * v01,
                      mxArray * v11,
                      mxArray * x,
                      mxArray * J,
                      mxArray * h,
                      mxArray * G,
                      mxArray * X,
                      mxArray * Y) {
    int nargout = 1;
    mxArray * r = NULL;
    mlfEnterNewContext(0, 10, u01, u11, v01, v11, x, J, h, G, X, Y);
    r = Mprosca2d(nargout, u01, u11, v01, v11, x, J, h, G, X, Y);
    mlfRestorePreviousContext(0, 10, u01, u11, v01, v11, x, J, h, G, X, Y);
    return mlfReturnValue(r);
}

/*
 * The function "mlxProsca2d" contains the feval interface for the "prosca2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\prosca2d.m" (lines 1-26). The feval
 * function calls the implementation version of prosca2d through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxProsca2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[10];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: prosca2d Line: 1 Column:"
            " 1 The function \"prosca2d\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 10) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: prosca2d Line: 1 Column:"
            " 1 The function \"prosca2d\" was called with m"
            "ore than the declared number of inputs (10)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 10 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 10; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      10,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9]);
    mplhs[0]
      = Mprosca2d(
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6],
          mprhs[7],
          mprhs[8],
          mprhs[9]);
    mlfRestorePreviousContext(
      0,
      10,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mprosca2d" is the implementation version of the "prosca2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\prosca2d.m" (lines 1-26). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function r = prosca2d(u01,u11,v01,v11,...
 */
static mxArray * Mprosca2d(int nargout_,
                           mxArray * u01,
                           mxArray * u11,
                           mxArray * v01,
                           mxArray * v11,
                           mxArray * x,
                           mxArray * J,
                           mxArray * h,
                           mxArray * G,
                           mxArray * X,
                           mxArray * Y) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_prosca2d);
    mxArray * r = NULL;
    mxArray * z1b = NULL;
    mxArray * z1a = NULL;
    mxArray * dyv01 = NULL;
    mxArray * dxv01 = NULL;
    mxArray * dyu01 = NULL;
    mxArray * dxu01 = NULL;
    mxArray * coin = NULL;
    mxArray * bord = NULL;
    mclCopyArray(&u01);
    mclCopyArray(&u11);
    mclCopyArray(&v01);
    mclCopyArray(&v11);
    mclCopyArray(&x);
    mclCopyArray(&J);
    mclCopyArray(&h);
    mclCopyArray(&G);
    mclCopyArray(&X);
    mclCopyArray(&Y);
    /*
     * x,J,h,G,X,Y);
     * 
     * % Calculate the scalar product in (H10)^2 X (L2)^ 2 by 
     * % the method of trapezes on edges.
     * 
     * % uii and vii is given under matrix shape
     * 
     * bord = find ( X==0 | X==1 | Y==0 | Y==1 );
     */
    mlfAssign(
      &bord,
      mlfFind(
        NULL,
        NULL,
        mclOr(
          mclOr(
            mclOr(
              mclEq(mclVa(X, "X"), _mxarray0_),
              mclEq(mclVa(X, "X"), _mxarray1_)),
            mclEq(mclVa(Y, "Y"), _mxarray0_)),
          mclEq(mclVa(Y, "Y"), _mxarray1_))));
    /*
     * coin = [1 J+2 (J+2)*(J+1)+1 (J+2)^2 ]';
     */
    mlfAssign(
      &coin,
      mlfCtranspose(
        mlfHorzcat(
          _mxarray1_,
          mclPlus(mclVa(J, "J"), _mxarray2_),
          mclPlus(
            mclMtimes(
              mclPlus(mclVa(J, "J"), _mxarray2_),
              mclPlus(mclVa(J, "J"), _mxarray1_)),
            _mxarray1_),
          mclMpower(mclPlus(mclVa(J, "J"), _mxarray2_), _mxarray2_),
          NULL)));
    /*
     * 
     * [dxu01,dyu01] = gradient(u01,x,x);
     */
    mlfGradient(
      mlfVarargout(&dxu01, &dyu01, NULL),
      mclVa(u01, "u01"),
      mclVa(x, "x"),
      mclVa(x, "x"),
      NULL);
    /*
     * [dxv01,dyv01] = gradient(v01,x,x);
     */
    mlfGradient(
      mlfVarargout(&dxv01, &dyv01, NULL),
      mclVa(v01, "v01"),
      mclVa(x, "x"),
      mclVa(x, "x"),
      NULL);
    /*
     * 
     * z1a = h^2 * sum ( dxu01(G>0).* dxv01(G>0) + dyu01(G>0).* dyv01(G>0) );
     */
    mlfAssign(
      &z1a,
      mclMtimes(
        mclMpower(mclVa(h, "h"), _mxarray2_),
        mlfSum(
          mclPlus(
            mclTimes(
              mclArrayRef1(
                mclVv(dxu01, "dxu01"), mclGt(mclVa(G, "G"), _mxarray0_)),
              mclArrayRef1(
                mclVv(dxv01, "dxv01"), mclGt(mclVa(G, "G"), _mxarray0_))),
            mclTimes(
              mclArrayRef1(
                mclVv(dyu01, "dyu01"), mclGt(mclVa(G, "G"), _mxarray0_)),
              mclArrayRef1(
                mclVv(dyv01, "dyv01"), mclGt(mclVa(G, "G"), _mxarray0_)))),
          NULL)));
    /*
     * z1b = h^2 * sum ( u11(G>0).*v11(G>0) );
     */
    mlfAssign(
      &z1b,
      mclMtimes(
        mclMpower(mclVa(h, "h"), _mxarray2_),
        mlfSum(
          mclTimes(
            mclArrayRef1(mclVa(u11, "u11"), mclGt(mclVa(G, "G"), _mxarray0_)),
            mclArrayRef1(mclVa(v11, "v11"), mclGt(mclVa(G, "G"), _mxarray0_))),
          NULL)));
    /*
     * 
     * z1a = z1a + h^2 * 0.5 * sum ( dxu01(bord).* dxv01(bord) + dyu01(bord).* dyv01(bord) );
     */
    mlfAssign(
      &z1a,
      mclPlus(
        mclVv(z1a, "z1a"),
        mclMtimes(
          mclMtimes(mclMpower(mclVa(h, "h"), _mxarray2_), _mxarray3_),
          mlfSum(
            mclPlus(
              mclTimes(
                mclArrayRef1(mclVv(dxu01, "dxu01"), mclVv(bord, "bord")),
                mclArrayRef1(mclVv(dxv01, "dxv01"), mclVv(bord, "bord"))),
              mclTimes(
                mclArrayRef1(mclVv(dyu01, "dyu01"), mclVv(bord, "bord")),
                mclArrayRef1(mclVv(dyv01, "dyv01"), mclVv(bord, "bord")))),
            NULL))));
    /*
     * z1b = z1b + h^2 * 0.5 * sum (u11(bord).*v11(bord) );
     */
    mlfAssign(
      &z1b,
      mclPlus(
        mclVv(z1b, "z1b"),
        mclMtimes(
          mclMtimes(mclMpower(mclVa(h, "h"), _mxarray2_), _mxarray3_),
          mlfSum(
            mclTimes(
              mclArrayRef1(mclVa(u11, "u11"), mclVv(bord, "bord")),
              mclArrayRef1(mclVa(v11, "v11"), mclVv(bord, "bord"))),
            NULL))));
    /*
     * 
     * z1a = z1a - h^2 * 0.25 * sum ( dxu01(coin).* dxv01(coin) + dyu01(coin).* dyv01(coin) );
     */
    mlfAssign(
      &z1a,
      mclMinus(
        mclVv(z1a, "z1a"),
        mclMtimes(
          mclMtimes(mclMpower(mclVa(h, "h"), _mxarray2_), _mxarray4_),
          mlfSum(
            mclPlus(
              mclTimes(
                mclArrayRef1(mclVv(dxu01, "dxu01"), mclVv(coin, "coin")),
                mclArrayRef1(mclVv(dxv01, "dxv01"), mclVv(coin, "coin"))),
              mclTimes(
                mclArrayRef1(mclVv(dyu01, "dyu01"), mclVv(coin, "coin")),
                mclArrayRef1(mclVv(dyv01, "dyv01"), mclVv(coin, "coin")))),
            NULL))));
    /*
     * z1b = z1b - h^2 * 0.25 * sum ( u11(coin).*v11(coin) );
     */
    mlfAssign(
      &z1b,
      mclMinus(
        mclVv(z1b, "z1b"),
        mclMtimes(
          mclMtimes(mclMpower(mclVa(h, "h"), _mxarray2_), _mxarray4_),
          mlfSum(
            mclTimes(
              mclArrayRef1(mclVa(u11, "u11"), mclVv(coin, "coin")),
              mclArrayRef1(mclVa(v11, "v11"), mclVv(coin, "coin"))),
            NULL))));
    /*
     * 
     * r = z1a + z1b ;
     */
    mlfAssign(&r, mclPlus(mclVv(z1a, "z1a"), mclVv(z1b, "z1b")));
    mclValidateOutput(r, 1, nargout_, "r", "prosca2d");
    mxDestroyArray(bord);
    mxDestroyArray(coin);
    mxDestroyArray(dxu01);
    mxDestroyArray(dyu01);
    mxDestroyArray(dxv01);
    mxDestroyArray(dyv01);
    mxDestroyArray(z1a);
    mxDestroyArray(z1b);
    mxDestroyArray(Y);
    mxDestroyArray(X);
    mxDestroyArray(G);
    mxDestroyArray(h);
    mxDestroyArray(J);
    mxDestroyArray(x);
    mxDestroyArray(v11);
    mxDestroyArray(v01);
    mxDestroyArray(u11);
    mxDestroyArray(u01);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return r;
    /*
     * 
     */
}
