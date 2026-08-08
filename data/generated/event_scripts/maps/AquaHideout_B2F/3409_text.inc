	@ data/maps/AquaHideout_B2F/scripts.inc:92 AquaHideout_B2F_Text_MattDefeat (+1 aliases)
	.globl gText_Rom_21811D
gText_Rom_21811D: @ 0x0821811D
	.string "ウヒョヒョ……\nまけちまったか……$"
	.if (. - gText_Rom_21811D) > 0x12
	.error "gText_Rom_21811D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21811D) < 0x12
	.space 0x12 - (. - gText_Rom_21811D)
	.endif
