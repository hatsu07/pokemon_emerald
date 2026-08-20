	@ data/maps/FortreeCity/scripts.inc:133 FortreeCity_Text_SomethingUnseeable (+1 aliases)
	.globl gText_Rom_1E00B0
gText_Rom_1E00B0: @ 0x081E00B0
	.string "みえない なにかが いるようだ{EOS}"
	.if (. - gText_Rom_1E00B0) > 0x10
	.error "gText_Rom_1E00B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E00B0) < 0x10
	.space 0x10 - (. - gText_Rom_1E00B0)
	.endif
