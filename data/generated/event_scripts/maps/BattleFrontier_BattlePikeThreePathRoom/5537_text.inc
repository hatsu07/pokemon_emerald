	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:330 BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutRightPath
	.globl gText_Rom_234253
gText_Rom_234253: @ 0x08234253
	.string "そうですね……\n…… わたくしは みぎがわの みちから……"
	.byte EOS
	.if (. - gText_Rom_234253) > 0x1e
	.error "gText_Rom_234253 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234253) < 0x1e
	.space 0x1e - (. - gText_Rom_234253)
	.endif
