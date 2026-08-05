	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_25942A
gText_Rom_25942A: @ 0x0825942A
	.string "たびに　でたいなー\nどこか　いい　ところ　しらない？"
	.byte EOS
	.if (. - gText_Rom_25942A) > 0x1b
	.error "gText_Rom_25942A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25942A) < 0x1b
	.space 0x1b - (. - gText_Rom_25942A)
	.endif
