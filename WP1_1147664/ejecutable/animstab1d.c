/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "animstab1d.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "title.h"

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

static mxChar _array15_[19] = { 'P', 'o', 's', 'i', 't', 'i', 'o',
                                'n', ' ', 'a', 't', ' ', 't', 'i',
                                'm', 'e', ' ', 't', '=' };
static mxArray * _mxarray14_;

void InitializeModule_animstab1d(void) {
    _mxarray0_ = mclInitializeString(4, _array1_);
    _mxarray2_ = mclInitializeString(75, _array3_);
    _mxarray4_ = mclInitializeString(75, _array5_);
    _mxarray6_ = mclInitializeString(75, _array7_);
    _mxarray8_ = mclInitializeDouble(.0001);
    _mxarray9_ = mclInitializeDouble(1.0);
    _mxarray10_ = mclInitializeDouble(0.0);
    _mxarray11_ = mclInitializeDouble(2.0);
    _mxarray12_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray13_ = mclInitializeDouble(-2.0);
    _mxarray14_ = mclInitializeString(19, _array15_);
}

void TerminateModule_animstab1d(void) {
    mxDestroyArray(_mxarray14_);
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

static mxArray * Manimstab1d(int nargout_,
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
                             mxArray * u1,
                             mxArray * axesol);

_mexLocalFunctionTable _local_function_table_animstab1d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfAnimstab1d" contains the normal interface for the
 * "animstab1d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\animstab1d.m" (lines
 * 1-130). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfAnimstab1d(mxArray * a,
                        mxArray * b,
                        mxArray * J,
                        mxArray * mu,
                        mxArray * T,
                        mxArray * coeffdamp,
                        mxArray * dampa,
                        mxArray * dampb,
                        mxArray * viscos,
                        mxArray * u0,
                        mxArray * u1,
                        mxArray * axesol) {
    int nargout = 1;
    mxArray * sol = NULL;
    mlfEnterNewContext(
      0, 12, a, b, J, mu, T, coeffdamp, dampa, dampb, viscos, u0, u1, axesol);
    sol
      = Manimstab1d(
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
          u1,
          axesol);
    mlfRestorePreviousContext(
      0, 12, a, b, J, mu, T, coeffdamp, dampa, dampb, viscos, u0, u1, axesol);
    return mlfReturnValue(sol);
}

/*
 * The function "mlxAnimstab1d" contains the feval interface for the
 * "animstab1d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\animstab1d.m" (lines
 * 1-130). The feval function calls the implementation version of animstab1d
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxAnimstab1d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[12];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: animstab1d Line: 1 Column:"
            " 1 The function \"animstab1d\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 12) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: animstab1d Line: 1 Column:"
            " 1 The function \"animstab1d\" was called with m"
            "ore than the declared number of inputs (12)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 12 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 12; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      12,
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
      mprhs[10],
      mprhs[11]);
    mplhs[0]
      = Manimstab1d(
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
          mprhs[10],
          mprhs[11]);
    mlfRestorePreviousContext(
      0,
      12,
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
      mprhs[10],
      mprhs[11]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Manimstab1d" is the implementation version of the "animstab1d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\animstab1d.m" (lines 1-130). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function sol=animstab1d(a,b,J,mu,T,coeffdamp,dampa,dampb,viscos,u0,u1,axesol)
 */
static mxArray * Manimstab1d(int nargout_,
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
                             mxArray * u1,
                             mxArray * axesol) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_animstab1d);
    mxArray * sol = NULL;
    mxArray * solnp1 = NULL;
    mxArray * Ynp1 = NULL;
    mxArray * soln = NULL;
    mxArray * text = NULL;
    mxArray * axe = NULL;
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
    mxArray * maxi = NULL;
    mxArray * minimo = NULL;
    mxArray * maximo = NULL;
    mxArray * U11 = NULL;
    mxArray * U01 = NULL;
    mxArray * r0 = NULL;
    mxArray * temps = NULL;
    mxArray * N = NULL;
    mxArray * dt = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mxArray * PAUSE = NULL;
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
    mclCopyArray(&axesol);
    /*
     * 
     * %Commentaires:
     * % This program feigns the stabilization 1D of a rope of length 1.
     * % There is no associated sub-routine. We use a plan of order 2 at time and in space. 
     * % The initial data ( t=0 ) are in U01 and U11.
     * % There is two parametres alpha and beta:
     * % Alpha=0 no terms of viscosity alpha=1 terms of viscosity beta=0 not of damping beta=1 damping 
     * 
     * format long;
     */
    mlfFormat(_mxarray0_, NULL);
    /*
     * %mov = avifile('stab1dexample2.avi')
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
     * PAUSE=0.0001;
     */
    mlfAssign(&PAUSE, _mxarray8_);
    /*
     * h = 1/(J+1);
     */
    mlfAssign(&h, mclMrdivide(_mxarray9_, mclPlus(mclVa(J, "J"), _mxarray9_)));
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
     * %-------------------------------------------------------------------------
     * % TIME T to which the system owes etre stabilized
     * %-------------------------------------------------------------------------
     * 
     * if viscos ~=0.
     */
    if (mclNeBool(mclVa(viscos, "viscos"), _mxarray10_)) {
        /*
         * viscos=1.;
         */
        mlfAssign(&viscos, _mxarray9_);
    /*
     * end
     */
    }
    /*
     * 
     * 
     * N = ceil(T/dt);
     */
    mlfAssign(&N, mlfCeil(mclMrdivide(mclVa(T, "T"), mclVv(dt, "dt"))));
    /*
     * temps=0:dt:T;
     */
    mlfAssign(&temps, mlfColon(_mxarray10_, mclVv(dt, "dt"), mclVa(T, "T")));
    /*
     * 
     * r0 = (dt/h)^2;
     */
    mlfAssign(
      &r0, mclMpower(mclMrdivide(mclVv(dt, "dt"), mclVv(h, "h")), _mxarray11_));
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
     * maximo=max(U01);
     */
    mlfAssign(&maximo, mlfMax(NULL, mclVv(U01, "U01"), NULL, NULL));
    /*
     * minimo=min(U01);
     */
    mlfAssign(&minimo, mlfMin(NULL, mclVv(U01, "U01"), NULL, NULL));
    /*
     * maxi=max(abs(maximo),abs(minimo));
     */
    mlfAssign(
      &maxi,
      mlfMax(
        NULL,
        mlfAbs(mclVv(maximo, "maximo")),
        mlfAbs(mclVv(minimo, "minimo")),
        NULL));
    /*
     * 
     * %Calculation of matrix M1, M2, M3;
     * for i=1:J-1
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclMinus(mclVa(J, "J"), _mxarray9_));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray12_);
        } else {
            /*
             * M(i,i)=-2;
             * M(i,i+1)=1;
             * M(i+1,i)=1;
             * end
             */
            for (; ; ) {
                mclIntArrayAssign2(&M, _mxarray13_, v_, v_);
                mclIntArrayAssign2(&M, _mxarray9_, v_, v_ + 1);
                mclIntArrayAssign2(&M, _mxarray9_, v_ + 1, v_);
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
      _mxarray13_,
      mclPlus(mclVv(i, "i"), _mxarray9_),
      mclPlus(mclVv(i, "i"), _mxarray9_));
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
     * 
     * p1=max(floor(dampa*J),1);
     */
    mlfAssign(
      &p1,
      mlfMax(
        NULL,
        mlfFloor(mclMtimes(mclVa(dampa, "dampa"), mclVa(J, "J"))),
        _mxarray9_,
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
                _mxarray11_),
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
     * %Pour a damping in the medium, one would take
     * % for i=(J+1-p)/2:(J+1+p)/2
     * %    C(i,i)=40*dt/2;
     * % end   
     * 
     * %schema classical author(classic) - damping + term of viscosity
     * 
     * M1 = speye(J)+C-viscos*dt/2*M;
     */
    mlfAssign(
      &M1,
      mclMinus(
        mclPlus(mlfSpeye(mclVa(J, "J"), NULL), mclVv(C, "C")),
        mclMtimes(
          mclMrdivide(
            mclMtimes(mclVa(viscos, "viscos"), mclVv(dt, "dt")), _mxarray11_),
          mclVv(M, "M"))));
    /*
     * M2 = 2*speye(J) + r0*M;
     */
    mlfAssign(
      &M2,
      mclPlus(
        mclMtimes(_mxarray11_, mlfSpeye(mclVa(J, "J"), NULL)),
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
            mclMtimes(mclVa(viscos, "viscos"), mclVv(dt, "dt")), _mxarray11_),
          mclVv(M, "M"))));
    /*
     * 
     * Ynm1 = U01(2:J+1);
     */
    mlfAssign(
      &Ynm1,
      mclArrayRef1(
        mclVv(U01, "U01"),
        mlfColon(_mxarray11_, mclPlus(mclVa(J, "J"), _mxarray9_), NULL)));
    /*
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
            mlfColon(_mxarray11_, mclPlus(mclVa(J, "J"), _mxarray9_), NULL)))));
    /*
     * n=0;
     */
    mlfAssign(&n, _mxarray10_);
    /*
     * 
     * solnm1=[0,Ynm1',0];
     */
    mlfAssign(
      &solnm1,
      mlfHorzcat(
        _mxarray10_, mlfCtranspose(mclVv(Ynm1, "Ynm1")), _mxarray10_, NULL));
    /*
     * axes(axesol);
     */
    mclAssignAns(&ans, mlfNAxes(0, mclVa(axesol, "axesol"), NULL));
    /*
     * %hold off;
     * plot(x,solnm1);
     */
    mclAssignAns(
      &ans, mlfNPlot(0, mclVv(x, "x"), mclVv(solnm1, "solnm1"), NULL));
    /*
     * axe=[a b -maxi maxi];
     */
    mlfAssign(
      &axe,
      mlfHorzcat(
        mclVa(a, "a"),
        mclVa(b, "b"),
        mclUminus(mclVv(maxi, "maxi")),
        mclVv(maxi, "maxi"),
        NULL));
    /*
     * axis(axe);
     */
    mclAssignAns(&ans, mlfNAxis(0, NULL, NULL, mclVv(axe, "axe"), NULL));
    /*
     * 
     * text= ['Position at time t=', num2str((n*dt))];
     */
    mlfAssign(
      &text,
      mlfHorzcat(
        _mxarray14_,
        mlfNum2str(mclMtimes(mclVv(n, "n"), mclVv(dt, "dt")), NULL),
        NULL));
    /*
     * title(text);
     */
    mclAssignAns(&ans, mlfNTitle(0, mclVv(text, "text"), NULL));
    /*
     * pause(PAUSE);
     */
    mlfPause(mclVv(PAUSE, "PAUSE"));
    /*
     * 
     * n=1;
     */
    mlfAssign(&n, _mxarray9_);
    /*
     * soln=[0,Yn',0];
     */
    mlfAssign(
      &soln,
      mlfHorzcat(
        _mxarray10_, mlfCtranspose(mclVv(Yn, "Yn")), _mxarray10_, NULL));
    /*
     * %newplot;
     * %hold off;
     * plot(x,soln);
     */
    mclAssignAns(&ans, mlfNPlot(0, mclVv(x, "x"), mclVv(soln, "soln"), NULL));
    /*
     * axis(axe);
     */
    mclAssignAns(&ans, mlfNAxis(0, NULL, NULL, mclVv(axe, "axe"), NULL));
    /*
     * 
     * text= ['Position at time t=', num2str((n*dt))];
     */
    mlfAssign(
      &text,
      mlfHorzcat(
        _mxarray14_,
        mlfNum2str(mclMtimes(mclVv(n, "n"), mclVv(dt, "dt")), NULL),
        NULL));
    /*
     * title(text);
     */
    mclAssignAns(&ans, mlfNTitle(0, mclVv(text, "text"), NULL));
    /*
     * pause(PAUSE);
     */
    mlfPause(mclVv(PAUSE, "PAUSE"));
    /*
     * 
     * %-------------------------------------------------------------
     * % Bouckle in time
     * %-------------------------------------------------------------
     * for n = 2:N 
     */
    {
        int v_ = mclForIntStart(2);
        int e_ = mclForIntEnd(mclVv(N, "N"));
        if (v_ > e_) {
            mlfAssign(&n, _mxarray12_);
        } else {
            /*
             * Ynp1 = M1\(M2*Yn + M3*Ynm1) ;
             * Ynm1 = Yn; Yn = Ynp1;
             * solnp1=[0,Ynp1',0];
             * %newplot;
             * %hold off;
             * plot(x,solnp1);
             * axis(axe);
             * text= ['Position at time t=', num2str((n*dt))];
             * title(text);
             * pause(PAUSE);
             * solnm1=soln;
             * soln=solnp1;    
             * %   F = getframe(gca);
             * % 	mov = addframe(mov,F);
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
                    _mxarray10_,
                    mlfCtranspose(mclVv(Ynp1, "Ynp1")),
                    _mxarray10_,
                    NULL));
                mclAssignAns(
                  &ans,
                  mlfNPlot(0, mclVv(x, "x"), mclVv(solnp1, "solnp1"), NULL));
                mclAssignAns(
                  &ans, mlfNAxis(0, NULL, NULL, mclVv(axe, "axe"), NULL));
                mlfAssign(
                  &text,
                  mlfHorzcat(
                    _mxarray14_,
                    mlfNum2str(mclMtimes(mlfScalar(v_), mclVv(dt, "dt")), NULL),
                    NULL));
                mclAssignAns(&ans, mlfNTitle(0, mclVv(text, "text"), NULL));
                mlfPause(mclVv(PAUSE, "PAUSE"));
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
     * 
     * sol=1;
     */
    mlfAssign(&sol, _mxarray9_);
    mclValidateOutput(sol, 1, nargout_, "sol", "animstab1d");
    mxDestroyArray(ans);
    mxDestroyArray(PAUSE);
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(dt);
    mxDestroyArray(N);
    mxDestroyArray(temps);
    mxDestroyArray(r0);
    mxDestroyArray(U01);
    mxDestroyArray(U11);
    mxDestroyArray(maximo);
    mxDestroyArray(minimo);
    mxDestroyArray(maxi);
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
    mxDestroyArray(axe);
    mxDestroyArray(text);
    mxDestroyArray(soln);
    mxDestroyArray(Ynp1);
    mxDestroyArray(solnp1);
    mxDestroyArray(axesol);
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
    return sol;
    /*
     * % mov = close(mov); 
     * %end
     */
}
