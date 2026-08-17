	.globl EventScriptData_JP_0823B5A9
EventScriptData_JP_0823B5A9: @ 0x0823B5A9
	@ Decoded event bytecode: exact ROM size 0x16
	lockall
	fadescreenswapbuffers 0x01
	setflag 0x02CE
	removeobject 0x0001
	fadescreenswapbuffers 0x00
	loadword 0x00, gText_Rom_23B5BF
	callstd 0x04
	closemessage
	releaseall
	end
