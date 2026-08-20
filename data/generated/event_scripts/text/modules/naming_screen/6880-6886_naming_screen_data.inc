	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E08
gText_Rom_243E08: @ 0x08243E08
	.string "{0xFD}{0x03}は　だれかのパソコンの\nボックス『{0xFD}{0x02}』に\lてんそう　された！{EOS}"
	.if (. - gText_Rom_243E08) > 0x22
	.error "gText_Rom_243E08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E08) < 0x22
	.space 0x22 - (. - gText_Rom_243E08)
	.endif

	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E2A
gText_Rom_243E2A: @ 0x08243E2A
	.string "{0xFD}{0x03}は　マユミのパソコンの\nボックス『{0xFD}{0x02}』に\lてんそう　された！{EOS}"
	.if (. - gText_Rom_243E2A) > 0x22
	.error "gText_Rom_243E2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E2A) < 0x22
	.space 0x22 - (. - gText_Rom_243E2A)
	.endif

	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E4C
gText_Rom_243E4C: @ 0x08243E4C
	.string "だれかのパソコンの\nボックス『{0xFD}{0x04}』が\lいっぱいだ！！\p{0xFD}{0x03}は\nボックス『{0xFD}{0x02}』に\lてんそう　された！{EOS}"
	.if (. - gText_Rom_243E4C) > 0x34
	.error "gText_Rom_243E4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E4C) < 0x34
	.space 0x34 - (. - gText_Rom_243E4C)
	.endif

	@ asm/naming_screen.s:1055 DisplaySentToPCMessage (+1 aliases)
	.globl gText_Rom_243E80
gText_Rom_243E80: @ 0x08243E80
	.string "マユミのパソコンの\nボックス『{0xFD}{0x04}』が\lいっぱいだ！！\p{0xFD}{0x03}は\nボックス『{0xFD}{0x02}』に\lてんそう　された！{EOS}"
	.if (. - gText_Rom_243E80) > 0x34
	.error "gText_Rom_243E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243E80) < 0x34
	.space 0x34 - (. - gText_Rom_243E80)
	.endif
