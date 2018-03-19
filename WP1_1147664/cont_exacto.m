function varargout = cont_exacto(varargin)
% CONT_EXACTO M-file for cont_exacto.fig
%      CONT_EXACTO, by itself, creates a new CONT_EXACTO or raises the existing
%      singleton*.
%
%      H = CONT_EXACTO returns the handle to a new CONT_EXACTO or the handle to
%      the existing singleton*.
%
%      CONT_EXACTO('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in CONT_EXACTO.M with the given input arguments.
%
%      CONT_EXACTO('Property','Value',...) creates a new CONT_EXACTO or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before cont_exacto_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to cont_exacto_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help cont_exacto

% Last Modified by GUIDE v2.5 08-Jul-2004 09:39:16

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @cont_exacto_OpeningFcn, ...
                   'gui_OutputFcn',  @cont_exacto_OutputFcn, ...
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


% --- Executes just before cont_exacto is made visible.
function cont_exacto_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to cont_exacto (see VARARGIN)


% Method of resolution for fault
handles.file = 'difcent';

% Parameters of the program for fault
data.n = 40;
data.mu = 0.9
data.a = 0;
data.b = 1;
data.T = 2.4;
data.eps=1.e-4
data.masa=0;
data.beta=0;
data.gamma=0.5;
% setappdata(hObject, 'data', data);

% Drawing of the initial data for fault
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
handles.x=x;
guidata(hObject, handles);

data.u0='sin(pi*x)';
data.u1='-pi*sin(pi*x)';
data.x=handles.x;
setappdata(hObject, 'data', data);
% Variable that it allows to know if the necessary calculation has 
% been realized to draw the solution 
handles.solactual=0;

% Choose default command line output for cont_exacto
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes cont_exacto wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = cont_exacto_OutputFcn(hObject, eventdata, handles)
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


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% --- Executes on button press in par_push.
function push_cambcf_Callback(hObject, eventdata, handles)
% hObject    handle to par_push (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

data=getappdata(gcbf,'data');
%paramet=[data.n data.l data.a data.b data.T data.ep];
[h1 data.n data.mu data.a data.b data.T data.eps data.beta data.gamma data.masa data.u0 data.u1]=initialdata1(data);
delete(h1);
cla
axes(handles.axes_u0);
plot(handles.x,data.u0);
axes(handles.axes_u1);
plot(handles.x,data.u1);
G=[0 ones(1,data.n) 0];
handles.u0=data.u0(G>0);
handles.u1=data.u1(G>0);
setappdata(gcbf,'data',data);
guidata(hObject,handles);

%setappdata(gcbf,'data',data);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%5



% % --- Executes on button press in push_cond.
% function push_cond_Callback(hObject, eventdata, handles)
% % hObject    handle to push_cond (see GCBO)
% % eventdata  reserved - to be defined in a future version of MATLAB
% % handles    structure with handles and user data (see GUIDATA)
% 
% % Drawing of the initial data
% 
% data=getappdata(gcbf, 'data');
% h=(data.b-data.a)/(data.n+1);
% x=[data.a:h:data.b];
% [u0 u1]=data0(x);
% axes(handles.axes_u0);
% plot(x,u0);
% axes(handles.axes_u1);
% plot(x,u1);
% G=[0 ones(1,data.n) 0];
% handles.u0=u0(G>0);
% handles.u1=u1(G>0);
% setappdata(gcbf, 'data', data);
% guidata(hObject, handles);

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
case 'control' % User selects control
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
    if handles.solactual==0
       solu=dibujo_sol(param.n,param.mu,param.a,param.b,handles.t,handles.control,handles.u0,handles.u1);
       h=(param.b-param.a)/(param.n+1);
       x=[param.a:h:param.b];
       handles.x=x;
       handles.solu=solu;
       handles.solactual=1;
   end
  %  axes(handles.axes_sol);
    surf(handles.t,handles.x,handles.solu);
    maximo=max(max(handles.solu));
    minimo=min(min(handles.solu));
    axis([param.T  0 param.a param.b minimo maximo]);
    xlabel('time');
    ylabel('x');
    zlabel('solution');
    view([137 30]);
    rotate3d;
case 'animation' 
     % mov = avifile('contexac1dexample2.avi')  
    param=getappdata(gcbf,'data');
    if handles.solactual==0
        solu=dibujo_sol(param.n,param.mu,param.a,param.b,handles.t,handles.control,handles.u0,handles.u1);
        h=(param.b-param.a)/(param.n+1);
        x=[param.a:h:param.b];
        handles.solactual=1;
        handles.x=x;
        handles.solu=solu;
      %  F = getframe(gca);
     %  	mov = addframe(mov,F);
    end    
    axes(handles.axes_sol);
    maximo=2*max(abs(handles.u0));
    minimo=-maximo; %min(min(handles.solu));

    if (length(handles.solu(1,:))<=40)
        paso=1;
    else 
        paso=floor(length(handles.solu(1,:))/40)
    end
  
    for i=1:paso:length(handles.solu(1,:))

        plot(handles.x,handles.solu(:,i));
       axis([param.a param.b minimo maximo]);
       pause(.1);
    %    F = getframe(gca);
   %    	mov = addframe(mov,F);
    end
  %      mov = close(mov);   
    plot(handles.x,handles.solu(:,length(handles.solu(1,:))));
    axis([param.a param.b minimo maximo]);
 
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
switch handles.file;
case 'difcent' % User selects difcent
    [control resid t]=difcent(param.a,param.b,param.n,param.T,param.mu,param.eps,handles.u0,handles.u1);
    axes(handles.axes_sol);
    plot(t,control);
    maximo=max(control);
    minimo=min(control);
    axis([0 param.T minimo maximo]);
    xlabel('time');
    ylabel('control');
    handles.solactual=0;
case 'elftos' % User selects elftos
    [control resid t]=elftos(param.a,param.b,param.n,param.T,param.mu,param.eps,param.beta,param.gamma,param.masa,handles.u0,handles.u1);
    axes(handles.axes_sol);
    plot(t,control);
    maximo=max(control);
    minimo=min(control);
    axis([0 param.T minimo maximo]);
    xlabel('time');
    ylabel('control');
    handles.solactual=0;
case 'efm' % User selects efm
    [control resid t]=elftos(param.a,param.b,param.n,param.T,param.mu,param.eps,.25,.5,.25,handles.u0,handles.u1);
    axes(handles.axes_sol);
    plot(t,control);
    maximo=max(control);
    minimo=min(control);
    axis([0 param.T minimo maximo]);
    xlabel('time');
    ylabel('control');
    handles.solactual=0;
end
handles.t=t;
handles.control=control;
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
case 'Finite differences' % User selects peaks
    handles.file = 'difcent';
case 'Finite elements' % User selects membrane
    handles.file = 'elftos';
case 'Mixed finite elements' % User selects sinc
    handles.file = 'efm';
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


% % --- Executes on button press in push_cambcf.
% function push_cambcf_Callback(hObject, eventdata, handles)
% % hObject    handle to push_cambcf (see GCBO)
% % eventdata  reserved - to be defined in a future version of MATLAB
% % handles    structure with handles and user data (see GUIDATA)
% data=getappdata(gcbf,'data');
% % 
% 
% initialdata(data);
% %[h1 handles.u0 handles.u1]=initialdata(data);%data.u0,data.u1);
% %delete(h1);
% setappdata(gcbf,'data',data);
% 
% % edit data0.m


% --- Executes during object creation, after setting all properties.
function popup_datos_CreateFcn(hObject, eventdata, handles)
% hObject    handle to popup_datos (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end


% --- Executes on selection change in popup_datos.
function popup_datos_Callback(hObject, eventdata, handles)
% hObject    handle to popup_datos (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = get(hObject,'String') returns popup_datos contents as cell array
%        contents{get(hObject,'Value')} returns selected item from popup_datos
param=getappdata(gcbf,'data');
h=(param.b-param.a)/(param.n+1);
x=[param.a:h:param.b];
val = get(hObject,'Value');
str = get(hObject, 'String');
switch str{val};
case 'Example 1' % User selects difcent
[u0 u1]=data1(x);
cla
case 'Example 2' 
[u0 u1]=data2(x);
cla
case 'Example 3'
[u0 u1]=data3(x);
cla
case 'Example 4'
[u0 u1]=data4(x);
cla
end;
axes(handles.axes_u0);
plot(x,u0);
axes(handles.axes_u1);
plot(x,u1);
G=[0 ones(1,param.n) 0];
handles.u0=u0(G>0);
handles.u1=u1(G>0);
setappdata(gcbf,'data',param);
guidata(hObject,handles);


% --- Executes on button press in pushbutton7.
function pushbutton7_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

close


