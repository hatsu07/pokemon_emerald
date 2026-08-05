	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:326 BattleFrontier_BattlePikeThreePathRoom_Text_ApologizeForImpertinence
	.globl gText_Rom_234234
gText_Rom_234234: @ 0x08234234
	.string "さようで ございますか……\nこれは しつれいを しました……"
	.byte EOS
	.if (. - gText_Rom_234234) > 0x1f
	.error "gText_Rom_234234 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234234) < 0x1f
	.space 0x1f - (. - gText_Rom_234234)
	.endif
