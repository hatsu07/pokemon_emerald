	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:539 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserThisTimeWontHoldBack
	.globl gText_Rom_22BB57
gText_Rom_22BB57: @ 0x0822BB57
	.string "ウコン『ぐわはっはっ!\nここまで かちぬいて きおったか!\pおまえは ポケモン たちと\nまことに ええ かんけいを\lきずいて おるよう だな!\pうむ!\pほいじゃあ こんどは わしらも\nハッタリや てかげんは\lいっさい ぬきで いくと しよう!\pええか? かくご せい!!{EOS}"
	.if (. - gText_Rom_22BB57) > 0x88
	.error "gText_Rom_22BB57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BB57) < 0x88
	.space 0x88 - (. - gText_Rom_22BB57)
	.endif
