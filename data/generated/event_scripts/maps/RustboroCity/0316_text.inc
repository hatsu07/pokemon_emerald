	@ data/maps/RustboroCity/scripts.inc:1281 RustboroCity_Text_PleaseSelectPokenav
	.globl gText_Rom_1DFD2A
gText_Rom_1DFD2A: @ 0x081DFD2A
	.string "ポケナビを えらんで ください!{EOS}"
	.if (. - gText_Rom_1DFD2A) > 0x11
	.error "gText_Rom_1DFD2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFD2A) < 0x11
	.space 0x11 - (. - gText_Rom_1DFD2A)
	.endif
