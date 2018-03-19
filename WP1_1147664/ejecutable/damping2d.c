/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "damping2d.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "numgrid.h"
#include "spy.h"

static mxChar _array1_[4] = { 'l', 'o', 'n', 'g' };
static mxArray * _mxarray0_;

static mxChar _array3_[75] = { '|', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
                               '-', '-', '-', '-', '|' };
static mxArray * _mxarray2_;

static mxChar _array5_[75] = { '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', '|' };
static mxArray * _mxarray4_;

static mxChar _array7_[75] = { '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'S', 't',
                               'a', 'b', 'i', 'l', 'i', 'z', 'a', 't', 'i', 'o',
                               'n', ' ', '2', 'D', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', '|' };
static mxArray * _mxarray6_;
static mxArray * _mxarray8_;

static mxChar _array10_[1] = { 'S' };
static mxArray * _mxarray9_;
static mxArray * _mxarray11_;
static mxArray * _mxarray12_;

void InitializeModule_damping2d(void) {
    _mxarray0_ = mclInitializeString(4, _array1_);
    _mxarray2_ = mclInitializeString(75, _array3_);
    _mxarray4_ = mclInitializeString(75, _array5_);
    _mxarray6_ = mclInitializeString(75, _array7_);
    _mxarray8_ = mclInitializeDouble(1.0);
    _mxarray9_ = mclInitializeString(1, _array10_);
    _mxarray11_ = mclInitializeDouble(2.0);
    _mxarray12_ = mclInitializeDouble(0.0);
}

void TerminateModule_damping2d(void) {
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdamping2d(int nargout_,
                            mxArray * a,
                            mxArray * b,
                            mxArray * J,
                            mxArray * dampband,
                            mxArray * axesol);

_mexLocalFunctionTable _local_function_table_damping2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfDamping2d" contains the normal interface for the
 * "damping2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\damping2d.m" (lines 1-35).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfDamping2d(mxArray * a,
                       mxArray * b,
                       mxArray * J,
                       mxArray * dampband,
                       mxArray * axesol) {
    int nargout = 1;
    mxArray * sol = NULL;
    mlfEnterNewContext(0, 5, a, b, J, dampband, axesol);
    sol = Mdamping2d(nargout, a, b, J, dampband, axesol);
    mlfRestorePreviousContext(0, 5, a, b, J, dampband, axesol);
    return mlfReturnValue(sol);
}

/*
 * The function "mlxDamping2d" contains the feval interface for the "damping2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\damping2d.m" (lines 1-35). The feval
 * function calls the implementation version of damping2d through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxDamping2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[5];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: damping2d Line: 1 Column:"
            " 1 The function \"damping2d\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 5) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: damping2d Line: 1 Column:"
            " 1 The function \"damping2d\" was called with m"
            "ore than the declared number of inputs (5)."),
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
      = Mdamping2d(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mlfRestorePreviousContext(
      0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mdamping2d" is the implementation version of the "damping2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\damping2d.m" (lines 1-35). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function sol=damping2d(a,b,J,dampband,axesol)
 */
static mxArray * Mdamping2d(int nargout_,
                            mxArray * a,
                            mxArray * b,
                            mxArray * J,
                            mxArray * dampband,
                            mxArray * axesol) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_damping2d);
    mxArray * sol = NULL;
    mxArray * p = NULL;
    mxArray * G1 = NULL;
    mxArray * G = NULL;
    mxArray * Y = NULL;
    mxArray * X = NULL;
    mxArray * y = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&J);
    mclCopyArray(&dampband);
    mclCopyArray(&axesol);
    /*
     * 
     * 
     * %Commentaires:
     * % % This program feigns the stabilization 1D of a rope of length 1.
     * % There is no associated sub-routine. We use a plan of order 2 at time and in space. 
     * % The initial data ( t=0 ) are in U01 and U11.
     * % There is two parametres alpha and beta:
     * % Alpha=0 no terms of viscosity alpha=1 terms of viscosity 
     * %  beta=0 not of damping beta=1 damping 
     * 
     * format long;
     */
    mlfFormat(_mxarray0_, NULL);
    /*
     * 
     * disp('|-------------------------------------------------------------------------|')
     */
    mlfDisp(_mxarray2_);
    /*
     * disp('|                                                                         |')
     */
    mlfDisp(_mxarray4_);
    /*
     * disp('|                           Stabilization 2D                              |')
     */
    mlfDisp(_mxarray6_);
    /*
     * disp('|                                                                         |')
     */
    mlfDisp(_mxarray4_);
    /*
     * disp('|-------------------------------------------------------------------------|')
     */
    mlfDisp(_mxarray2_);
    /*
     * 
     * h = 1/(J+1);
     */
    mlfAssign(&h, mclMrdivide(_mxarray8_, mclPlus(mclVa(J, "J"), _mxarray8_)));
    /*
     * x = a:h:b;
     */
    mlfAssign(&x, mlfColon(mclVa(a, "a"), mclVv(h, "h"), mclVa(b, "b")));
    /*
     * y=x;
     */
    mlfAssign(&y, mclVv(x, "x"));
    /*
     * 
     * [X,Y] = meshgrid(x,y);
     */
    mlfAssign(
      &X, mlfNMeshgrid(2, &Y, NULL, mclVv(x, "x"), mclVv(y, "y"), NULL));
    /*
     * Y=flipud(Y);
     */
    mlfAssign(&Y, mlfFlipud(mclVv(Y, "Y")));
    /*
     * G = numgrid('S',J+2);
     */
    mlfAssign(&G, mlfNumgrid(_mxarray9_, mclPlus(mclVa(J, "J"), _mxarray11_)));
    /*
     * G1=G;
     */
    mlfAssign(&G1, mclVv(G, "G"));
    /*
     * p=ceil((J-1)*dampband);
     */
    mlfAssign(
      &p,
      mlfCeil(
        mclMtimes(
          mclMinus(mclVa(J, "J"), _mxarray8_), mclVa(dampband, "dampband"))));
    /*
     * G1(p+2:J+1,1:J+1-p)=0;
     */
    mclArrayAssign2(
      &G1,
      _mxarray12_,
      mlfColon(
        mclPlus(mclVv(p, "p"), _mxarray11_),
        mclPlus(mclVa(J, "J"), _mxarray8_),
        NULL),
      mlfColon(
        _mxarray8_,
        mclMinus(mclPlus(mclVa(J, "J"), _mxarray8_), mclVv(p, "p")),
        NULL));
    /*
     * axes(axesol);
     */
    mclAssignAns(&ans, mlfNAxes(0, mclVa(axesol, "axesol"), NULL));
    /*
     * spy(G1);
     */
    mlfSpy(mclVv(G1, "G1"), NULL, NULL);
    /*
     * 
     * sol=1;
     */
    mlfAssign(&sol, _mxarray8_);
    mclValidateOutput(sol, 1, nargout_, "sol", "damping2d");
    mxDestroyArray(ans);
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(y);
    mxDestroyArray(X);
    mxDestroyArray(Y);
    mxDestroyArray(G);
    mxDestroyArray(G1);
    mxDestroyArray(p);
    mxDestroyArray(axesol);
    mxDestroyArray(dampband);
    mxDestroyArray(J);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return sol;
    /*
     * %end
     */
}
