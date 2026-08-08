	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:313 BattleFrontier_BattlePikeThreePathRoom_Text_SavingYourData
	.globl gText_Rom_2341C3
gText_Rom_2341C3: @ 0x082341C3
	.string "レポートを かいています……\nしょうしょう おまち ください……"
	.byte EOS
	.if (. - gText_Rom_2341C3) > 0x21
	.error "gText_Rom_2341C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2341C3) < 0x21
	.space 0x21 - (. - gText_Rom_2341C3)
	.endif
