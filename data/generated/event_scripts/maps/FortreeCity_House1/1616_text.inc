	@ data/maps/FortreeCity_House1/scripts.inc:49 FortreeCity_House1_Text_ThisIsntAMon
	.globl gText_Rom_204305
gText_Rom_204305: @ 0x08204305
	.string "いやソレ\n{STR_VAR_1}じゃないでしょ$"
	.if (. - gText_Rom_204305) > 0xf
	.error "gText_Rom_204305 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204305) < 0xf
	.space 0xf - (. - gText_Rom_204305)
	.endif
