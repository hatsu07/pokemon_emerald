	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:486 BattleFrontier_BattlePalaceBattleRoom_Text_ChallengingPalaceMaven
	.globl gText_Rom_22B969
gText_Rom_22B969: @ 0x0822B969
	.string "さて……\pここまで かちぬいた おぬしは\nわれらが あるじ パレスガーディアンに\lちょうせんする しかくを てにした……$"
	.if (. - gText_Rom_22B969) > 0x3d
	.error "gText_Rom_22B969 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B969) < 0x3d
	.space 0x3d - (. - gText_Rom_22B969)
	.endif
