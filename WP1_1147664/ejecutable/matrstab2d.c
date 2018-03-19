/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "matrstab2d.h"
#include "grdiv.h"
#include "grdiv1.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

void InitializeModule_matrstab2d(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(40.0);
}

void TerminateModule_matrstab2d(void) {
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mmatrstab2d(mxArray * * M2,
                             mxArray * * M3,
                             int nargout_,
                             mxArray * G,
                             mxArray * G1,
                             mxArray * J,
                             mxArray * r0,
                             mxArray * dt,
                             mxArray * coeffdamp,
                             mxArray * viscos);

_mexLocalFunctionTable _local_function_table_matrstab2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfMatrstab2d" contains the normal interface for the
 * "matrstab2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\matrstab2d.m" (lines
 * 1-35). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfMatrstab2d(mxArray * * M2,
                        mxArray * * M3,
                        mxArray * G,
                        mxArray * G1,
                        mxArray * J,
                        mxArray * r0,
                        mxArray * dt,
                        mxArray * coeffdamp,
                        mxArray * viscos) {
    int nargout = 1;
    mxArray * M1 = NULL;
    mxArray * M2__ = NULL;
    mxArray * M3__ = NULL;
    mlfEnterNewContext(2, 7, M2, M3, G, G1, J, r0, dt, coeffdamp, viscos);
    if (M2 != NULL) {
        ++nargout;
    }
    if (M3 != NULL) {
        ++nargout;
    }
    M1
      = Mmatrstab2d(
          &M2__, &M3__, nargout, G, G1, J, r0, dt, coeffdamp, viscos);
    mlfRestorePreviousContext(
      2, 7, M2, M3, G, G1, J, r0, dt, coeffdamp, viscos);
    if (M2 != NULL) {
        mclCopyOutputArg(M2, M2__);
    } else {
        mxDestroyArray(M2__);
    }
    if (M3 != NULL) {
        mclCopyOutputArg(M3, M3__);
    } else {
        mxDestroyArray(M3__);
    }
    return mlfReturnValue(M1);
}

/*
 * The function "mlxMatrstab2d" contains the feval interface for the
 * "matrstab2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\matrstab2d.m" (lines
 * 1-35). The feval function calls the implementation version of matrstab2d
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxMatrstab2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[7];
    mxArray * mplhs[3];
    int i;
    if (nlhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: matrstab2d Line: 1 Column:"
            " 1 The function \"matrstab2d\" was called with m"
            "ore than the declared number of outputs (3)."),
          NULL);
    }
    if (nrhs > 7) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: matrstab2d Line: 1 Column"
            ": 1 The function \"matrstab2d\" was called with"
            " more than the declared number of inputs (7)."),
          NULL);
    }
    for (i = 0; i < 3; ++i) {
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
      = Mmatrstab2d(
          &mplhs[1],
          &mplhs[2],
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
    for (i = 1; i < 3 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 3; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mmatrstab2d" is the implementation version of the "matrstab2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\matrstab2d.m" (lines 1-35). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [M1,M2,M3] = matrstab2d(G,G1,J,r0,dt,coeffdamp,viscos)
 */
static mxArray * Mmatrstab2d(mxArray * * M2,
                             mxArray * * M3,
                             int nargout_,
                             mxArray * G,
                             mxArray * G1,
                             mxArray * J,
                             mxArray * r0,
                             mxArray * dt,
                             mxArray * coeffdamp,
                             mxArray * viscos) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_matrstab2d);
    mxArray * M1 = NULL;
    mxArray * C = NULL;
    mxArray * B = NULL;
    mxArray * A = NULL;
    mclCopyArray(&G);
    mclCopyArray(&G1);
    mclCopyArray(&J);
    mclCopyArray(&r0);
    mclCopyArray(&dt);
    mclCopyArray(&coeffdamp);
    mclCopyArray(&viscos);
    /*
     * 
     * % calcule les operateurs lineaires du schema aux diff finies
     * % resolvant le systeme de l'élasticité
     * % trois opérateurs sont calculés:
     * %   A = dxx		B = dyy	C = dxy
     * % M1 et M2 sont des combinaisons lineaires de A,B,C
     * 
     * %-------------------------------------------------------------
     * % Construcion des matrices du systeme lineaire
     * %-------------------------------------------------------------
     * 
     * % A = matrice de dxx
     * % B = matrice de dyy 
     * % C = matrice de dxy
     * 
     * % La matrice de grad(div(u)) = A*u1 + C*u2
     * %							   C*u1 + B*u2
     * 
     * %--------------------------------------------------------
     * % On resout le systeme   M1 Y(n+1) = M2 Y(n) + M3 Y(n-1)
     * %--------------------------------------------------------
     * 
     * [A,B] = grdiv(G);
     */
    mlfAssign(&A, mlfGrdiv(&B, mclVa(G, "G")));
    /*
     * [C] = grdiv1(G1);
     */
    mlfAssign(&C, mlfGrdiv1(mclVa(G1, "G1")));
    /*
     * C=C*dt/2*40;
     */
    mlfAssign(
      &C,
      mclMtimes(
        mclMrdivide(mclMtimes(mclVv(C, "C"), mclVa(dt, "dt")), _mxarray0_),
        _mxarray1_));
    /*
     * 
     * M1 = speye(J^2)+coeffdamp*C-viscos*dt/2*(A+B);
     */
    mlfAssign(
      &M1,
      mclMinus(
        mclPlus(
          mlfSpeye(mclMpower(mclVa(J, "J"), _mxarray0_), NULL),
          mclMtimes(mclVa(coeffdamp, "coeffdamp"), mclVv(C, "C"))),
        mclMtimes(
          mclMrdivide(
            mclMtimes(mclVa(viscos, "viscos"), mclVa(dt, "dt")), _mxarray0_),
          mclPlus(mclVv(A, "A"), mclVv(B, "B")))));
    /*
     * M2 = 2*speye(J^2) + r0*(A+B);
     */
    mlfAssign(
      M2,
      mclPlus(
        mclMtimes(
          _mxarray0_, mlfSpeye(mclMpower(mclVa(J, "J"), _mxarray0_), NULL)),
        mclMtimes(mclVa(r0, "r0"), mclPlus(mclVv(A, "A"), mclVv(B, "B")))));
    /*
     * M3 = coeffdamp*C-speye(J^2)-viscos*dt/2*(A+B);
     */
    mlfAssign(
      M3,
      mclMinus(
        mclMinus(
          mclMtimes(mclVa(coeffdamp, "coeffdamp"), mclVv(C, "C")),
          mlfSpeye(mclMpower(mclVa(J, "J"), _mxarray0_), NULL)),
        mclMtimes(
          mclMrdivide(
            mclMtimes(mclVa(viscos, "viscos"), mclVa(dt, "dt")), _mxarray0_),
          mclPlus(mclVv(A, "A"), mclVv(B, "B")))));
    mclValidateOutput(M1, 1, nargout_, "M1", "matrstab2d");
    mclValidateOutput(*M2, 2, nargout_, "M2", "matrstab2d");
    mclValidateOutput(*M3, 3, nargout_, "M3", "matrstab2d");
    mxDestroyArray(A);
    mxDestroyArray(B);
    mxDestroyArray(C);
    mxDestroyArray(viscos);
    mxDestroyArray(coeffdamp);
    mxDestroyArray(dt);
    mxDestroyArray(r0);
    mxDestroyArray(J);
    mxDestroyArray(G1);
    mxDestroyArray(G);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return M1;
    /*
     * 
     * 
     * 
     * 
     */
}
