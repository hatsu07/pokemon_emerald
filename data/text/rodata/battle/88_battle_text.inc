	@ src/battle_message.c:180 sText_EnigmaBerry
	.globl gText_Rom_55EA40
gText_Rom_55EA40: @ 0x0855EA40
	.string "ナゾのみ$"
	.if (. - gText_Rom_55EA40) > 0x5
	.error "gText_Rom_55EA40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55EA40) < 0x5
	.space 0x5 - (. - gText_Rom_55EA40)
	.endif
	.incbin "baserom.gba", 0x55ea45, 0x2a3

