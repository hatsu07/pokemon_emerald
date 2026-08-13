	@ data/maps/RustboroCity_Flat2_1F/scripts.inc:21 RustboroCity_Flat2_1F_Text_Skitty
	.globl gText_Rom_203FDE
gText_Rom_203FDE: @ 0x08203FDE
	.string "エネコ『ぎゃー!!$"
	.if (. - gText_Rom_203FDE) > 0xa
	.error "gText_Rom_203FDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203FDE) < 0xa
	.space 0xa - (. - gText_Rom_203FDE)
	.endif
	@ analyzed canonical ROM range 0x08203FE8-0x0820402A
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203FE8: @ 0x08203FE8
	.byte 0x00
.globl EventScript_JP_08203FE9
EventScript_JP_08203FE9: @ 0x08203FE9
	loadword 0x00, gText_Rom_20402B
	callstd 0x02
	end
.globl EventScript_JP_08203FF2
EventScript_JP_08203FF2: @ 0x08203FF2
	lock
	faceplayer
	checkflag 0x00D5
	goto_if 0x01, EventScript_JP_08204021
	loadword 0x00, gText_Rom_20404B
	callstd 0x04
	setorcopyvar 0x8000, 0x000C
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00D5
	release
	end
EventScript_JP_08204021: @ 0x08204021
	loadword 0x00, gText_Rom_204087
	callstd 0x04
	release
	end
