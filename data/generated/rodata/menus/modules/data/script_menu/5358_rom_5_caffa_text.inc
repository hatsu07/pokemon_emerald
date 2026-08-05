	@ src/data/script_menu.h:731 gText_GoOn
	.globl gText_Rom_5CAFFA
gText_Rom_5CAFFA: @ 0x085CAFFA
	.string "つづける$"
	.if (. - gText_Rom_5CAFFA) > 0x5
	.error "gText_Rom_5CAFFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFFA) < 0x5
	.space 0x5 - (. - gText_Rom_5CAFFA)
	.endif
	@ Decoded text from ROM range: offset=0x5CAFFF, size=0x6
	.string "きろくする$"
