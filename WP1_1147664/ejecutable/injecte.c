/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "injecte.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;

void InitializeModule_injecte(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(3.0);
    _mxarray2_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray3_ = mclInitializeDouble(1.0);
}

void TerminateModule_injecte(void) {
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Minjecte(int nargout_,
                          mxArray * wfg,
                          mxArray * G,
                          mxArray * J);

_mexLocalFunctionTable _local_function_table_injecte
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfInjecte" contains the normal interface for the "injecte"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\injecte.m" (lines 1-41). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfInjecte(mxArray * wfg, mxArray * G, mxArray * J) {
    int nargout = 1;
    mxArray * wcg = NULL;
    mlfEnterNewContext(0, 3, wfg, G, J);
    wcg = Minjecte(nargout, wfg, G, J);
    mlfRestorePreviousContext(0, 3, wfg, G, J);
    return mlfReturnValue(wcg);
}

/*
 * The function "mlxInjecte" contains the feval interface for the "injecte"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\injecte.m" (lines 1-41). The feval
 * function calls the implementation version of injecte through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxInjecte(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: injecte Line: 1 Column: "
            "1 The function \"injecte\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: injecte Line: 1 Column:"
            " 1 The function \"injecte\" was called with m"
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
    mplhs[0] = Minjecte(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Minjecte" is the implementation version of the "injecte"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\injecte.m" (lines 1-41). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function wcg = injecte(wfg,G,J)
 */
static mxArray * Minjecte(int nargout_,
                          mxArray * wfg,
                          mxArray * G,
                          mxArray * J) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_injecte);
    mxArray * wcg = NULL;
    mxArray * col = NULL;
    mxArray * p = NULL;
    mclCopyArray(&wfg);
    mclCopyArray(&G);
    mclCopyArray(&J);
    /*
     * 
     * % Injection of w defined on the fine meshing wfg (Fine Grid) on  
     * % unrefined meshing wcg (Coarse Grid).
     * 
     * % J is supposed unpar. wcg consists of wfg calculated on them
     * % hurt whose global number is odd and of which the number of line
     * % and of column are odd, global numbering.
     * 
     * % ATTENTION: wfg must be a a vector; wfg is
     * % a vector containing the values of f on nodes interior
     * 
     * % Number of points on the grid G
     * %a = [1:(J+2)^2]';
     * 
     * % FIRST STAGE: the points of odd number.
     * %b = find(rem(a,2));
     * 
     * % The SECOND STAGE: J is unpar, points are classified in categories two:
     * % points having at the same moment an even number of column and line and
     * % those having at the same moment an number of line and column
     * % it is thus enough to eliminate the even lines
     * 
     * %p = find(rem(rem(b,J+2),2));
     * 
     * % The THIRD STAGE: points on the line J+2 were eliminated. It is necessary to add them
     * %b = [b(p);(J+2:2*J+4:(J+2)^2)'];
     * 
     * % The FOURTH STAGE: p contains the indications, the global numeration of the 
     * % points of the unrefined meshing
     * 
     * %clear p;
     * %p = find(G(b));
     * %wcg = wfg(G(b(p)));
     * 
     * p=( (J+2)*2+3:2:(J+2)*3-2 )';
     */
    mlfAssign(
      &p,
      mlfCtranspose(
        mlfColon(
          mclPlus(
            mclMtimes(mclPlus(mclVa(J, "J"), _mxarray0_), _mxarray0_),
            _mxarray1_),
          _mxarray0_,
          mclMinus(
            mclMtimes(mclPlus(mclVa(J, "J"), _mxarray0_), _mxarray1_),
            _mxarray0_))));
    /*
     * for col=5:2:J
     */
    {
        int v_ = mclForIntStart(5);
        int i_ = 2;
        int e_ = mclForIntIntEnd(v_, i_, mclVa(J, "J"));
        if (e_ == mclIntMin()) {
            mlfAssign(&col, _mxarray2_);
        } else {
            /*
             * p = [p;((J+2)*(col-1)+3:2:(J+2)*col-2)'];
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &p,
                  mlfVertcat(
                    mclVv(p, "p"),
                    mlfCtranspose(
                      mlfColon(
                        mclPlus(
                          mclMtimes(
                            mclPlus(mclVa(J, "J"), _mxarray0_),
                            mlfScalar(v_ - 1)),
                          _mxarray1_),
                        _mxarray0_,
                        mclMinus(
                          mclMtimes(
                            mclPlus(mclVa(J, "J"), _mxarray0_), mlfScalar(v_)),
                          _mxarray0_))),
                    NULL));
                if (v_ == e_) {
                    break;
                }
                v_ += i_;
            }
            mlfAssign(&col, mlfScalar(v_));
        }
    }
    /*
     * 
     * wcg = wfg( G(p).*ones(length(p),1) ); 
     */
    mlfAssign(
      &wcg,
      mclArrayRef1(
        mclVa(wfg, "wfg"),
        mclTimes(
          mclArrayRef1(mclVa(G, "G"), mclVv(p, "p")),
          mlfOnes(mlfScalar(mclLengthInt(mclVv(p, "p"))), _mxarray3_, NULL))));
    mclValidateOutput(wcg, 1, nargout_, "wcg", "injecte");
    mxDestroyArray(p);
    mxDestroyArray(col);
    mxDestroyArray(J);
    mxDestroyArray(G);
    mxDestroyArray(wfg);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return wcg;
}
