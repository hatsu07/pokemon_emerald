	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:558 BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta
	.globl gText_Rom_230B3E
gText_Rom_230B3E: @ 0x08230B3E
	.string "しんぱん『アリーナキャプテン! コゴミさま!\nごにゅうじょうーーー!"
	.byte EOS
	.if (. - gText_Rom_230B3E) > 0x23
	.error "gText_Rom_230B3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230B3E) < 0x23
	.space 0x23 - (. - gText_Rom_230B3E)
	.endif
