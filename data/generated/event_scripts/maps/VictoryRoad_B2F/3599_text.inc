	@ data/maps/VictoryRoad_B2F/scripts.inc:46 VictoryRoad_B2F_Text_OwenDefeat (+1 aliases)
	.globl gText_Rom_219CE1
gText_Rom_219CE1: @ 0x08219CE1
	.string "たしかに つよい!"
	.byte EOS
	.if (. - gText_Rom_219CE1) > 0xa
	.error "gText_Rom_219CE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219CE1) < 0xa
	.space 0xa - (. - gText_Rom_219CE1)
	.endif
