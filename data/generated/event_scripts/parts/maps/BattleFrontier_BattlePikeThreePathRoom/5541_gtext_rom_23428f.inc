	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:338 BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutLeftPath
	.globl gText_Rom_23428F
gText_Rom_23428F: @ 0x0823428F
	.string "そうですね……\n…… わたくしは ひだりがわの みちから……"
	.byte EOS
	.if (. - gText_Rom_23428F) > 0x1f
	.error "gText_Rom_23428F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23428F) < 0x1f
	.space 0x1f - (. - gText_Rom_23428F)
	.endif
