	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:486 BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward
	.globl gText_Rom_2308E8
gText_Rom_2308E8: @ 0x082308E8
	.string "しんぱん『トレーナー {PLAYER}!\nまえへーーー!"
	.byte EOS
	.if (. - gText_Rom_2308E8) > 0x17
	.error "gText_Rom_2308E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2308E8) < 0x17
	.space 0x17 - (. - gText_Rom_2308E8)
	.endif
