	@ data/maps/FortreeCity/scripts.inc:133 FortreeCity_Text_SomethingUnseeable (+1 aliases)
	.globl gText_Rom_1EE029
gText_Rom_1EE029: @ 0x081EE029
	.string "みえない なにかが いるようだ$"
	.if (. - gText_Rom_1EE029) > 0x10
	.error "gText_Rom_1EE029 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EE029) < 0x10
	.space 0x10 - (. - gText_Rom_1EE029)
	.endif
