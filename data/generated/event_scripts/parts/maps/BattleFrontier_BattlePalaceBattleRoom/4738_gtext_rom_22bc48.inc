	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:561 BattleFrontier_BattlePalaceBattleRoom_Text_HurryWithFrontierPass
	.globl gText_Rom_22BC48
gText_Rom_22BC48: @ 0x0822BC48
	.string "ったく ここの イメージと いうのを\nかんがえて くれない おかた だ……\pええい! おまえ!!\nさっさと フロンティアパスを かさんか!$"
	.if (. - gText_Rom_22BC48) > 0x46
	.error "gText_Rom_22BC48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BC48) < 0x46
	.space 0x46 - (. - gText_Rom_22BC48)
	.endif
