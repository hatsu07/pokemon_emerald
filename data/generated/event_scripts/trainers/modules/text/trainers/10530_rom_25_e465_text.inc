	@ data/text/trainers.inc:1886 Route118_Text_ChesterPostBattle
	.globl gText_Rom_25E465
gText_Rom_25E465: @ 0x0825E465
	.string "もっと つよくなると\nじゆうに とべるように なるのにな!{EOS}"
	.if (. - gText_Rom_25E465) > 0x1e
	.error "gText_Rom_25E465 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E465) < 0x1e
	.space 0x1e - (. - gText_Rom_25E465)
	.endif
