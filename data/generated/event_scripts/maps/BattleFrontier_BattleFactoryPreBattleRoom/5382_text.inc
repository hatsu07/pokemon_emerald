	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:573 BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerHasNoClearFavorite
	.globl gText_Rom_2326DF
gText_Rom_2326DF: @ 0x082326DF
	.string "どうやら ポケモンの タイプには\nとくに こだわりが ないようで……"
	.byte EOS
	.if (. - gText_Rom_2326DF) > 0x23
	.error "gText_Rom_2326DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2326DF) < 0x23
	.space 0x23 - (. - gText_Rom_2326DF)
	.endif
