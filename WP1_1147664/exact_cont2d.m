function varargout = exact_cont2d(varargin)
% EXACT_CONT2D M-file for exact_cont2d.fig
%      EXACT_CONT2D, by itself, creates a new EXACT_CONT2D or raises the existing
%      singleton*.
%
%      H = EXACT_CONT2D returns the handle to a new EXACT_CONT2D or the handle to
%      the existing singleton*.
%
%      EXACT_CONT2D('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in EXACT_CONT2D.M with the given input arguments.
%
%      EXACT_CONT2D('Property','Value',...) creates a new EXACT_CONT2D or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before exact_cont2d_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to exact_cont2d_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help exact_cont2d

% Last Modified by GUIDE v2.5 16-Aug-2004 11:58:27

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @exact_cont2d_OpeningFcn, ...
                   'gui_OutputFcn',  @exact_cont2d_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin & isstr(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT

% --- Executes just before exact_cont2d is made visible.
function exact_cont2d_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to exact_cont2d (see VARARGIN)


% Method of resolution for fault
handles.file = 'FDS'; 

% Parameters of the program for fault
data.n = 21;
data.mu = 1/sqrt(2);
data.a = 0;
data.b = 1;
data.T = 3.75/sqrt(2);
data.eps=1.e-7;
setappdata(hObject, 'data', data);

% Drawing of the initial data for fault
h=(data.b-data.a)/(data.n+1);
x=[data.a:h:data.b];
[X,Y]=meshgrid(x,x);
Y=flipud(Y);
[u0 u1]=data1_2d(X,Y,data.T);
axes(handles.axes_u0);
mesh(X,Y,u0);
axes(handles.axes_u1);
mesh(X,Y,u1);
% cla
% Variable that it allows to know if the necessary calculation has 
% been realized to draw the solution 
handles.solactual=0;

% Choose default command line output for exact_cont2d
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes exact_cont2d wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = exact_cont2d_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in des_push.
function des_push_Callback(hObject, eventdata, handles)
% hObject    handle to des_push (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% --- Executes on button press in par_push.
function par_push_Callback(hObject, eventdata, handles)
% hObject    handle to par_push (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

data=getappdata(gcbf,'data');
%paramet=[data.n data.l data.a data.b data.T data.ep];
[h1 data.a data.b data.n data.mu data.T data.eps]=paramcont2d(data);
delete(h1);
setappdata(gcbf,'data',data);

% --- Executes during object creation, after setting all properties.
function pop_gra_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pop_gra (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

% --- Executes on selection change in pop_gra.
function pop_gra_Callback(hObject, eventdata, handles)
% hObject    handle to pop_gra (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns pop_gra contents as cell array
%        contents{get(hObject,'Value')} returns selected item from pop_gra

val = get(hObject,'Value');
str = get(hObject, 'String');
switch str{val};
case 'control' % User selects peaks
    axes(handles.axes_sol);
    plot(handles.t,handles.control);
    xlabel('time');
    ylabel('L2 norm of the control');
case 'animation' 
 
    param=getappdata(gcbf,'data');
    %switch handles.file;
    %  case 'FDS' % User selects difcent2d
        solu=animcont_2d(param.a,param.b,param.n,param.mu,param.T,handles.u0,handles.u1,handles.e0,handles.e1,handles.axes_sol);

        %  case 'BI-GRID'     
        %solu=animcont_bigrid2d(param.a,param.b,param.n,param.cfl,param.T,handles.u0,handles.u1,handles.e0,handles.e1,handles.axes_sol);
        %end   
case 'residue' % User selects sinc
    [z1,z2]=size(handles.resid);
    axes(handles.axes_sol);
    plot(1:z1,log10(handles.resid));
    hold on
    plot(1:z1,log10(handles.resid),'o');
    hold off
    xlabel('Iteration');
    ylabel('log10(residu)');
end
guidata(hObject,handles)

% --- Executes on button press in sol_push.
function sol_push_Callback(hObject, eventdata, handles)
% hObject    handle to sol_push (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

param=getappdata(gcbf,'data');

switch handles.file;
case 'FDS' % User selects difcent2d
    
    [control resid t e0 e1]=cont_2d(param.a,param.b,param.n,param.mu,param.T,param.eps,handles.u0,handles.u1);
    axes(handles.axes_sol);
    plot(t,control);
     xlabel('time');
     ylabel('L2 norm of the control');
    handles.solactual=0;
    
case 'BI-GRID' % User selects bigrid2d
    
   [control resid t e0 e1]=cont_bigrid2d(param.a,param.b,param.n,param.mu,param.T,param.eps,handles.u0,handles.u1);
    axes(handles.axes_sol);
    plot(t,control);
     xlabel('time');
     ylabel('L2 norm of the control');
    handles.solactual=0;
case 'MIX' % User selects mix 2d    
   [control resid t e0 e1]=cont_2dmix(param.a,param.b,param.n,param.mu,param.T,param.eps,handles.u0,handles.u1);
   axes(handles.axes_sol);
   plot(t,control);
   xlabel('time');
   ylabel('L2 norm of the control');
   handles.solactual=0;
    
end

handles.t=t;
handles.control=control;
handles.e0=e0;
handles.e1=e1;
handles.resid=resid;
guidata(hObject,handles)

% --- Executes during object creation, after setting all properties.
function edit1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

function edit1_Callback(hObject, eventdata, handles)
% hObject    handle to edit1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit1 as text
%        str2double(get(hObject,'String')) returns contents of edit1 as a double

% --- Executes on button press in push_cambcf.
function push_cambcf_Callback(hObject, eventdata, handles)
% hObject    handle to push_cambcf (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

%edit datos.m

% --- Executes during object creation, after setting all properties.
function pop_in_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pop_in (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

% --- Executes on selection change in pop_in.
function pop_in_Callback(hObject, eventdata, handles)
% hObject    handle to pop_in (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns pop_in contents as cell array
%        contents{get(hObject,'Value')} returns selected item from pop_in

param=getappdata(gcbf,'data');
h=(param.b-param.a)/(param.n+1);
x=[param.a:h:param.b];
[X,Y]=meshgrid(x,x);
Y=flipud(Y);
val = get(hObject,'Value');
str = get(hObject, 'String');
switch str{val};
case 'Example1' % User selects difcent
[u0 u1]=data1_2d(X,Y,param.T);
cla
case 'Example2' 
[u0 u1]=data2_2d(X,Y,param.T); 
cla
case 'Example3'
[u0 u1]=data3_2d(X,Y,param.T);
cla
case 'Example4'
[u0 u1]=data4_2d(X,Y,param.T);
cla
end;

axes(handles.axes_u0);
mesh(X,Y,u0);
axes(handles.axes_u1);
mesh(X,Y,u1);
handles.u0=u0;
handles.u1=u1;
guidata(hObject,handles)

% --- Executes on button press in pushbutton7.
function pushbutton7_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

close


% --- Executes during object creation, after setting all properties.
function popupmenu8_CreateFcn(hObject, eventdata, handles)
% hObject    handle to popupmenu8 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

% --- Executes on selection change in popupmenu8.
function popupmenu8_Callback(hObject, eventdata, handles)
% hObject    handle to popupmenu8 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns popupmenu8 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from popupmenu8

val = get(hObject,'Value');
str = get(hObject, 'String');
switch str{val};
case 'FDS' % User selects peaks
    handles.file = 'FDS';
case 'BI-GRID' % User selects membrane
    handles.file = 'BI-GRID';
end
guidata(hObject,handles)

