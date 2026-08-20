	@ data/maps/FortreeCity_Mart/scripts.inc:46 FortreeCity_Mart_Text_RareCandyMakesMonGrow
	.globl gText_Rom_204E70
gText_Rom_204E70: @ 0x08204E70
	.string "ふしぎなアメを あげると\nポケモン いっきに そだって\lレベルが あがっちゃうんだ!{EOS}"
	.if (. - gText_Rom_204E70) > 0x2b
	.error "gText_Rom_204E70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204E70) < 0x2b
	.space 0x2b - (. - gText_Rom_204E70)
	.endif
	@ analyzed canonical ROM range 0x08204E9B-0x08204F52
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08204E9B: @ 0x08204E9B
	.byte 0x00
.globl EventScript_JP_08204E9C
EventScript_JP_08204E9C: @ 0x08204E9C
	lock
	faceplayer
	checkflag 0x0108
	goto_if 0x01, EventScript_JP_08204F3F
	checkflag 0x0076
	call_if 0x00, EventScript_JP_08204F33
	loadword 0x00, gText_Rom_204F7F
	callstd 0x04
	multichoice 0x15, 0x08, 0x36, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08204F49
	loadword 0x00, gText_Rom_204FD5
	callstd 0x04
	multichoice 0x15, 0x08, 0x36, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08204F49
	loadword 0x00, gText_Rom_205013
	callstd 0x04
	multichoice 0x15, 0x08, 0x36, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08204F49
	loadword 0x00, gText_Rom_205051
	callstd 0x04
	setorcopyvar 0x8000, 0x012A
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0108
	loadword 0x00, gText_Rom_20509A
	callstd 0x04
	release
	end
EventScript_08204F33: @ 0x08204F33
EventScript_JP_08204F33: @ 0x08204F33
	loadword 0x00, gText_Rom_204F53
	callstd 0x04
	setflag 0x0076
	return
EventScript_08204F3F: @ 0x08204F3F
EventScript_JP_08204F3F: @ 0x08204F3F
	loadword 0x00, gText_Rom_20509A
	callstd 0x04
	release
	end
EventScript_08204F49: @ 0x08204F49
EventScript_JP_08204F49: @ 0x08204F49
	loadword 0x00, gText_Rom_2050C0
	callstd 0x04
	release
	end
