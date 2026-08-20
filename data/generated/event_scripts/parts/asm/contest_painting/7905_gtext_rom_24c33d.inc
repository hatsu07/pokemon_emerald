	@ asm/contest_painting.s:487 PrintContestPaintingCaption
	.globl gText_Rom_24C33D
gText_Rom_24C33D: @ 0x0824C33D
	.string "エクセレント　{0xFD}{0x02}　の\nゆうがな　ひととき{EOS}"
	.if (. - gText_Rom_24C33D) > 0x16
	.error "gText_Rom_24C33D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C33D) < 0x16
	.space 0x16 - (. - gText_Rom_24C33D)
	.endif
