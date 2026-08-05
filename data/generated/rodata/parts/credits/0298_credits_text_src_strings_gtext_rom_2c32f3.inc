	@ src/strings.c:1147 gText_RefusedBattle
	.globl gText_Rom_2C32F3
gText_Rom_2C32F3: @ 0x082C32F3
	.string "たいせんを ことわりました{PAUSE 60}$"
	.if (. - gText_Rom_2C32F3) > 0x11
	.error "gText_Rom_2C32F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C32F3) < 0x11
	.space 0x11 - (. - gText_Rom_2C32F3)
	.endif
