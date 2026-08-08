	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:659 BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons
	.globl gText_Rom_234CB1
gText_Rom_234CB1: @ 0x08234CB1
	.string "きみ……\pわたしと バトルしないかね?\nかてば ポケモンを かいふくして あげよう"
	.byte EOS
	.if (. - gText_Rom_234CB1) > 0x2a
	.error "gText_Rom_234CB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234CB1) < 0x2a
	.space 0x2a - (. - gText_Rom_234CB1)
	.endif
