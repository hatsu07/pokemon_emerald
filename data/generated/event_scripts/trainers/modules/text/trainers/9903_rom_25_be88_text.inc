	@ data/text/trainers.inc:986 Route111_Text_WiltonIntro (+1 aliases)
	.globl gText_Rom_25BE88
gText_Rom_25BE88: @ 0x0825BE88
	.string "きみが ポケモンを どこまで\nきたえているか みせて もらおう!{EOS}"
	.if (. - gText_Rom_25BE88) > 0x21
	.error "gText_Rom_25BE88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BE88) < 0x21
	.space 0x21 - (. - gText_Rom_25BE88)
	.endif
