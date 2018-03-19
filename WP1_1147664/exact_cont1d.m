function varargout = exact_cont1d(varargin)
% EXACT_CONT1D M-file for exact_cont1d.fig
%      EXACT_CONT1D, by itself, creates a new EXACT_CONT1D or raises the existing
%      singleton*.
%
%      H = EXACT_CONT1D returns the handle to a new EXACT_CONT1D or the handle to
%      the existing singleton*.
%
%      EXACT_CONT1D('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in EXACT_CONT1D.M with the given input arguments.
%
%      EXACT_CONT1D('Property','Value',...) creates a new EXACT_CONT1D or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before exact_cont1d_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to exact_cont1d_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help exact_cont1d

% Last Modified by GUIDE v2.5 10-Aug-2004 14:36:13

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @exact_cont1d_OpeningFcn, ...
                   'gui_OutputFcn',  @exact_cont1d_OutputFcn, ...
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


% --- Executes just before exact_cont1d is made visible.
function exact_cont1d_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to exact_cont1d (see VARARGIN)


% Metodo de resolucion por defecto
handles.file = 'difcent'; 

% Parametros del programa por defecto
data.n = 40;
data.mu = 0.9;
data.a = 0;
data.b = 1;
data.T = 2.4;
data.eps=1.e-4;
data.masa=0;
data.beta=0;
data.gamma=1/24;
setappdata(hObject, 'data', data);

% Dibujo de los datos iniciales
h=(data.b-data.a)/(data.n+1);
x=[data.a:h:data.b];
[u0 u1]=data0(x);
axes(handles.axes_u0);
plot(x,u0);
axes(handles.axes_u1);
plot(x,u1);
G=[0 ones(1,data.n) 0];
handles.u0=u0(G>0);
handles.u1=u1(G>0);
guidata(hObject, handles);

% Variable que permite saber si se ha realizado el calculo necesario para
% dibujar la solucion 
handles.solactual=0;

% Choose default command line output for exact_cont1d
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes exact_cont1d wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = exact_cont1d_OutputFcn(hObject, eventdata, handles)
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
[h1 data.n data.mu data.a data.b data.T data.eps data.beta data.gamma data.masa]=parametros(data);
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
  param=getappdata(gcbf,'data');
    axes(handles.axes_sol);
    maximo=max(handles.control);
    minimo=min(handles.control);
    axis([0 param.T minimo maximo]);
    plot(handles.t,handles.control);
    xlabel('time');
    ylabel('control'); 
case 'solution' 
    figure(1)
    param=getappdata(gcbf,'data');
    t2=handles.t(1:end-1)';
    control2=handles.control(1:end-1);
    u02=handles.u0(2:end-1);
    u12=handles.u1(2:end-1);
    if handles.solactual==0
       solu=dibujo_sol(param.n,param.mu,param.a,param.b,t2,control2,u02,u12);
       h=(param.b-param.a)/(param.n+1);
       x=[param.a:h:param.b];
       handles.x=x;
       handles.solu=solu;
       handles.solactual=1;
   end
  %  axes(handles.axes_sol);
    surf(t2,handles.x,handles.solu);
    maximo=max(max(handles.solu));
    minimo=min(min(handles.solu));
    axis([param.T  0 param.a param.b minimo maximo]);
    xlabel('time');
    ylabel('x');
    zlabel('solution');
    view([137 30]);
    rotate3d;
case 'animation' 
    param=getappdata(gcbf,'data');
    %if handles.solactual==0
    solu=animcont_1d(param.a,param.b,param.n,param.mu,param.T,param.beta,param.gamma,handles.u0,handles.u1,handles.e0,handles.e1,handles.axes_sol);
case 'residue' % User selects sinc
    axes(handles.axes_sol);
    plot(log(handles.resid));
    xlabel('Number of iterations');
    ylabel('log. of residue');
end
guidata(hObject,handles)

% --- Executes on button press in sol_push.
function sol_push_Callback(hObject, eventdata, handles)
% hObject    handle to sol_push (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

param=getappdata(gcbf,'data');

[control resid t e0 e1]=cont_1d(param.a,param.b,param.n,param.mu,param.T,param.eps,param.beta,param.gamma,handles.u0,handles.u1);
    axes(handles.axes_sol);
    plot(t,control);
     xlabel('time');
     ylabel('Control');
    handles.solactual=0;

handles.t=t;
handles.control=control;
handles.e0=e0;
handles.e1=e1;
handles.resid=resid;
guidata(hObject,handles)

% --- Executes during object creation, after setting all properties.
function pop_met_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pop_met (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

% --- Executes on selection change in pop_met.
function pop_met_Callback(hObject, eventdata, handles)
% hObject    handle to pop_met (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns pop_met contents as cell array
%        contents{get(hObject,'Value')} returns selected item from pop_met

val = get(hObject,'Value');
str = get(hObject, 'String');
switch str{val};
case 'diferencias finitas' % User selects peaks
    handles.file = 'difcent';
end
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

edit datos.m

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
val = get(hObject,'Value');
str = get(hObject, 'String');
switch str{val};
case 'Example1' % User selects difcent
[u0 u1]=data1(x);
case 'Example2' 
[u0 u1]=data2(x); 
case 'Example3'
[u0 u1]=data3(x);
case 'Example4'
[u0 u1]=data4(x);
end;
axes(handles.axes_u0);
plot(x,u0);
axes(handles.axes_u1);
plot(x,u1);
handles.u0=u0;
handles.u1=u1;
guidata(hObject,handles)

% --- Executes on button press in pushbutton7.
function pushbutton7_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

close

