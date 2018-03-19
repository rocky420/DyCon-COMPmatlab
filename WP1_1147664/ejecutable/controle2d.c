/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "controle2d.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;

void InitializeModule_controle2d(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeDouble(3.0);
    _mxarray3_ = mclInitializeDouble(4.0);
}

void TerminateModule_controle2d(void) {
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mcontrole2d(int nargout_,
                             mxArray * phi1n,
                             mxArray * h,
                             mxArray * J,
                             mxArray * G,
                             mxArray * zone);

_mexLocalFunctionTable _local_function_table_controle2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfControle2d" contains the normal interface for the
 * "controle2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\controle2d.m" (lines
 * 1-122). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfControle2d(mxArray * phi1n,
                        mxArray * h,
                        mxArray * J,
                        mxArray * G,
                        mxArray * zone) {
    int nargout = 1;
    mxArray * c1 = NULL;
    mlfEnterNewContext(0, 5, phi1n, h, J, G, zone);
    c1 = Mcontrole2d(nargout, phi1n, h, J, G, zone);
    mlfRestorePreviousContext(0, 5, phi1n, h, J, G, zone);
    return mlfReturnValue(c1);
}

/*
 * The function "mlxControle2d" contains the feval interface for the
 * "controle2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\controle2d.m" (lines
 * 1-122). The feval function calls the implementation version of controle2d
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxControle2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[5];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: controle2d Line: 1 Column:"
            " 1 The function \"controle2d\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 5) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: controle2d Line: 1 Column"
            ": 1 The function \"controle2d\" was called with"
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
      = Mcontrole2d(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    mlfRestorePreviousContext(
      0, 5, mprhs[0], mprhs[1], mprhs[2], mprhs[3], mprhs[4]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mcontrole2d" is the implementation version of the "controle2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\controle2d.m" (lines 1-122). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [c1] = controle2d(phi1n,h,J,G,zone)
 */
static mxArray * Mcontrole2d(int nargout_,
                             mxArray * phi1n,
                             mxArray * h,
                             mxArray * J,
                             mxArray * G,
                             mxArray * zone) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_controle2d);
    mxArray * c1 = NULL;
    mxArray * psi1n = NULL;
    mxArray * bord4 = NULL;
    mxArray * bord3 = NULL;
    mxArray * bord2 = NULL;
    mxArray * bord1 = NULL;
    mclCopyArray(&phi1n);
    mclCopyArray(&h);
    mclCopyArray(&J);
    mclCopyArray(&G);
    mclCopyArray(&zone);
    /*
     * 
     * % Calculate the control i.e. psi at the edge of the domain in time n*dt
     * 
     * 
     * % Zone gives the edges where is applied the control:
     * % Zone = 1 == > control on all the edges
     * % Zone = 2 == > control on edges y=0 and y=1
     * % Zone = 3 == > control on edges x=0 and y=0
     * 
     * % psi =	mu*dn(phi) + (lambda+mu)*nu*div(phi)
     * % Where dn is the normal by-product and nude the normal unitarian vector 
     * % iIn the edge.
     * 
     * % REMARK: psi is not defined on 4 corners of the domain because
     * % the normal by-product does not exist in these points.
     * % However, the schema diff. finited in 9 points needs of
     * % the value in these 4 points; we thus choose one 
     * %       linear interpolation:  psi(coin11) = (psi(2)+psi(J+3))/2
     * %				psi(coin23) = ( psi((J+2)*J+1)+psi((J+2)*(J+1)+2))/2
     * 
     * %       coin11  BORD2   coin23
     * %          B               B
     * %		   O	   		   O
     * %	       R		       R
     * %		   D			   D
     * %		   1			   3
     * %       coin41  BORD4   coin34
     * 
     * 
     * %********** Determination of 4 edges, excluded corners************
     * 
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
     * psi1n = zeros(J+2);
     */
    mlfAssign(&psi1n, mlfZeros(mclPlus(mclVa(J, "J"), _mxarray0_), NULL));
    /*
     * 
     * 
     * %******************** psi on bord1 ************************
     * % 	 (lambda+2*mu)*(phi1n(EE)-4*phi1n(E))/(2h)
     * %      /
     * % psin = 
     * %      \
     * %	 mu * (phi2n(EE)-4*phi2n(E))/(2h)
     * %**********************************************************
     * 
     * if zone ~=2
     */
    if (mclNeBool(mclVa(zone, "zone"), _mxarray0_)) {
        /*
         * psi1n(bord1) = -phi1n(G(bord1+J+2).*ones(length(bord1),1))/h;
         */
        mclArrayAssign1(
          &psi1n,
          mclMrdivide(
            mclUminus(
              mclArrayRef1(
                mclVa(phi1n, "phi1n"),
                mclTimes(
                  mclArrayRef1(
                    mclVa(G, "G"),
                    mclPlus(
                      mclPlus(mclVv(bord1, "bord1"), mclVa(J, "J")),
                      _mxarray0_)),
                  mlfOnes(
                    mlfScalar(mclLengthInt(mclVv(bord1, "bord1"))),
                    _mxarray1_,
                    NULL)))),
            mclVa(h, "h")),
          mclVv(bord1, "bord1"));
    /*
     * end
     */
    }
    /*
     * 
     * 
     * %******************** psi on bord2 ************************
     * % 	 mu*(phi1n(SS)-4*phi1n(S))/(2h)
     * %      /
     * % psin = 
     * %      \
     * %	 (lambda+2*mu) * (phi2n(SS)-4*phi2n(S))/(2h)
     * %**********************************************************
     * 
     * if zone ~= 3
     */
    if (mclNeBool(mclVa(zone, "zone"), _mxarray2_)) {
        /*
         * psi1n(bord2) =-phi1n(G(bord2+1).*ones(length(bord2),1))/h;
         */
        mclArrayAssign1(
          &psi1n,
          mclMrdivide(
            mclUminus(
              mclArrayRef1(
                mclVa(phi1n, "phi1n"),
                mclTimes(
                  mclArrayRef1(
                    mclVa(G, "G"), mclPlus(mclVv(bord2, "bord2"), _mxarray1_)),
                  mlfOnes(
                    mlfScalar(mclLengthInt(mclVv(bord2, "bord2"))),
                    _mxarray1_,
                    NULL)))),
            mclVa(h, "h")),
          mclVv(bord2, "bord2"));
    /*
     * end
     */
    }
    /*
     * 
     * 
     * %******************** psi on bord3 ************************
     * % 	 (lambda+2*mu)*(phi1n(WW)-4*phi1n(W))/(2h)
     * %      /
     * % psin = 
     * %      \
     * %	 mu * (phi2n(WW)-4*phi2n(W))/(2h)
     * %**********************************************************
     * 
     * if zone == 1 
     */
    if (mclEqBool(mclVa(zone, "zone"), _mxarray1_)) {
        /*
         * psi1n(bord3) = -phi1n(G(bord3-J-2).*ones(length(bord3),1))/h;
         */
        mclArrayAssign1(
          &psi1n,
          mclMrdivide(
            mclUminus(
              mclArrayRef1(
                mclVa(phi1n, "phi1n"),
                mclTimes(
                  mclArrayRef1(
                    mclVa(G, "G"),
                    mclMinus(
                      mclMinus(mclVv(bord3, "bord3"), mclVa(J, "J")),
                      _mxarray0_)),
                  mlfOnes(
                    mlfScalar(mclLengthInt(mclVv(bord3, "bord3"))),
                    _mxarray1_,
                    NULL)))),
            mclVa(h, "h")),
          mclVv(bord3, "bord3"));
    /*
     * end
     */
    }
    /*
     * 
     * 
     * %******************** psi on bord4 ************************
     * % 	 mu*(phi1n(NN)-4*phi1n(N))/(2h)
     * %      /
     * % psin = 
     * %      \
     * %	 (lambda+2*mu) * (phi2n(NN)-4*phi2n(N))/(2h)
     * %***********************************************************
     * 
     * psi1n(bord4) = -phi1n(G(bord4-1).*ones(length(bord4),1))/h;
     */
    mclArrayAssign1(
      &psi1n,
      mclMrdivide(
        mclUminus(
          mclArrayRef1(
            mclVa(phi1n, "phi1n"),
            mclTimes(
              mclArrayRef1(
                mclVa(G, "G"), mclMinus(mclVv(bord4, "bord4"), _mxarray1_)),
              mlfOnes(
                mlfScalar(mclLengthInt(mclVv(bord4, "bord4"))),
                _mxarray1_,
                NULL)))),
        mclVa(h, "h")),
      mclVv(bord4, "bord4"));
    /*
     * 
     * 
     * %******************** treatment of corners ********************
     * %
     * %		coin12 A	B coin23
     * %		  H		    C
     * %
     * %
     * %		  G		    D
     * %		coin41 F	E coin34
     * %
     * % 		psi(coin12) = (psi(A)+psi(H))/2
     * % 		psi(coin23) = (psi(B)+psi(C))/2
     * % 		psi(coin34) = (psi(D)+psi(E))/2
     * % 		psi(coin41) = (psi(F)+psi(G))/2
     * %
     * %***************************************************************
     * 
     * psi1n(1) = ( psi1n(J+3) + psi1n(2) )/2;
     */
    mclIntArrayAssign1(
      &psi1n,
      mclMrdivide(
        mclPlus(
          mclArrayRef1(
            mclVv(psi1n, "psi1n"), mclPlus(mclVa(J, "J"), _mxarray2_)),
          mclIntArrayRef1(mclVv(psi1n, "psi1n"), 2)),
        _mxarray0_),
      1);
    /*
     * psi1n((J+2)*(J+1)+1) = ( psi1n((J+2)*J+1)+psi1n((J+2)*(J+1)+2) )/2;
     */
    mclArrayAssign1(
      &psi1n,
      mclMrdivide(
        mclPlus(
          mclArrayRef1(
            mclVv(psi1n, "psi1n"),
            mclPlus(
              mclMtimes(mclPlus(mclVa(J, "J"), _mxarray0_), mclVa(J, "J")),
              _mxarray1_)),
          mclArrayRef1(
            mclVv(psi1n, "psi1n"),
            mclPlus(
              mclMtimes(
                mclPlus(mclVa(J, "J"), _mxarray0_),
                mclPlus(mclVa(J, "J"), _mxarray1_)),
              _mxarray0_))),
        _mxarray0_),
      mclPlus(
        mclMtimes(
          mclPlus(mclVa(J, "J"), _mxarray0_),
          mclPlus(mclVa(J, "J"), _mxarray1_)),
        _mxarray1_));
    /*
     * psi1n((J+2)^2) = ( psi1n((J+2)^2-1) + psi1n((J+2)*(J+1)) )/2;
     */
    mclArrayAssign1(
      &psi1n,
      mclMrdivide(
        mclPlus(
          mclArrayRef1(
            mclVv(psi1n, "psi1n"),
            mclMinus(
              mclMpower(mclPlus(mclVa(J, "J"), _mxarray0_), _mxarray0_),
              _mxarray1_)),
          mclArrayRef1(
            mclVv(psi1n, "psi1n"),
            mclMtimes(
              mclPlus(mclVa(J, "J"), _mxarray0_),
              mclPlus(mclVa(J, "J"), _mxarray1_)))),
        _mxarray0_),
      mclMpower(mclPlus(mclVa(J, "J"), _mxarray0_), _mxarray0_));
    /*
     * psi1n(J+2) = ( psi1n(J+1) + psi1n(2*J+4) )/2;
     */
    mclArrayAssign1(
      &psi1n,
      mclMrdivide(
        mclPlus(
          mclArrayRef1(
            mclVv(psi1n, "psi1n"), mclPlus(mclVa(J, "J"), _mxarray1_)),
          mclArrayRef1(
            mclVv(psi1n, "psi1n"),
            mclPlus(mclMtimes(_mxarray0_, mclVa(J, "J")), _mxarray3_))),
        _mxarray0_),
      mclPlus(mclVa(J, "J"), _mxarray0_));
    /*
     * 
     * c1 = psi1n;
     */
    mlfAssign(&c1, mclVv(psi1n, "psi1n"));
    mclValidateOutput(c1, 1, nargout_, "c1", "controle2d");
    mxDestroyArray(bord1);
    mxDestroyArray(bord2);
    mxDestroyArray(bord3);
    mxDestroyArray(bord4);
    mxDestroyArray(psi1n);
    mxDestroyArray(zone);
    mxDestroyArray(G);
    mxDestroyArray(J);
    mxDestroyArray(h);
    mxDestroyArray(phi1n);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return c1;
    /*
     * 
     * 
     * 
     * 
     */
}
