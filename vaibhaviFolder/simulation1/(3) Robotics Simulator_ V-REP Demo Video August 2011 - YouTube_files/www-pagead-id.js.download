(function(){var aa="function"==typeof Object.create?Object.create:function(a){function b(){}
b.prototype=a;return new b},l;
if("function"==typeof Object.setPrototypeOf)l=Object.setPrototypeOf;else{var m;a:{var ba={s:!0},n={};try{n.__proto__=ba;m=n.s;break a}catch(a){}m=!1}l=m?function(a,b){a.__proto__=b;if(a.__proto__!==b)throw new TypeError(a+" is not extensible");return a}:null}var p=l;
function q(a,b){a.prototype=aa(b.prototype);a.prototype.constructor=a;if(p)p(a,b);else for(var c in b)if("prototype"!=c)if(Object.defineProperties){var d=Object.getOwnPropertyDescriptor(b,c);d&&Object.defineProperty(a,c,d)}else a[c]=b[c];a.C=b.prototype}
var t=this;function u(a){return"string"==typeof a}
function v(a,b){var c=a.split("."),d=t;c[0]in d||!d.execScript||d.execScript("var "+c[0]);for(var e;c.length&&(e=c.shift());)c.length||void 0===b?d[e]&&d[e]!==Object.prototype[e]?d=d[e]:d=d[e]={}:d[e]=b}
function w(a){a=a.split(".");for(var b=t,c=0;c<a.length;c++)if(b=b[a[c]],null==b)return null;return b}
function x(){}
function y(a){var b=typeof a;if("object"==b)if(a){if(a instanceof Array)return"array";if(a instanceof Object)return b;var c=Object.prototype.toString.call(a);if("[object Window]"==c)return"object";if("[object Array]"==c||"number"==typeof a.length&&"undefined"!=typeof a.splice&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("splice"))return"array";if("[object Function]"==c||"undefined"!=typeof a.call&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("call"))return"function"}else return"null";
else if("function"==b&&"undefined"==typeof a.call)return"object";return b}
function z(a){var b=y(a);return"array"==b||"object"==b&&"number"==typeof a.length}
function A(a){return"function"==y(a)}
function ca(a){var b=typeof a;return"object"==b&&null!=a||"function"==b}
function da(a,b,c){return a.call.apply(a.bind,arguments)}
function ea(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var c=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(c,d);return a.apply(b,c)}}return function(){return a.apply(b,arguments)}}
function B(a,b,c){Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?B=da:B=ea;return B.apply(null,arguments)}
var fa=Date.now||function(){return+new Date};
function ha(a,b){function c(){}
c.prototype=b.prototype;a.C=b.prototype;a.prototype=new c;a.prototype.constructor=a;a.D=function(a,c,f){for(var d=Array(arguments.length-2),e=2;e<arguments.length;e++)d[e-2]=arguments[e];return b.prototype[c].apply(a,d)}}
;function C(a){if(Error.captureStackTrace)Error.captureStackTrace(this,C);else{var b=Error().stack;b&&(this.stack=b)}a&&(this.message=String(a))}
ha(C,Error);C.prototype.name="CustomError";var ia=Array.prototype.indexOf?function(a,b){return Array.prototype.indexOf.call(a,b,void 0)}:function(a,b){if(u(a))return u(b)&&1==b.length?a.indexOf(b,0):-1;
for(var c=0;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},ja=Array.prototype.forEach?function(a,b){Array.prototype.forEach.call(a,b,void 0)}:function(a,b){for(var c=a.length,d=u(a)?a.split(""):a,e=0;e<c;e++)e in d&&b.call(void 0,d[e],e,a)};
function ka(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(z(d)){var e=a.length||0,f=d.length||0;a.length=e+f;for(var g=0;g<f;g++)a[e+g]=d[g]}else a.push(d)}}
;function D(a,b){this.c=a;this.f=b;this.b=0;this.a=null}
D.prototype.get=function(){if(0<this.b){this.b--;var a=this.a;this.a=a.next;a.next=null}else a=this.c();return a};
function la(a,b){a.f(b);100>a.b&&(a.b++,b.next=a.a,a.a=b)}
;var E;a:{var ma=t.navigator;if(ma){var na=ma.userAgent;if(na){E=na;break a}}E=""};function oa(a,b){var c=z(b),d=c?b:arguments;for(c=c?0:1;c<d.length;c++){if(null==a)return;a=a[d[c]]}return a}
function pa(){var a=qa,b={},c;for(c in a)b[c]=a[c];return b}
var ra="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" ");function sa(a,b){for(var c,d,e=1;e<arguments.length;e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<ra.length;f++)c=ra[f],Object.prototype.hasOwnProperty.call(d,c)&&(a[c]=d[c])}}
;function ta(a){t.setTimeout(function(){throw a;},0)}
var F;
function ua(){var a=t.MessageChannel;"undefined"===typeof a&&"undefined"!==typeof window&&window.postMessage&&window.addEventListener&&-1==E.indexOf("Presto")&&(a=function(){var a=document.createElement("IFRAME");a.style.display="none";a.src="";document.documentElement.appendChild(a);var b=a.contentWindow;a=b.document;a.open();a.write("");a.close();var c="callImmediate"+Math.random(),d="file:"==b.location.protocol?"*":b.location.protocol+"//"+b.location.host;a=B(function(a){if(("*"==d||a.origin==d)&&
a.data==c)this.port1.onmessage()},this);
b.addEventListener("message",a,!1);this.port1={};this.port2={postMessage:function(){b.postMessage(c,d)}}});
if("undefined"!==typeof a&&-1==E.indexOf("Trident")&&-1==E.indexOf("MSIE")){var b=new a,c={},d=c;b.port1.onmessage=function(){if(void 0!==c.next){c=c.next;var a=c.i;c.i=null;a()}};
return function(a){d.next={i:a};d=d.next;b.port2.postMessage(0)}}return"undefined"!==typeof document&&"onreadystatechange"in document.createElement("SCRIPT")?function(a){var b=document.createElement("SCRIPT");
b.onreadystatechange=function(){b.onreadystatechange=null;b.parentNode.removeChild(b);b=null;a();a=null};
document.documentElement.appendChild(b)}:function(a){t.setTimeout(a,0)}}
;function G(){this.b=this.a=null}
var va=new D(function(){return new H},function(a){a.reset()});
G.prototype.add=function(a,b){var c=va.get();c.set(a,b);this.b?this.b.next=c:this.a=c;this.b=c};
G.prototype.remove=function(){var a=null;this.a&&(a=this.a,this.a=this.a.next,this.a||(this.b=null),a.next=null);return a};
function H(){this.next=this.b=this.a=null}
H.prototype.set=function(a,b){this.a=a;this.b=b;this.next=null};
H.prototype.reset=function(){this.next=this.b=this.a=null};function I(a,b){J||wa();K||(J(),K=!0);xa.add(a,b)}
var J;function wa(){if(-1!=String(t.Promise).indexOf("[native code]")){var a=t.Promise.resolve(void 0);J=function(){a.then(ya)}}else J=function(){var a=ya,c;
!(c=!A(t.setImmediate))&&(c=t.Window&&t.Window.prototype)&&(c=-1==E.indexOf("Edge")&&t.Window.prototype.setImmediate==t.setImmediate);c?(F||(F=ua()),F(a)):t.setImmediate(a)}}
var K=!1,xa=new G;function ya(){for(var a;a=xa.remove();){try{a.a.call(a.b)}catch(b){ta(b)}la(va,a)}K=!1}
;function za(){}
;function Aa(a){a.prototype.then=a.prototype.then;a.prototype.$goog_Thenable=!0}
function L(a){if(!a)return!1;try{return!!a.$goog_Thenable}catch(b){return!1}}
;function M(a,b){this.a=0;this.j=void 0;this.f=this.b=this.c=null;this.g=this.h=!1;if(a!=x)try{var c=this;a.call(b,function(a){N(c,2,a)},function(a){N(c,3,a)})}catch(d){N(this,3,d)}}
function Ba(){this.next=this.context=this.b=this.c=this.a=null;this.f=!1}
Ba.prototype.reset=function(){this.context=this.b=this.c=this.a=null;this.f=!1};
var Ca=new D(function(){return new Ba},function(a){a.reset()});
function Da(a,b,c){var d=Ca.get();d.c=a;d.b=b;d.context=c;return d}
function Ea(a){return new M(function(b,c){c(a)})}
M.prototype.then=function(a,b,c){return Fa(this,A(a)?a:null,A(b)?b:null,c)};
Aa(M);function O(a,b){return Fa(a,null,b,void 0)}
M.prototype.cancel=function(a){0==this.a&&I(function(){var b=new P(a);Ga(this,b)},this)};
function Ga(a,b){if(0==a.a)if(a.c){var c=a.c;if(c.b){for(var d=0,e=null,f=null,g=c.b;g&&(g.f||(d++,g.a==a&&(e=g),!(e&&1<d)));g=g.next)e||(f=g);e&&(0==c.a&&1==d?Ga(c,b):(f?(d=f,d.next==c.f&&(c.f=d),d.next=d.next.next):Ha(c),Ia(c,e,3,b)))}a.c=null}else N(a,3,b)}
function Ja(a,b){a.b||2!=a.a&&3!=a.a||Ka(a);a.f?a.f.next=b:a.b=b;a.f=b}
function Fa(a,b,c,d){var e=Da(null,null,null);e.a=new M(function(a,g){e.c=b?function(c){try{var e=b.call(d,c);a(e)}catch(r){g(r)}}:a;
e.b=c?function(b){try{var e=c.call(d,b);void 0===e&&b instanceof P?g(b):a(e)}catch(r){g(r)}}:g});
e.a.c=a;Ja(a,e);return e.a}
M.prototype.v=function(a){this.a=0;N(this,2,a)};
M.prototype.w=function(a){this.a=0;N(this,3,a)};
function N(a,b,c){if(0==a.a){a===c&&(b=3,c=new TypeError("Promise cannot resolve to itself"));a.a=1;a:{var d=c,e=a.v,f=a.w;if(d instanceof M){Ja(d,Da(e||x,f||null,a));var g=!0}else if(L(d))d.then(e,f,a),g=!0;else{if(ca(d))try{var h=d.then;if(A(h)){La(d,h,e,f,a);g=!0;break a}}catch(k){f.call(a,k);g=!0;break a}g=!1}}g||(a.j=c,a.a=b,a.c=null,Ka(a),3!=b||c instanceof P||Ma(a,c))}}
function La(a,b,c,d,e){function f(a){h||(h=!0,d.call(e,a))}
function g(a){h||(h=!0,c.call(e,a))}
var h=!1;try{b.call(a,g,f)}catch(k){f(k)}}
function Ka(a){a.h||(a.h=!0,I(a.u,a))}
function Ha(a){var b=null;a.b&&(b=a.b,a.b=b.next,b.next=null);a.b||(a.f=null);return b}
M.prototype.u=function(){for(var a;a=Ha(this);)Ia(this,a,this.a,this.j);this.h=!1};
function Ia(a,b,c,d){if(3==c&&b.b&&!b.f)for(;a&&a.g;a=a.c)a.g=!1;if(b.a)b.a.c=null,Na(b,c,d);else try{b.f?b.c.call(b.context):Na(b,c,d)}catch(e){Oa.call(null,e)}la(Ca,b)}
function Na(a,b,c){2==b?a.c.call(a.context,c):a.b&&a.b.call(a.context,c)}
function Ma(a,b){a.g=!0;I(function(){a.g&&Oa.call(null,b)})}
var Oa=ta;function P(a){C.call(this,a)}
ha(P,C);P.prototype.name="cancel";var Q=/^(?:([^:/?#.]+):)?(?:\/\/(?:([^/?#]*)@)?([^/#?]*?)(?::([0-9]+))?(?=[/#?]|$))?([^?#]+)?(?:\?([^#]*))?(?:#([\s\S]*))?$/;function R(a){return a?decodeURI(a):a}
function Pa(a,b,c){if("array"==y(b))for(var d=0;d<b.length;d++)Pa(a,String(b[d]),c);else null!=b&&c.push(a+(""===b?"":"="+encodeURIComponent(String(b))))}
function Qa(a){var b=[],c;for(c in a)Pa(c,a[c],b);return b.join("&")}
;var S=window.yt&&window.yt.config_||window.ytcfg&&window.ytcfg.data_||{};v("yt.config_",S);function Ra(a){var b=arguments;if(1<b.length)S[b[0]]=b[1];else{b=b[0];for(var c in b)S[c]=b[c]}}
function T(a,b){return a in S?S[a]:b}
;fa();function Sa(a){return a&&window.yterr?function(){try{return a.apply(this,arguments)}catch(b){Ta(b)}}:a}
function Ta(a){var b=w("yt.logging.errors.log");b?b(a,void 0,void 0,void 0,void 0):(b=T("ERRORS",[]),b.push([a,void 0,void 0,void 0,void 0]),Ra("ERRORS",b))}
;var Ua=void 0!==XMLHttpRequest?function(){return new XMLHttpRequest}:void 0!==ActiveXObject?function(){return new ActiveXObject("Microsoft.XMLHTTP")}:null;
function Va(){if(!Ua)return null;var a=Ua();return"open"in a?a:null}
function Wa(a){switch(a&&"status"in a?a.status:-1){case 200:case 201:case 202:case 203:case 204:case 205:case 206:case 304:return!0;default:return!1}}
;function Xa(a,b){A(a)&&(a=Sa(a));return window.setTimeout(a,b)}
;function Ya(a){"?"==a.charAt(0)&&(a=a.substr(1));a=a.split("&");for(var b={},c=0,d=a.length;c<d;c++){var e=a[c].split("=");if(1==e.length&&e[0]||2==e.length){var f=decodeURIComponent((e[0]||"").replace(/\+/g," "));e=decodeURIComponent((e[1]||"").replace(/\+/g," "));f in b?"array"==y(b[f])?ka(b[f],e):b[f]=[b[f],e]:b[f]=e}}return b}
;var Za={"X-Goog-Visitor-Id":"SANDBOXED_VISITOR_ID","X-YouTube-Client-Name":"INNERTUBE_CONTEXT_CLIENT_NAME","X-YouTube-Client-Version":"INNERTUBE_CONTEXT_CLIENT_VERSION","X-Youtube-Identity-Token":"ID_TOKEN","X-YouTube-Page-CL":"PAGE_CL","X-YouTube-Page-Label":"PAGE_BUILD_LABEL","X-YouTube-Variants-Checksum":"VARIANTS_CHECKSUM"},$a=!1;
function ab(a,b){b=void 0===b?{}:b;if(!c)var c=window.location.href;var d=a.match(Q)[1]||null,e=R(a.match(Q)[3]||null);d&&e?(d=c,c=a.match(Q),d=d.match(Q),c=c[3]==d[3]&&c[1]==d[1]&&c[4]==d[4]):c=e?R(c.match(Q)[3]||null)==e&&(Number(c.match(Q)[4]||null)||null)==(Number(a.match(Q)[4]||null)||null):!0;for(var f in Za){if((e=d=T(Za[f]))&&!(e=c)){e=f;var g=T("CORS_HEADER_WHITELIST")||{},h=R(a.match(Q)[3]||null);e=h?(g=g[h])?0<=ia(g,e):!1:!0}e&&(b[f]=d)}return b}
function bb(a,b){var c=b.format||"JSON";a=cb(a,b);var d=db(a,b),e=!1,f,g=eb(a,function(a){if(!e){e=!0;f&&window.clearTimeout(f);var d=Wa(a),g=null;if(d||400<=a.status&&500>a.status)g=fb(c,a,b.F);if(d)a:if(a&&204==a.status)d=!0;else{switch(c){case "XML":d=0==parseInt(g&&g.return_code,10);break a;case "RAW":d=!0;break a}d=!!g}g=g||{};var h=b.context||t;d?b.l&&b.l.call(h,a,g):b.onError&&b.onError.call(h,a,g);b.A&&b.A.call(h,a,g)}},b.method,d,b.headers,b.responseType,b.withCredentials);
b.m&&0<b.timeout&&(f=Xa(function(){e||(e=!0,g.abort(),window.clearTimeout(f),b.m.call(b.context||t,g))},b.timeout))}
function cb(a,b){b.H&&(a=document.location.protocol+"//"+document.location.hostname+(document.location.port?":"+document.location.port:"")+a);var c=T("XSRF_FIELD_NAME",void 0),d=b.J;if(d){d[c]&&delete d[c];var e=d||{};c=a.split("#",2);d=c[0];c=1<c.length?"#"+c[1]:"";var f=d.split("?",2);d=f[0];f=Ya(f[1]||"");for(var g in e)f[g]=e[g];g=Qa(f);if(g){e=d.indexOf("#");0>e&&(e=d.length);f=d.indexOf("?");if(0>f||f>e){f=e;var h=""}else h=d.substring(f+1,e);d=[d.substr(0,f),h,d.substr(e)];e=d[1];d[1]=g?e?
e+"&"+g:g:e;g=d[0]+(d[1]?"?"+d[1]:"")+d[2]}else g=d;a=g+c}return a}
function db(a,b){var c=T("XSRF_FIELD_NAME",void 0),d=T("XSRF_TOKEN",void 0),e=b.I||"",f=b.o,g=T("XSRF_FIELD_NAME",void 0),h;b.headers&&(h=b.headers["Content-Type"]);b.G||R(a.match(Q)[3]||null)&&!b.withCredentials&&R(a.match(Q)[3]||null)!=document.location.hostname||"POST"!=b.method||h&&"application/x-www-form-urlencoded"!=h||b.o&&b.o[g]||(f||(f={}),f[c]=d);f&&u(e)&&(e=Ya(e),sa(e,f),e=b.B&&"JSON"==b.B?JSON.stringify(e):Qa(e));if(!(c=e)&&(c=f)){a:{for(k in f){var k=!1;break a}k=!0}c=!k}!$a&&c&&"POST"!=
b.method&&($a=!0,Ta(Error("AJAX request with postData should use POST")));return e}
function fb(a,b,c){var d=null;switch(a){case "JSON":a=b.responseText;b=b.getResponseHeader("Content-Type")||"";a&&0<=b.indexOf("json")&&(d=JSON.parse(a));break;case "XML":if(b=(b=b.responseXML)?gb(b):null)d={},ja(b.getElementsByTagName("*"),function(a){d[a.tagName]=hb(a)})}c&&ib(d);
return d}
function ib(a){if(ca(a))for(var b in a){var c;(c="html_content"==b)||(c=b.length-5,c=0<=c&&b.indexOf("_html",c)==c);c?a[b]=new za:ib(a[b])}}
function gb(a){return a?(a=("responseXML"in a?a.responseXML:a).getElementsByTagName("root"))&&0<a.length?a[0]:null:null}
function hb(a){var b="";ja(a.childNodes,function(a){b+=a.nodeValue});
return b}
function eb(a,b,c,d,e,f,g){function h(){4==(k&&"readyState"in k?k.readyState:0)&&b&&Sa(b)(k)}
c=void 0===c?"GET":c;d=void 0===d?"":d;var k=Va();if(!k)return null;"onloadend"in k?k.addEventListener("loadend",h,!1):k.onreadystatechange=h;k.open(c,a,!0);f&&(k.responseType=f);g&&(k.withCredentials=!0);c="POST"==c;if(e=ab(a,e))for(var r in e)k.setRequestHeader(r,e[r]),"content-type"==r.toLowerCase()&&(c=!1);c&&k.setRequestHeader("Content-Type","application/x-www-form-urlencoded");k.send(d);return k}
;function jb(){var a=kb()?"//googleads.g.doubleclick.net/pagead/id?exp=nomnom":"//googleads.g.doubleclick.net/pagead/id",b=pa();return new M(function(c,d){b.l=function(a){Wa(a)?c(a):d(new U("Request failed, status="+a.status,"net.badstatus",a))};
b.onError=function(a){d(new U("Unknown request error","net.unknown",a))};
b.m=function(a){d(new U("Request timed out","net.timeout",a))};
bb(a,b)})}
function U(a,b){C.call(this,a+", errorCode="+b);this.errorCode=b;this.name="PromiseAjaxError"}
q(U,C);function V(a){this.c=void 0===a?null:a;this.a=0;this.b=null}
V.prototype.then=function(a,b,c){return this.c?this.c.then(a,b,c):1===this.a&&a?(a=a.call(c,this.b),L(a)?a:lb(a)):2===this.a&&b?(a=b.call(c,this.b),L(a)?a:mb(a)):this};
Aa(V);function mb(a){var b=new V;a=void 0===a?null:a;b.a=2;b.b=void 0===a?null:a;return b}
function lb(a){var b=new V;a=void 0===a?null:a;b.a=1;b.b=void 0===a?null:a;return b}
;function W(a){C.call(this,a.message||a.description||a.name);this.isMissing=a instanceof X;this.isTimeout=a instanceof U&&"net.timeout"==a.errorCode;this.isCanceled=a instanceof P}
q(W,C);W.prototype.name="BiscottiError";function X(){C.call(this,"Biscotti ID is missing from server")}
q(X,C);X.prototype.name="BiscottiMissingError";var qa={format:"RAW",method:"GET",timeout:5E3,withCredentials:!0},Y=null;function nb(){if("1"===oa(T("PLAYER_CONFIG",{}),"args","privembed"))return Ea(Error("Biscotti ID is not available in private embed mode"));Y||(Y=O(jb().then(ob),function(a){return pb(2,a)}));
return Y}
function kb(){var a;(a=!!oa(window,"settings","experiments","flags","html5_serverside_pagead_id_sets_cookie"))||(a=!!T("EXP_HTML5_SERVERSIDE_PAGEAD_ID_SETS_COOKIE",!1));a||(a=!!T("EXPERIMENT_FLAGS",{}).html5_serverside_pagead_id_sets_cookie);return a}
function ob(a){a=a.responseText;if(0!=a.lastIndexOf(")]}'",0))throw new X;a=JSON.parse(a.substr(4));if(1<(a.type||1))throw new X;a=a.id;qb(a);Y=lb(a);rb(18E5,2);return a}
function pb(a,b){var c=new W(b);qb("");Y=mb(c);0<a&&rb(12E4,a-1);throw c;}
function rb(a,b){Xa(function(){O(jb().then(ob,function(a){return pb(b,a)}),x)},a)}
function qb(a){v("yt.ads.biscotti.lastId_",a)}
;w("yt.ads.biscotti.getId_")||v("yt.ads.biscotti.getId_",nb);var Z;try{var sb=w("yt.ads.biscotti.getId_");Z=sb?sb():nb()}catch(a){Z=Ea(a)}O(Z,x);}).call(this);
