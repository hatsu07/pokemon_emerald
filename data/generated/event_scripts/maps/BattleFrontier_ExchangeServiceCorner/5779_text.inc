	@ data/maps/BattleFrontier_ExchangeServiceCorner/scripts.inc:392 BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher
	.globl gText_Rom_23664A
gText_Rom_23664A: @ 0x0823664A
	.string "ここの どうぐが あれば\nおれの ポケモンも\lもっと つよくなる! ん! まちがいない!"
	.byte EOS
	.if (. - gText_Rom_23664A) > 0x2d
	.error "gText_Rom_23664A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23664A) < 0x2d
	.space 0x2d - (. - gText_Rom_23664A)
	.endif
