	@ data/maps/RustboroCity/scripts.inc:1288 RustboroCity_Text_YouCanHave2On2Battle
	.globl gText_Rom_1DFD5D
gText_Rom_1DFD5D: @ 0x081DFD5D
	.string "きみ しってる?\nふたりづれの トレーナーとじゃ なくても\l2たい2の しょうぶが できるんだ!\p2ひき いじょう ポケモンを もってるとき\nふたりの トレーナーと めが あえば\lしょうぶを どうじに いどんで くるよ!\pたった ひとりで ふたりを あいてに\nかてたら カッコいいよねー!$"
	.if (. - gText_Rom_1DFD5D) > 0x91
	.error "gText_Rom_1DFD5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFD5D) < 0x91
	.space 0x91 - (. - gText_Rom_1DFD5D)
	.endif
	@ analyzed canonical ROM range 0x081DFDEE-0x081DFEBF
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_081DFDEE: @ 0x081DFDEE
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081DFDF9
	.byte 0x05
	.4byte EventScript_JP_081DFDFD
	.byte 0
EventScript_JP_081DFDF9: @ 0x081DFDF9
	setflag 0x087A
	end
EventScript_JP_081DFDFD: @ 0x081DFDFD
	setstepcallback 0x02
	end
EventScript_JP_081DFE00: @ 0x081DFE00
	loadword 0x00, gText_Rom_1DFEC0
	callstd 0x02
	end
EventScript_JP_081DFE09: @ 0x081DFE09
	lock
	faceplayer
	checkflag 0x0127
	goto_if 0x01, EventScript_JP_081DFE1E
	loadword 0x00, gText_Rom_1DFF3B
	callstd 0x04
	release
	end
EventScript_JP_081DFE1E: @ 0x081DFE1E
	loadword 0x00, gText_Rom_1DFF7D
	callstd 0x04
	release
	end
EventScript_JP_081DFE28: @ 0x081DFE28
	loadword 0x00, gText_Rom_1DFFA2
	callstd 0x02
	end
EventScript_JP_081DFE31: @ 0x081DFE31
	loadword 0x00, gText_Rom_1DFFEA
	callstd 0x02
	end
EventScript_JP_081DFE3A: @ 0x081DFE3A
	loadword 0x00, gText_Rom_1E0049
	callstd 0x02
	end
EventScript_JP_081DFE43: @ 0x081DFE43
	loadword 0x00, gText_Rom_1E008B
	callstd 0x02
	end
EventScript_JP_081DFE4C: @ 0x081DFE4C
	loadword 0x00, gText_Rom_1E0126
	callstd 0x03
	end
EventScript_JP_081DFE55: @ 0x081DFE55
	loadword 0x00, gText_Rom_1E0148
	callstd 0x03
	end
EventScript_JP_081DFE5E: @ 0x081DFE5E
	lock
	faceplayer
	checkitem 0x0120, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DFE7A
	loadword 0x00, gText_Rom_1E00B0
	callstd 0x04
	release
	end
EventScript_JP_081DFE7A: @ 0x081DFE7A
	loadword 0x00, gText_Rom_1E00C0
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081DFE8F
	release
	end
EventScript_JP_081DFE8F: @ 0x081DFE8F
	loadword 0x00, gText_Rom_1E00E1
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824344A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	waitse
	playmoncry 0x013D, 0x0002
	delay 0x0028
	waitmoncry
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x081DFEBE @ Movement_JP_081DFEBE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x800F
	setflag 0x0127
	release
	end
Movement_JP_081DFEBE: @ 0x081DFEBE
	@ object movement sequence
	walk_right
	step_end
