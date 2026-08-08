	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:384 BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa
	.globl gText_Rom_21F34A
gText_Rom_21F34A: @ 0x0821F34A
	.string "ほら じいちゃん こっち こっち!\nここが バトルドームよっ! がんばって!"
	.byte EOS
	.if (. - gText_Rom_21F34A) > 0x27
	.error "gText_Rom_21F34A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F34A) < 0x27
	.space 0x27 - (. - gText_Rom_21F34A)
	.endif
