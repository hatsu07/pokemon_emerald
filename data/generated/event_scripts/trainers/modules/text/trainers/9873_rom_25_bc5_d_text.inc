	@ data/text/trainers.inc:941 Route111_Text_DustyDefeat (+1 aliases)
	.globl gText_Rom_25BC5D
gText_Rom_25BC5D: @ 0x0825BC5D
	.string "いせきを さがしてるけど\nつよい ポケモンは さがしてないんだ{EOS}"
	.if (. - gText_Rom_25BC5D) > 0x20
	.error "gText_Rom_25BC5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BC5D) < 0x20
	.space 0x20 - (. - gText_Rom_25BC5D)
	.endif
