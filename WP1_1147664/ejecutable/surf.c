/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "surf.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;
static double _ieee_plusinf_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;

static mxChar _array4_[6] = { 'p', 'a', 'r', 'e', 'n', 't' };
static mxArray * _mxarray3_;
static mxArray * _mxarray5_;

static mxChar _array7_[2] = { 'o', 'n' };
static mxArray * _mxarray6_;

void InitializeModule_surf(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _ieee_plusinf_ = mclGetInf();
    _mxarray1_ = mclInitializeDouble(_ieee_plusinf_);
    _mxarray2_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray3_ = mclInitializeString(6, _array4_);
    _mxarray5_ = mclInitializeDouble(3.0);
    _mxarray6_ = mclInitializeString(2, _array7_);
}

void TerminateModule_surf(void) {
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Msurf(int nargout_, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_surf
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNSurf" contains the nargout interface for the "surf"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\surf.m" (lines
 * 1-78). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNSurf(int nargout, ...) {
    mxArray * varargin = NULL;
    mxArray * h = NULL;
    mlfVarargin(&varargin, nargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    h = Msurf(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfReturnValue(h);
}

/*
 * The function "mlfSurf" contains the normal interface for the "surf"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\surf.m" (lines
 * 1-78). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfSurf(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * h = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    h = Msurf(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfReturnValue(h);
}

/*
 * The function "mlfVSurf" contains the void interface for the "surf"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\surf.m" (lines
 * 1-78). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVSurf(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * h = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    h = Msurf(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxSurf" contains the feval interface for the "surf"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\surf.m" (lines
 * 1-78). The feval function calls the implementation version of surf through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
void mlxSurf(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: surf Line: 1 Column: 1 The function \"surf\""
            " was called with more than the declared number of outputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Msurf(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 0);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "Msurf" is the implementation version of the "surf" M-function
 * from file "c:\matlab6p5\toolbox\matlab\graph3d\surf.m" (lines 1-78). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function h = surf(varargin)
 */
static mxArray * Msurf(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_surf);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * h = NULL;
    mxArray * hh = NULL;
    mxArray * i = NULL;
    mxArray * cax = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&varargin);
    /*
     * %SURF   3-D colored surface.
     * %   SURF(X,Y,Z,C) plots the colored parametric surface defined by
     * %   four matrix arguments.  The view point is specified by VIEW.
     * %   The axis labels are determined by the range of X, Y and Z,
     * %   or by the current setting of AXIS.  The color scaling is determined
     * %   by the range of C, or by the current setting of CAXIS.  The scaled
     * %   color values are used as indices into the current COLORMAP.
     * %   The shading model is set by SHADING.
     * %
     * %   SURF(X,Y,Z) uses C = Z, so color is proportional to surface height.
     * %
     * %   SURF(x,y,Z) and SURF(x,y,Z,C), with two vector arguments replacing
     * %   the first two matrix arguments, must have length(x) = n and
     * %   length(y) = m where [m,n] = size(Z).  In this case, the vertices
     * %   of the surface patches are the triples (x(j), y(i), Z(i,j)).
     * %   Note that x corresponds to the columns of Z and y corresponds to
     * %   the rows.
     * %
     * %   SURF(Z) and SURF(Z,C) use x = 1:n and y = 1:m.  In this case,
     * %   the height, Z, is a single-valued function, defined over a
     * %   geometrically rectangular grid.
     * %
     * %   SURF(...,'PropertyName',PropertyValue,...) sets the value of the 
     * %   specified surface property.  Multiple property values can be set
     * %   with a single statement.
     * %
     * %   SURF returns a handle to a SURFACE object.
     * %
     * %   AXIS, CAXIS, COLORMAP, HOLD, SHADING and VIEW set figure, axes, and 
     * %   surface properties which affect the display of the surface.
     * %
     * %   See also SURFC, SURFL, MESH, SHADING.
     * 
     * %-------------------------------
     * %   Additional details:
     * %
     * %   If the NextPlot axis property is REPLACE (HOLD is off), SURF resets 
     * %   all axis properties, except Position, to their default values
     * %   and deletes all axis children (line, patch, surf, image, and 
     * %   text objects).
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.14 $  $Date: 2002/04/08 22:00:16 $
     * 
     * %   J.N. Little 1-5-92
     * 
     * error(nargchk(1,inf,nargin))
     */
    mlfError(mlfNargchk(_mxarray0_, _mxarray1_, mlfScalar(nargin_)), NULL);
    /*
     * 
     * cax = [];
     */
    mlfAssign(&cax, _mxarray2_);
    /*
     * 
     * 
     * if nargin > 1
     */
    if (nargin_ > 1) {
        /*
         * % try to fetch axes handle from input args
         * for i = 1:length(varargin)
         */
        int v_ = mclForIntStart(1);
        int e_ = mclLengthInt(mclVa(varargin, "varargin"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray2_);
        } else {
            /*
             * if isstr(varargin{i}) & strncmpi(varargin{i}, 'parent', length(varargin{i})) & nargin > i
             * cax = varargin{i+1};
             * break;
             * end
             * end
             */
            for (; ; ) {
                mxArray * a_
                  = mclInitialize(
                      mclFeval(
                        mclValueVarargout(),
                        mlxIsstr,
                        mlfIndexRef(
                          mclVa(varargin, "varargin"), "{?}", mlfScalar(v_)),
                        NULL));
                if (mlfTobool(a_)) {
                    mlfAssign(
                      &a_,
                      mclAnd(
                        a_,
                        mclFeval(
                          mclValueVarargout(),
                          mlxStrncmpi,
                          mlfIndexRef(
                            mclVa(varargin, "varargin"), "{?}", mlfScalar(v_)),
                          _mxarray3_,
                          mclFeval(
                            mclValueVarargout(),
                            mlxLength,
                            mlfIndexRef(
                              mclVa(varargin, "varargin"),
                              "{?}",
                              mlfScalar(v_)),
                            NULL),
                          NULL)));
                } else {
                    mlfAssign(&a_, mlfScalar(0));
                }
                if (mlfTobool(a_)
                    && mlfTobool(mclAnd(a_, mclBoolToArray(nargin_ > v_)))) {
                    mxDestroyArray(a_);
                    mlfAssign(
                      &cax,
                      mlfIndexRef(
                        mclVa(varargin, "varargin"), "{?}", mlfScalar(v_ + 1)));
                    break;
                } else {
                    mxDestroyArray(a_);
                }
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    /*
     * end
     */
    }
    /*
     * 
     * % use nextplot unless user specifed an axes handle
     * if isempty(cax)
     */
    if (mlfTobool(mlfIsempty(mclVv(cax, "cax")))) {
        /*
         * cax = newplot;
         */
        mlfAssign(&cax, mlfNNewplot(1, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * hh = surface(varargin{:});
     */
    mlfAssign(
      &hh,
      mlfNSurface(
        1,
        mlfIndexRef(mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
        NULL));
    /*
     * 
     * if ~ishold(cax)
     */
    if (mclNotBool(mlfIshold(mclVv(cax, "cax")))) {
        /*
         * view(cax,3);
         */
        mclAssignAns(
          &ans,
          mlfNView(0, mclAnsVarargout(), mclVv(cax, "cax"), _mxarray5_, NULL));
        /*
         * grid(cax,'on');
         */
        mlfGrid(mclVv(cax, "cax"), _mxarray6_);
    /*
     * end
     */
    }
    /*
     * 
     * if nargout == 1
     */
    if (nargout_ == 1) {
        /*
         * h = hh;
         */
        mlfAssign(&h, mclVv(hh, "hh"));
    /*
     * end
     */
    }
    mclValidateOutput(h, 1, nargout_, "h", "surf");
    mxDestroyArray(ans);
    mxDestroyArray(cax);
    mxDestroyArray(i);
    mxDestroyArray(hh);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return h;
}
