	@ data/text/apprentice.inc:382 gText_ApprenticeThanksNoHeldItem9
	.globl gText_Rom_26F720
gText_Rom_26F720: @ 0x0826F720
	.string "オーケイ オーケイ!\nおじさん グーっと がんばるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_Rom_26F720) > 0x36
	.error "gText_Rom_26F720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F720) < 0x36
	.space 0x36 - (. - gText_Rom_26F720)
	.endif
