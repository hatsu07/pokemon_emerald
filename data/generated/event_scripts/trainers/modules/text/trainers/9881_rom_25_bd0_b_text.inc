	@ data/text/trainers.inc:953 Route111_Text_DustyRematchDefeat (+1 aliases)
	.globl gText_Rom_25BD0B
gText_Rom_25BD0B: @ 0x0825BD0B
	.string "いせきは みつからない\nつよい ポケモンも みつからない{EOS}"
	.if (. - gText_Rom_25BD0B) > 0x1d
	.error "gText_Rom_25BD0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BD0B) < 0x1d
	.space 0x1d - (. - gText_Rom_25BD0B)
	.endif
