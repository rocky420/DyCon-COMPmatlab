/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "stab1dcalcul.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "normel2.h"

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
                               'n', ' ', '1', 'D', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                               ' ', ' ', ' ', ' ', '|' };
static mxArray * _mxarray6_;
static mxArray * _mxarray8_;
static mxArray * _mxarray9_;
static mxArray * _mxarray10_;
static mxArray * _mxarray11_;
static mxArray * _mxarray12_;
static mxArray * _mxarray13_;

void InitializeModule_stab1dcalcul(void) {
    _mxarray0_ = mclInitializeString(4, _array1_);
    _mxarray2_ = mclInitializeString(75, _array3_);
    _mxarray4_ = mclInitializeString(75, _array5_);
    _mxarray6_ = mclInitializeString(75, _array7_);
    _mxarray8_ = mclInitializeDouble(1.0);
    _mxarray9_ = mclInitializeDouble(0.0);
    _mxarray10_ = mclInitializeDouble(2.0);
    _mxarray11_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray12_ = mclInitializeDouble(-2.0);
    _mxarray13_ = mclInitializeDouble(.5);
}

void TerminateModule_stab1dcalcul(void) {
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mstab1dcalcul(mxArray * * temps,
                               int nargout_,
                               mxArray * a,
                               mxArray * b,
                               mxArray * J,
                               mxArray * mu,
                               mxArray * T,
                               mxArray * coeffdamp,
                               mxArray * dampa,
                               mxArray * dampb,
                               mxArray * viscos,
                               mxArray * u0,
                               mxArray * u1);

_mexLocalFunctionTable _local_function_table_stab1dcalcul
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfStab1dcalcul" contains the normal interface for the
 * "stab1dcalcul" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\stab1dcalcul.m" (lines
 * 1-125). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfStab1dcalcul(mxArray * * temps,
                          mxArray * a,
                          mxArray * b,
                          mxArray * J,
                          mxArray * mu,
                          mxArray * T,
                          mxArray * coeffdamp,
                          mxArray * dampa,
                          mxArray * dampb,
                          mxArray * viscos,
                          mxArray * u0,
                          mxArray * u1) {
    int nargout = 1;
    mxArray * ener = NULL;
    mxArray * temps__ = NULL;
    mlfEnterNewContext(
      1, 11, temps, a, b, J, mu, T, coeffdamp, dampa, dampb, viscos, u0, u1);
    if (temps != NULL) {
        ++nargout;
    }
    ener
      = Mstab1dcalcul(
          &temps__,
          nargout,
          a,
          b,
          J,
          mu,
          T,
          coeffdamp,
          dampa,
          dampb,
          viscos,
          u0,
          u1);
    mlfRestorePreviousContext(
      1, 11, temps, a, b, J, mu, T, coeffdamp, dampa, dampb, viscos, u0, u1);
    if (temps != NULL) {
        mclCopyOutputArg(temps, temps__);
    } else {
        mxDestroyArray(temps__);
    }
    return mlfReturnValue(ener);
}

/*
 * The function "mlxStab1dcalcul" contains the feval interface for the
 * "stab1dcalcul" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\stab1dcalcul.m" (lines
 * 1-125). The feval function calls the implementation version of stab1dcalcul
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxStab1dcalcul(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[11];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab1dcalcul Line: 1 Column"
            ": 1 The function \"stab1dcalcul\" was called with"
            " more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 11) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: stab1dcalcul Line: 1 Column"
            ": 1 The function \"stab1dcalcul\" was called with"
            " more than the declared number of inputs (11)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 11 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 11; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      11,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9],
      mprhs[10]);
    mplhs[0]
      = Mstab1dcalcul(
          &mplhs[1],
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
          mprhs[9],
          mprhs[10]);
    mlfRestorePreviousContext(
      0,
      11,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9],
      mprhs[10]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mstab1dcalcul" is the implementation version of the
 * "stab1dcalcul" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\stab1dcalcul.m" (lines
 * 1-125). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [ener,temps]=stab1dcalcul(a,b,J,mu,T,coeffdamp,dampa,dampb,viscos,u0,u1)
 */
