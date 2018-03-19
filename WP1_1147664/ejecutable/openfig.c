/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "openfig.h"
#include "libsgl.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "libmwsglm.h"
#include "movegui.h"
static mxArray * _mxarray0_;
static double _ieee_plusinf_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;

static mxChar _array4_[9] = { 'i', 'n', 'v', 'i', 's', 'i', 'b', 'l', 'e' };
static mxArray * _mxarray3_;

static mxChar _array6_[7] = { 'v', 'i', 's', 'i', 'b', 'l', 'e' };
static mxArray * _mxarray5_;

static mxChar _array8_[4] = { 'a', 'u', 't', 'o' };
static mxArray * _mxarray7_;

static mxChar _array10_[54] = { 'T', 'h', 'i', 'r', 'd', ' ', 'i', 'n',
                                'p', 'u', 't', ' ', 'a', 'r', 'g', 'u',
                                'm', 'e', 'n', 't', ' ', 'm', 'u', 's',
                                't', ' ', 'b', 'e', ' ', 0x0027, 'i', 'n',
                                'v', 'i', 's', 'i', 'b', 'l', 'e', 0x0027,
                                ' ', 'o', 'r', ' ', 0x0027, 'v', 'i', 's',
                                'i', 'b', 'l', 'e', 0x0027, '.' };
static mxArray * _mxarray9_;

static mxChar _array12_[3] = { 'n', 'e', 'w' };
static mxArray * _mxarray11_;

static mxChar _array14_[5] = { 'r', 'e', 'u', 's', 'e' };
static mxArray * _mxarray13_;

static mxChar _array16_[47] = { 'S', 'e', 'c', 'o', 'n', 'd', ' ', 'i', 'n',
                                'p', 'u', 't', ' ', 'a', 'r', 'g', 'u', 'm',
                                'e', 'n', 't', ' ', 'm', 'u', 's', 't', ' ',
                                'b', 'e', ' ', 0x0027, 'n', 'e', 'w',
                                0x0027, ' ', 'o', 'r', ' ', 0x0027, 'r',
                                'e', 'u', 's', 'e', 0x0027, '.' };
static mxArray * _mxarray15_;

static mxChar _array18_[4] = { '.', 'f', 'i', 'g' };
static mxArray * _mxarray17_;

static mxChar _array20_[28] = { 'A', 'r', 'g', 'u', 'm', 'e', 'n',
                                't', ' ', 'm', 'u', 's', 't', ' ',
                                'b', 'e', ' ', 'a', ' ', '.', 'f',
                                'i', 'g', ' ', 'f', 'i', 'l', 'e' };
static mxArray * _mxarray19_;

static mxChar _array22_[1] = { '_' };
static mxArray * _mxarray21_;

static mxChar _array24_[1] = { '0' };
static mxArray * _mxarray23_;

static mxChar _array26_[1] = { '9' };
static mxArray * _mxarray25_;

static mxChar _array28_[8] = { 'O', 'p', 'e', 'n', 'F', 'i', 'g', '_' };
static mxArray * _mxarray27_;

static mxChar _array30_[10] = { '_', 'S', 'I', 'N', 'G',
                                'L', 'E', 'T', 'O', 'N' };
static mxArray * _mxarray29_;
static mxArray * _mxarray31_;
static mxArray * _mxarray32_;

static mxChar _array34_[7] = { 'V', 'i', 's', 'i', 'b', 'l', 'e' };
static mxArray * _mxarray33_;

static mxChar _array36_[3] = { 'o', 'f', 'f' };
static mxArray * _mxarray35_;
static mxArray * _mxarray37_;

static mxChar _array39_[20] = { 'D', 'e', 'f', 'a', 'u', 'l', 't',
                                'F', 'i', 'g', 'u', 'r', 'e', 'V',
                                'i', 's', 'i', 'b', 'l', 'e' };
static mxArray * _mxarray38_;

static mxChar _array41_[8] = { 'o', 'n', 's', 'c', 'r', 'e', 'e', 'n' };
static mxArray * _mxarray40_;

static mxChar _array43_[2] = { 'o', 'n' };
static mxArray * _mxarray42_;

