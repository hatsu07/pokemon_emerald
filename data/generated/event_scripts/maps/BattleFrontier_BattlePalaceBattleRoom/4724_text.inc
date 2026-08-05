	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:516 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserPostSilverBattle
	.globl gText_Rom_22BA8A
gText_Rom_22BA8A: @ 0x0822BA8A
	.string "ウコン『ぐわはっはっ!\pやはり ハッタリ なんぞ きかんか!!\nおどしたり して わるかったのぅ!!\pおーい! あれを!$"
	.if (. - gText_Rom_22BA8A) > 0x3d
	.error "gText_Rom_22BA8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BA8A) < 0x3d
	.space 0x3d - (. - gText_Rom_22BA8A)
	.endif
