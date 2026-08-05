	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E2A
gText_Rom_243E2A: @ 0x08243E2A
	.string "{0xFD}{0x03}は　マユミのパソコンの\nボックス『{0xFD}{0x02}』に\lてんそう　された！$"
	.if (. - gText_Rom_243E2A) > 0x22
	.error "gText_Rom_243E2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E2A) < 0x22
	.space 0x22 - (. - gText_Rom_243E2A)
	.endif
