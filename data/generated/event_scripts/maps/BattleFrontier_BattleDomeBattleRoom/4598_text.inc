	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1134 BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed
	.globl gText_Rom_229BA1
gText_Rom_229BA1: @ 0x08229BA1
	.string "ヒース『ほーんと ステキっ! キミはっ!!\pすべてを だしきった わたしが\nかなわない なんて はじめてっ!!\pさあっ! キミの フロンティアパスを!!{EOS}"
	.if (. - gText_Rom_229BA1) > 0x4d
	.error "gText_Rom_229BA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229BA1) < 0x4d
	.space 0x4d - (. - gText_Rom_229BA1)
	.endif