static mxArray * Mstab1dcalcul(mxArray * * temps,
                               int nargout_,
                               mxArray * a,
                               mxArray * b,
                               mxArray * J,
                               mxArray * mu,
                               mxArray * T,
                               mxArray * coeffdamp,
                               mxArray * dampa,
                               mxArray * dampb,
                               mxArray * viscos,
                               mxArray * u0,
                               mxArray * u1) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_stab1dcalcul);
    mxArray * ener = NULL;
    mxArray * temps2 = NULL;
    mxArray * zt = NULL;
    mxArray * zx = NULL;
    mxArray * df = NULL;
    mxArray * solnp1 = NULL;
    mxArray * Ynp1 = NULL;
    mxArray * soln = NULL;
    mxArray * solnm1 = NULL;
    mxArray * n = NULL;
    mxArray * Yn = NULL;
    mxArray * Ynm1 = NULL;
    mxArray * M3 = NULL;
    mxArray * M2 = NULL;
    mxArray * M1 = NULL;
    mxArray * C = NULL;
    mxArray * p2 = NULL;
    mxArray * p1 = NULL;
    mxArray * M = NULL;
    mxArray * i = NULL;
    mxArray * temps1 = NULL;
    mxArray * U11 = NULL;
    mxArray * U01 = NULL;
    mxArray * r0 = NULL;
    mxArray * N = NULL;
    mxArray * dt = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&J);
    mclCopyArray(&mu);
    mclCopyArray(&T);
    mclCopyArray(&coeffdamp);
    mclCopyArray(&dampa);
    mclCopyArray(&dampb);
    mclCopyArray(&viscos);
    mclCopyArray(&u0);
    mclCopyArray(&u1);
    /*
     * 
     * %Commentaires:
     * % % This program feigns the stabilization 1D of a rope of length 1.
     * % There is no associated sub-routine. We use a plan of order 2 at time and in space. 
     * % The initial data ( t=0 ) are in U01 and U11.
     * % There is two parametres alpha and beta:
     * % Alpha=0 no terms of viscosity alpha=1 terms of viscosity 
     * % beta=0 not of damping beta=1 damping 
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
     * disp('|                           Stabilization 1D                              |')
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
     * %-------------------------------------------------------------------------
     * % PARAMETRIZE FOR THE MESHING
     * %-------------------------------------------------------------------------
     * 
     * h = 1/(J+1);
     */
    mlfAssign(&h, mclMrdivide(_mxarray8_, mclPlus(mclVa(J, "J"), _mxarray8_)));
    /*
     * x = a:h:b;
     */
    mlfAssign(&x, mlfColon(mclVa(a, "a"), mclVv(h, "h"), mclVa(b, "b")));
    /*
     * dt=mu*h;
     */
    mlfAssign(&dt, mclMtimes(mclVa(mu, "mu"), mclVv(h, "h")));
    /*
     * 
     * if viscos ~=0.
     */
    if (mclNeBool(mclVa(viscos, "viscos"), _mxarray9_)) {
        /*
         * viscos=1.;
         */
        mlfAssign(&viscos, _mxarray8_);
    /*
     * end
     */
    }
    /*
     * 
     * %-------------------------------------------------------------------------
     * % TIME T to which the system owes etre stabilized
     * %-------------------------------------------------------------------------
     * 
     * N = ceil(T/dt);
     */
    mlfAssign(&N, mlfCeil(mclMrdivide(mclVa(T, "T"), mclVv(dt, "dt"))));
    /*
     * temps=0:dt:T;
     */
    mlfAssign(temps, mlfColon(_mxarray9_, mclVv(dt, "dt"), mclVa(T, "T")));
    /*
     * 
     * r0 = (dt/h)^2;
     */
    mlfAssign(
      &r0, mclMpower(mclMrdivide(mclVv(dt, "dt"), mclVv(h, "h")), _mxarray10_));
    /*
     * 
     * % Initial data
     * U01=u0';
     */
    mlfAssign(&U01, mlfCtranspose(mclVa(u0, "u0")));
    /*
     * U11=u1';
     */
    mlfAssign(&U11, mlfCtranspose(mclVa(u1, "u1")));
    /*
     * 
     * temps1=cputime;
     */
    mlfAssign(&temps1, mlfCputime());
    /*
     * 
     * %Calcul of the matrix M1, M2, M3;
     * for i=1:J-1
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclMinus(mclVa(J, "J"), _mxarray8_));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray11_);
        } else {
            /*
             * M(i,i)=-2;
             * M(i,i+1)=1;
             * M(i+1,i)=1;
             * end
             */
            for (; ; ) {
                mclIntArrayAssign2(&M, _mxarray12_, v_, v_);
                mclIntArrayAssign2(&M, _mxarray8_, v_, v_ + 1);
                mclIntArrayAssign2(&M, _mxarray8_, v_ + 1, v_);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * M(i+1,i+1)=-2;
     */
    mclArrayAssign2(
      &M,
      _mxarray12_,
      mclPlus(mclVv(i, "i"), _mxarray8_),
      mclPlus(mclVv(i, "i"), _mxarray8_));
    /*
     * M=sparse(M);
     */
    mlfAssign(&M, mlfSparse(mclVv(M, "M"), NULL, NULL, NULL, NULL, NULL));
    /*
     * 
     * % The integer p is bound to the investment of the damping 
     * % C is the matrix bound to the damping 
     * % For example, if the matrix C is the identity, then 
     * % the damping acts everywhere.
     * p1=max(floor(dampa*J),1);
     */
    mlfAssign(
      &p1,
      mlfMax(
        NULL,
        mlfFloor(mclMtimes(mclVa(dampa, "dampa"), mclVa(J, "J"))),
        _mxarray8_,
        NULL));
    /*
     * p2=min(ceil(dampb*J),J);
     */
    mlfAssign(
      &p2,
      mlfMin(
        NULL,
        mlfCeil(mclMtimes(mclVa(dampb, "dampb"), mclVa(J, "J"))),
        mclVa(J, "J"),
        NULL));
    /*
     * C=sparse(zeros(J));
     */
    mlfAssign(
      &C,
      mlfSparse(mlfZeros(mclVa(J, "J"), NULL), NULL, NULL, NULL, NULL, NULL));
    /*
     * 
     * %Damping has the straight of the structure 
     * for i=p1:p2
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(&viter__, mclVv(p1, "p1"), mclVv(p2, "p2"), NULL);
             mclForNext(&viter__, &i);
             ) {
            /*
             * C(i,i)=coeffdamp*dt/2;
             */
            mclArrayAssign2(
              &C,
              mclMrdivide(
                mclMtimes(mclVa(coeffdamp, "coeffdamp"), mclVv(dt, "dt")),
                _mxarray10_),
              mclVv(i, "i"),
              mclVv(i, "i"));
        /*
         * end
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    /*
     * 
     * %Pour a damping in the middle, we would take
     * % for i=(J+1-p)/2:(J+1+p)/2
     * %    C(i,i)=40*dt/2;
     * % end   
     * 
     * %schema classical - damping + term of viscosity
     * 
     * M1 = speye(J)+C-viscos*dt/2*M;
     */
    mlfAssign(
      &M1,
      mclMinus(
        mclPlus(mlfSpeye(mclVa(J, "J"), NULL), mclVv(C, "C")),
        mclMtimes(
          mclMrdivide(
            mclMtimes(mclVa(viscos, "viscos"), mclVv(dt, "dt")), _mxarray10_),
          mclVv(M, "M"))));
    /*
     * M2 = 2*speye(J) + r0*M;
     */
    mlfAssign(
      &M2,
      mclPlus(
        mclMtimes(_mxarray10_, mlfSpeye(mclVa(J, "J"), NULL)),
        mclMtimes(mclVv(r0, "r0"), mclVv(M, "M"))));
    /*
     * M3 = C-speye(J)-viscos*dt/2*M;
     */
    mlfAssign(
      &M3,
      mclMinus(
        mclMinus(mclVv(C, "C"), mlfSpeye(mclVa(J, "J"), NULL)),
        mclMtimes(
          mclMrdivide(
            mclMtimes(mclVa(viscos, "viscos"), mclVv(dt, "dt")), _mxarray10_),
          mclVv(M, "M"))));
    /*
     * 
     * %--------------------------------------------------------------
     * % Initialization of the buckle in time
     * %--------------------------------------------------------------
     * 
     * Ynm1 = U01(2:J+1);
     */
    mlfAssign(
      &Ynm1,
      mclArrayRef1(
        mclVv(U01, "U01"),
        mlfColon(_mxarray10_, mclPlus(mclVa(J, "J"), _mxarray8_), NULL)));
    /*
     * 
     * %****************** Calculation of u in temps dt**********************
     * Yn = Ynm1 + dt*U11(2:J+1);
     */
    mlfAssign(
      &Yn,
      mclPlus(
        mclVv(Ynm1, "Ynm1"),
        mclMtimes(
          mclVv(dt, "dt"),
          mclArrayRef1(
            mclVv(U11, "U11"),
            mlfColon(_mxarray10_, mclPlus(mclVa(J, "J"), _mxarray8_), NULL)))));
    /*
     * %Yn = ( M2*Ynm1 - 2*dt*M3*U11(2:J+1) )/2;
     * % We use one initiation of order 1 at time which gives 
     * % of better resultat than the initiation of order 2 at time.
     * 
     * % We use here the fact M3-M1 = 2Id whom there is viscous and damping 
     * % or not.
     * %PAUSE=0.05;
     * n=0;
     */
    mlfAssign(&n, _mxarray9_);
    /*
     * 
     * solnm1=[0,Ynm1',0];
     */
    mlfAssign(
      &solnm1,
      mlfHorzcat(
        _mxarray9_, mlfCtranspose(mclVv(Ynm1, "Ynm1")), _mxarray9_, NULL));
    /*
     * n=1;
     */
    mlfAssign(&n, _mxarray8_);
    /*
     * soln=[0,Yn',0];
     */
    mlfAssign(
      &soln,
      mlfHorzcat(_mxarray9_, mlfCtranspose(mclVv(Yn, "Yn")), _mxarray9_, NULL));
    /*
     * 
     * ener=zeros(1,N);
     */
    mlfAssign(&ener, mlfZeros(_mxarray8_, mclVv(N, "N"), NULL));
    /*
     * 
     * %-------------------------------------------------------------
     * 
     * % Buckle in time
     * %-------------------------------------------------------------
     * for n = 2:N 
     */
    {
        int v_ = mclForIntStart(2);
        int e_ = mclForIntEnd(mclVv(N, "N"));
        if (v_ > e_) {
            mlfAssign(&n, _mxarray11_);
        } else {
            /*
             * 
             * %******************** Calculation of Y1(n+1) *********************
             * Ynp1 = M1\(M2*Yn + M3*Ynm1) ;
             * 
             * % Preparation of the next passage in the buckle
             * Ynm1 = Yn; Yn = Ynp1;
             * solnp1=[0,Ynp1',0];
             * 
             * %calcul of the energie of the systeme has the moment n-1
             * 
             * [df] = gradient(soln,x);
             * zx = normel2(df,J,h)^2;
             * zt=normel2((solnp1-solnm1)/2/dt,J,h)^2;   
             * ener(n-1)=0.5*(zx+zt);
             * solnm1=soln;
             * soln=solnp1;    
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &Ynp1,
                  mlfMldivide(
                    mclVv(M1, "M1"),
                    mclPlus(
                      mclMtimes(mclVv(M2, "M2"), mclVv(Yn, "Yn")),
                      mclMtimes(mclVv(M3, "M3"), mclVv(Ynm1, "Ynm1")))));
                mlfAssign(&Ynm1, mclVv(Yn, "Yn"));
                mlfAssign(&Yn, mclVv(Ynp1, "Ynp1"));
                mlfAssign(
                  &solnp1,
                  mlfHorzcat(
                    _mxarray9_,
                    mlfCtranspose(mclVv(Ynp1, "Ynp1")),
                    _mxarray9_,
                    NULL));
                mlfAssign(
                  &df,
                  mlfGradient(
                    mclValueVarargout(),
                    mclVv(soln, "soln"),
                    mclVv(x, "x"),
                    NULL));
                mlfAssign(
                  &zx,
                  mclMpower(
                    mlfNormel2(
                      NULL, mclVv(df, "df"), mclVa(J, "J"), mclVv(h, "h")),
                    _mxarray10_));
                mlfAssign(
                  &zt,
                  mclMpower(
                    mlfNormel2(
                      NULL,
                      mclMrdivide(
                        mclMrdivide(
                          mclMinus(
                            mclVv(solnp1, "solnp1"), mclVv(solnm1, "solnm1")),
                          _mxarray10_),
                        mclVv(dt, "dt")),
                      mclVa(J, "J"),
                      mclVv(h, "h")),
                    _mxarray10_));
                mclIntArrayAssign1(
                  &ener,
                  mclMtimes(
                    _mxarray13_, mclPlus(mclVv(zx, "zx"), mclVv(zt, "zt"))),
                  v_ - 1);
                mlfAssign(&solnm1, mclVv(soln, "soln"));
                mlfAssign(&soln, mclVv(solnp1, "solnp1"));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&n, mlfScalar(v_));
        }
    }
    /*
     * temps2=cputime-temps1
     */
    mlfAssign(&temps2, mclMinus(mlfCputime(), mclVv(temps1, "temps1")));
    mclPrintArray(mclVv(temps2, "temps2"), "temps2");
    mclValidateOutput(ener, 1, nargout_, "ener", "stab1dcalcul");
    mclValidateOutput(*temps, 2, nargout_, "temps", "stab1dcalcul");
    mxDestroyArray(ans);
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(dt);
    mxDestroyArray(N);
    mxDestroyArray(r0);
    mxDestroyArray(U01);
    mxDestroyArray(U11);
    mxDestroyArray(temps1);
    mxDestroyArray(i);
    mxDestroyArray(M);
    mxDestroyArray(p1);
    mxDestroyArray(p2);
    mxDestroyArray(C);
    mxDestroyArray(M1);
    mxDestroyArray(M2);
    mxDestroyArray(M3);
    mxDestroyArray(Ynm1);
    mxDestroyArray(Yn);
    mxDestroyArray(n);
    mxDestroyArray(solnm1);
    mxDestroyArray(soln);
    mxDestroyArray(Ynp1);
    mxDestroyArray(solnp1);
    mxDestroyArray(df);
    mxDestroyArray(zx);
    mxDestroyArray(zt);
    mxDestroyArray(temps2);
    mxDestroyArray(u1);
    mxDestroyArray(u0);
    mxDestroyArray(viscos);
    mxDestroyArray(dampb);
    mxDestroyArray(dampa);
    mxDestroyArray(coeffdamp);
    mxDestroyArray(T);
    mxDestroyArray(mu);
    mxDestroyArray(J);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return ener;
    /*
     * 
     * %end
     */
}
