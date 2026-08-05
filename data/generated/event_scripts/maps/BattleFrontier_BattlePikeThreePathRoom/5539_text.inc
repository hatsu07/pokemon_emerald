	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:334 BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutCenterPath
	.globl gText_Rom_234271
gText_Rom_234271: @ 0x08234271
	.string "そうですね……\n…… わたくしは まんなかの みちから……"
	.byte EOS
	.if (. - gText_Rom_234271) > 0x1e
	.error "gText_Rom_234271 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234271) < 0x1e
	.space 0x1e - (. - gText_Rom_234271)
	.endif
