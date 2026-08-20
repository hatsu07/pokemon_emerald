	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:105 RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase
	.globl gText_Rom_203A63
gText_Rom_203A63: @ 0x08203A63
	.string "いい ことば しらないかー\nじゃあ じぶんで かんがえるかー\pうーん\n{STR_VAR_1} とか どうかな\lよし! ためしてみよう{EOS}"
	.if (. - gText_Rom_203A63) > 0x3a
	.error "gText_Rom_203A63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203A63) < 0x3a
	.space 0x3a - (. - gText_Rom_203A63)
	.endif