void InitializeModule_openfig(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _ieee_plusinf_ = mclGetInf();
    _mxarray1_ = mclInitializeDouble(_ieee_plusinf_);
    _mxarray2_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray3_ = mclInitializeString(9, _array4_);
    _mxarray5_ = mclInitializeString(7, _array6_);
    _mxarray7_ = mclInitializeString(4, _array8_);
    _mxarray9_ = mclInitializeString(54, _array10_);
    _mxarray11_ = mclInitializeString(3, _array12_);
    _mxarray13_ = mclInitializeString(5, _array14_);
    _mxarray15_ = mclInitializeString(47, _array16_);
    _mxarray17_ = mclInitializeString(4, _array18_);
    _mxarray19_ = mclInitializeString(28, _array20_);
    _mxarray21_ = mclInitializeString(1, _array22_);
    _mxarray23_ = mclInitializeString(1, _array24_);
    _mxarray25_ = mclInitializeString(1, _array26_);
    _mxarray27_ = mclInitializeString(8, _array28_);
    _mxarray29_ = mclInitializeString(10, _array30_);
    _mxarray31_ = mclInitializeDouble(31.0);
    _mxarray32_ = mclInitializeDouble(0.0);
    _mxarray33_ = mclInitializeString(7, _array34_);
    _mxarray35_ = mclInitializeString(3, _array36_);
    _mxarray37_ = mclInitializeCell(_mxarray33_);
    _mxarray38_ = mclInitializeString(20, _array39_);
    _mxarray40_ = mclInitializeString(8, _array41_);
    _mxarray42_ = mclInitializeString(2, _array43_);
}

