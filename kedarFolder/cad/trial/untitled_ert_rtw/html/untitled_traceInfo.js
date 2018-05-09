function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Digital Input */
	this.urlHashMap["untitled:3"] = "untitled.c:51,88&untitled.h:70&untitled_data.c:38";
	/* <Root>/Pulse
Generator */
	this.urlHashMap["untitled:4"] = "untitled.c:54,63&untitled.h:49,58,61,64,67&untitled_data.c:26,29,32,35";
	/* <Root>/Scope */
	this.urlHashMap["untitled:5"] = "msg=rtwMsg_reducedBlock&block=untitled/Scope";
	/* <Root>/Scope1 */
	this.urlHashMap["untitled:6"] = "msg=rtwMsg_reducedBlock&block=untitled/Scope1";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["untitled:1:114"] = "untitled.c:65,76";
	/* <S1>/Digital Output */
	this.urlHashMap["untitled:1:214"] = "untitled.c:78,91&untitled.h:55&untitled_data.c:23";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "untitled:1"};
	this.sidHashMap["untitled:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Digital Input"] = {sid: "untitled:3"};
	this.sidHashMap["untitled:3"] = {rtwname: "<Root>/Digital Input"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "untitled:1"};
	this.sidHashMap["untitled:1"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/Pulse Generator"] = {sid: "untitled:4"};
	this.sidHashMap["untitled:4"] = {rtwname: "<Root>/Pulse Generator"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "untitled:5"};
	this.sidHashMap["untitled:5"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Scope1"] = {sid: "untitled:6"};
	this.sidHashMap["untitled:6"] = {rtwname: "<Root>/Scope1"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "untitled:1:116"};
	this.sidHashMap["untitled:1:116"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "untitled:1:114"};
	this.sidHashMap["untitled:1:114"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/Digital Output"] = {sid: "untitled:1:214"};
	this.sidHashMap["untitled:1:214"] = {rtwname: "<S1>/Digital Output"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
