	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1083 BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer
	.globl gText_Rom_229988
gText_Rom_229988: @ 0x08229988
	.string "なんとーーー! なんとーーーっ!\nたたかいに かったのは\l{PLAYER}さんだぁーーー!$"
	.if (. - gText_Rom_229988) > 0x28
	.error "gText_Rom_229988 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229988) < 0x28
	.space 0x28 - (. - gText_Rom_229988)
	.endif