void TerminateModule_openfig(void) {
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mopenfig(int nargout_,
                          mxArray * filename,
                          mxArray * policy,
                          mxArray * visible);

_mexLocalFunctionTable _local_function_table_openfig
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNOpenfig" contains the nargout interface for the "openfig"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graphics\openfig.m" (lines
 * 1-136). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNOpenfig(int nargout,
                      mxArray * filename,
                      mxArray * policy,
                      mxArray * visible) {
    mxArray * figOut = NULL;
    mlfEnterNewContext(0, 3, filename, policy, visible);
    figOut = Mopenfig(nargout, filename, policy, visible);
    mlfRestorePreviousContext(0, 3, filename, policy, visible);
    return mlfReturnValue(figOut);
}

/*
 * The function "mlfOpenfig" contains the normal interface for the "openfig"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graphics\openfig.m" (lines
 * 1-136). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfOpenfig(mxArray * filename, mxArray * policy, mxArray * visible) {
    int nargout = 1;
    mxArray * figOut = NULL;
    mlfEnterNewContext(0, 3, filename, policy, visible);
    figOut = Mopenfig(nargout, filename, policy, visible);
    mlfRestorePreviousContext(0, 3, filename, policy, visible);
    return mlfReturnValue(figOut);
}

/*
 * The function "mlfVOpenfig" contains the void interface for the "openfig"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graphics\openfig.m" (lines
 * 1-136). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVOpenfig(mxArray * filename, mxArray * policy, mxArray * visible) {
    mxArray * figOut = NULL;
    mlfEnterNewContext(0, 3, filename, policy, visible);
    figOut = Mopenfig(0, filename, policy, visible);
    mlfRestorePreviousContext(0, 3, filename, policy, visible);
    mxDestroyArray(figOut);
}

/*
 * The function "mlxOpenfig" contains the feval interface for the "openfig"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graphics\openfig.m" (lines
 * 1-136). The feval function calls the implementation version of openfig
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxOpenfig(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: openfig Line: 1 Column: "
            "1 The function \"openfig\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: openfig Line: 1 Column:"
            " 1 The function \"openfig\" was called with m"
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
    mplhs[0] = Mopenfig(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mopenfig" is the implementation version of the "openfig"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graphics\openfig.m" (lines
 * 1-136). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function figOut = openfig(filename, policy, visible)
 */
static mxArray * Mopenfig(int nargout_,
                          mxArray * filename,
                          mxArray * policy,
                          mxArray * visible) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_openfig);
    int nargin_ = mclNargin(3, filename, policy, visible, NULL);
    mxArray * figOut = NULL;
    mxArray * oldvis = NULL;
    mxArray * fig = NULL;
    mxArray * reusing = NULL;
    mxArray * figs = NULL;
    mxArray * TOKEN = NULL;
    mxArray * flag = NULL;
    mxArray * fname = NULL;
    mxArray * ext = NULL;
    mxArray * name = NULL;
    mxArray * path = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&filename);
    mclCopyArray(&policy);
    mclCopyArray(&visible);
    /*
     * %OPENFIG Open new copy or raise existing copy of saved figure.
     * %    OPENFIG('NAME.FIG','new') opens figure contained in .fig file,
     * %    NAME.FIG, and ensures it is completely on screen.  Specifying the
     * %    .fig extension is optional. Specifying the full path is optional
     * %    as long as the .fig file is on the MATLAB path.
     * %
     * %    If the .fig file contains an invisible figure, OPENFIG returns
     * %    its handle and leaves it invisible.  The caller should make the
     * %    figure visible when appropriate.
     * %
     * %    OPENFIG('NAME.FIG') is the same as OPENFIG('NAME.FIG','new').
     * %
     * %    OPENFIG('NAME.FIG','reuse') opens figure contained in .fig file
     * %    only if a copy is not currently open, otherwise ensures existing
     * %    copy is still completely on screen.  If the existing copy is
     * %    visible, it is also raised above all other windows.
     * %
     * %    OPENFIG(...,'invisible') opens as above, forcing figure invisible.
     * %
     * %    OPENFIG(...,'visible') opens as above, forcing figure visible.
     * %
     * %    F = OPENFIG(...) returns the handle to the figure.
     * %
     * %    See also: OPEN, MOVEGUI, GUIDE, GUIHANDLES, SAVE, SAVEAS.
     * 
     * %    OPENFIG(...,'auto') opens as above, forcing figure invisible on
     * %    creation.  Subsequent calls when the second argument is 'reuse' will
     * %    obey the current visibility setting.
     * %
     * %   Copyright 1984-2002 The MathWorks, Inc.
     * %   $Revision: 1.29 $  $Date: 2002/05/31 21:44:39 $
     * 
     * error(nargchk(1,inf,nargin));
     */
    mlfError(mlfNargchk(_mxarray0_, _mxarray1_, mlfScalar(nargin_)), NULL);
    /*
     * if nargin < 3
     */
    if (nargin_ < 3) {
        /*
         * visible = '';
         */
        mlfAssign(&visible, _mxarray2_);
    /*
     * else
     */
    } else {
        /*
         * visible = lower(visible);
         */
        mlfAssign(&visible, mlfLower(mclVa(visible, "visible")));
    /*
     * end
     */
    }
    /*
     * 
     * if ~isempty(visible) & ~isequal(visible,'invisible') & ~isequal(visible,'visible') & ~isequal(visible,'auto')
     */
    {
        mxArray * a_
          = mclInitialize(mclNot(mlfIsempty(mclVa(visible, "visible"))));
        if (mlfTobool(a_)) {
            mlfAssign(
              &a_,
              mclAnd(
                a_,
                mclNot(
                  mlfIsequal(mclVa(visible, "visible"), _mxarray3_, NULL))));
        } else {
            mlfAssign(&a_, mlfScalar(0));
        }
        if (mlfTobool(a_)) {
            mlfAssign(
              &a_,
              mclAnd(
                a_,
                mclNot(
                  mlfIsequal(mclVa(visible, "visible"), _mxarray5_, NULL))));
        } else {
            mlfAssign(&a_, mlfScalar(0));
        }
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclNot(
                     mlfIsequal(
                       mclVa(visible, "visible"), _mxarray7_, NULL))))) {
            mxDestroyArray(a_);
            /*
             * error('Third input argument must be ''invisible'' or ''visible''.');
             */
            mlfError(_mxarray9_, NULL);
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * if nargin < 2
     */
    if (nargin_ < 2) {
        /*
         * policy = 'new';
         */
        mlfAssign(&policy, _mxarray11_);
    /*
     * end
     */
    }
    /*
     * 
     * if ~isequal(policy,'new') & ~isequal(policy,'reuse')
     */
    {
        mxArray * a_
          = mclInitialize(
              mclNot(mlfIsequal(mclVa(policy, "policy"), _mxarray11_, NULL)));
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclNot(
                     mlfIsequal(
                       mclVa(policy, "policy"), _mxarray13_, NULL))))) {
            mxDestroyArray(a_);
            /*
             * error('Second input argument must be ''new'' or ''reuse''.');
             */
            mlfError(_mxarray15_, NULL);
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * [path, name, ext] = fileparts(filename);
     */
    mlfAssign(
      &path, mlfFileparts(&name, &ext, NULL, mclVa(filename, "filename")));
    /*
     * 
     * if isempty(ext)
     */
    if (mlfTobool(mlfIsempty(mclVv(ext, "ext")))) {
        /*
         * ext = '.fig';
         */
        mlfAssign(&ext, _mxarray17_);
    /*
     * elseif ~isequal(lower(ext), '.fig')
     */
    } else if (mclNotBool(
                 mlfIsequal(mlfLower(mclVv(ext, "ext")), _mxarray17_, NULL))) {
        /*
         * error('Argument must be a .fig file');
         */
        mlfError(_mxarray19_, NULL);
    /*
     * end
     */
    }
    /*
     * 
     * filename = fullfile(path, [name ext]);
     */
    mlfAssign(
      &filename,
      mlfFullfile(
        mclVv(path, "path"),
        mlfHorzcat(mclVv(name, "name"), mclVv(ext, "ext"), NULL),
        NULL));
    /*
     * 
     * % We will use this token, based on the base name of the file
     * % (without path or extension) to track open instances of figure.
     * fname = filename;
     */
    mlfAssign(&fname, mclVa(filename, "filename"));
    /*
     * flag = isletter(fname) | fname == '_' | ('0' <= fname & fname <= '9');
     */
    mlfAssign(
      &flag,
      mclOr(
        mclOr(
          mlfIsletter(mclVv(fname, "fname")),
          mclEq(mclVv(fname, "fname"), _mxarray21_)),
        mclAnd(
          mclLe(_mxarray23_, mclVv(fname, "fname")),
          mclLe(mclVv(fname, "fname"), _mxarray25_))));
    /*
     * if (~all(flag))
     */
    if (mclNotBool(mlfAll(mclVv(flag, "flag"), NULL))) {
        /*
         * fname(find(~flag))=[];
         */
        mlfIndexDelete(
          &fname, "(?)", mlfFind(NULL, NULL, mclNot(mclVv(flag, "flag"))));
    /*
     * end
     */
    }
    /*
     * fname = fliplr(fname);            % file name is more important
     */
    mlfAssign(&fname, mlfFliplr(mclVv(fname, "fname")));
    /*
     * TOKEN = ['OpenFig_' fname '_SINGLETON']; % hide leading kruft
     */
    mlfAssign(
      &TOKEN,
      mlfHorzcat(_mxarray27_, mclVv(fname, "fname"), _mxarray29_, NULL));
    /*
     * TOKEN = TOKEN(1:min(end, 31));
     */
    mlfAssign(
      &TOKEN,
      mclArrayRef1(
        mclVv(TOKEN, "TOKEN"),
        mlfColon(
          _mxarray0_,
          mlfMin(
            NULL,
            mlfEnd(mclVv(TOKEN, "TOKEN"), _mxarray0_, _mxarray0_),
            _mxarray31_,
            NULL),
          NULL)));
    /*
     * 
     * % get the existing list of figures, and prune out stale handles.
     * figs = getappdata(0, TOKEN);
     */
    mlfAssign(&figs, mlfGetappdata(_mxarray32_, mclVv(TOKEN, "TOKEN")));
    /*
     * figs = figs(ishandle(figs));
     */
    mlfAssign(
      &figs,
      mclArrayRef1(mclVv(figs, "figs"), mlfIshandle(mclVv(figs, "figs"))));
    /*
     * 
     * % are we reusing an existing figure?
     * reusing = false;
     */
    mlfAssign(&reusing, mlfFalse(NULL));
    /*
     * 
     * switch policy
     */
    {
        mxArray * v_ = mclInitialize(mclVa(policy, "policy"));
        if (mclSwitchCompare(v_, _mxarray11_)) {
            /*
             * case 'new'
             * % create another one, unconditionally
             * [fig, oldvis] = hgload(filename, struct('Visible','off'));
             */
            mlfAssign(
              &fig,
              mlfNHgload(
                2,
                &oldvis,
                mclVa(filename, "filename"),
                mlfStruct(_mxarray33_, _mxarray35_, NULL),
                NULL));
            /*
             * figs(end + 1) = fig;
             */
            mclArrayAssign1(
              &figs,
              mclVv(fig, "fig"),
              mclPlus(
                mlfEnd(mclVv(figs, "figs"), _mxarray0_, _mxarray0_),
                _mxarray0_));
        /*
         * case 'reuse'
         */
        } else if (mclSwitchCompare(v_, _mxarray13_)) {
            /*
             * % create one only if there are no others
             * if isempty(figs)
             */
            if (mlfTobool(mlfIsempty(mclVv(figs, "figs")))) {
                /*
                 * [figs, oldvis] = hgload(filename, struct('Visible','off'));
                 */
                mlfAssign(
                  &figs,
                  mlfNHgload(
                    2,
                    &oldvis,
                    mclVa(filename, "filename"),
                    mlfStruct(_mxarray33_, _mxarray35_, NULL),
                    NULL));
            /*
             * else
             */
            } else {
                /*
                 * oldvis = get(figs(end),{'Visible'});
                 */
                mlfAssign(
                  &oldvis,
                  mlfNGet(
                    1,
                    mclArrayRef1(
                      mclVv(figs, "figs"),
                      mlfEnd(mclVv(figs, "figs"), _mxarray0_, _mxarray0_)),
                    _mxarray37_,
                    NULL));
                /*
                 * reusing = true;
                 */
                mlfAssign(&reusing, mlfTrue(NULL));
            /*
             * end
             */
            }
            /*
             * % reuse the one at the end of the list:
             * fig = figs(end);
             */
            mlfAssign(
              &fig,
              mclArrayRef1(
                mclVv(figs, "figs"),
                mlfEnd(mclVv(figs, "figs"), _mxarray0_, _mxarray0_)));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * % bubble vis to top
     * oldvis = oldvis{1};
     */
    mlfAssign(&oldvis, mlfIndexRef(mclVv(oldvis, "oldvis"), "{?}", _mxarray0_));
    /*
     * if isstruct(oldvis)
     */
    if (mlfTobool(mlfIsstruct(mclVv(oldvis, "oldvis")))) {
        /*
         * oldvis = oldvis.Visible;
         */
        mlfAssign(&oldvis, mlfIndexRef(mclVv(oldvis, "oldvis"), ".Visible"));
    /*
     * else
     */
    } else {
        /*
         * oldvis = get(0,'DefaultFigureVisible');
         */
        mlfAssign(&oldvis, mlfNGet(1, _mxarray32_, _mxarray38_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * % remember all instances of this figure.
     * setappdata(0, TOKEN, figs);
     */
    mlfSetappdata(
      _mxarray32_, mclVv(TOKEN, "TOKEN"), mclVv(figs, "figs"), NULL);
    /*
     * 
     * % ensure the figure is completely on the screen:
     * movegui(fig, 'onscreen');
     */
    mlfMovegui(mclVv(fig, "fig"), _mxarray40_, NULL);
    /*
     * 
     * % decide whether to adjust visible
     * if isempty(visible)
     */
    if (mlfTobool(mlfIsempty(mclVa(visible, "visible")))) {
        /*
         * set(fig,'Visible',oldvis);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVv(fig, "fig"), _mxarray33_, mclVv(oldvis, "oldvis"), NULL));
    /*
     * else
     */
    } else {
        /*
         * switch visible
         */
        mxArray * v_ = mclInitialize(mclVa(visible, "visible"));
        if (mclSwitchCompare(v_, _mxarray3_)) {
            /*
             * case 'invisible'
             * set(fig,'Visible','off');
             */
            mclAssignAns(
              &ans,
              mlfNSet(0, mclVv(fig, "fig"), _mxarray33_, _mxarray35_, NULL));
        /*
         * case 'visible'
         */
        } else if (mclSwitchCompare(v_, _mxarray5_)) {
            /*
             * set(fig,'Visible','on');
             */
            mclAssignAns(
              &ans,
              mlfNSet(0, mclVv(fig, "fig"), _mxarray33_, _mxarray42_, NULL));
        /*
         * case 'auto'
         */
        } else if (mclSwitchCompare(v_, _mxarray7_)) {
            /*
             * if reusing
             */
            if (mlfTobool(mclVv(reusing, "reusing"))) {
                /*
                 * % if oldvis is 'on', this will raise the figure to the foreground
                 * % it will do nothing if oldvis is 'off'
                 * set(fig,'Visible',oldvis);
                 */
                mclAssignAns(
                  &ans,
                  mlfNSet(
                    0,
                    mclVv(fig, "fig"),
                    _mxarray33_,
                    mclVv(oldvis, "oldvis"),
                    NULL));
            /*
             * else
             */
            } else {
                /*
                 * set(fig,'Visible','off');
                 */
                mclAssignAns(
                  &ans,
                  mlfNSet(
                    0, mclVv(fig, "fig"), _mxarray33_, _mxarray35_, NULL));
            /*
             * end
             */
            }
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    /*
     * end
     */
    }
    /*
     * 
     * if nargout
     */
    if (nargout_ != 0) {
        /*
         * figOut = fig;
         */
        mlfAssign(&figOut, mclVv(fig, "fig"));
    /*
     * end
     */
    }
    mclValidateOutput(figOut, 1, nargout_, "figOut", "openfig");
    mxDestroyArray(ans);
    mxDestroyArray(path);
    mxDestroyArray(name);
    mxDestroyArray(ext);
    mxDestroyArray(fname);
    mxDestroyArray(flag);
    mxDestroyArray(TOKEN);
    mxDestroyArray(figs);
    mxDestroyArray(reusing);
    mxDestroyArray(fig);
    mxDestroyArray(oldvis);
    mxDestroyArray(visible);
    mxDestroyArray(policy);
    mxDestroyArray(filename);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return figOut;
    /*
     * 
     */
}
