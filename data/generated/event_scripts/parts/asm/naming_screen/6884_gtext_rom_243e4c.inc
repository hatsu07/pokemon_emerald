	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E4C
gText_Rom_243E4C: @ 0x08243E4C
	.string "だれかのパソコンの\nボックス『{0xFD}{0x04}』が\lいっぱいだ！！\p{0xFD}{0x03}は\nボックス『{0xFD}{0x02}』に\lてんそう　された！$"
	.if (. - gText_Rom_243E4C) > 0x34
	.error "gText_Rom_243E4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E4C) < 0x34
	.space 0x34 - (. - gText_Rom_243E4C)
	.endif
