	@ data/text/trainers.inc:1832 Route117_Text_BrandiIntro (+1 aliases)
	.globl gText_Rom_25E27A
gText_Rom_25E27A: @ 0x0825E27A
	.string "エスパーポケモンに\nひめられた ちからを おみせするわ!{EOS}"
	.if (. - gText_Rom_25E27A) > 0x1d
	.error "gText_Rom_25E27A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E27A) < 0x1d
	.space 0x1d - (. - gText_Rom_25E27A)
	.endif
