	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:490 BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward
	.globl gText_Rom_2308FF
gText_Rom_2308FF: @ 0x082308FF
	.string "しんぱん『トレーナー {STR_VAR_1}!\nまえへーーー!"
	.byte EOS
	.if (. - gText_Rom_2308FF) > 0x17
	.error "gText_Rom_2308FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2308FF) < 0x17
	.space 0x17 - (. - gText_Rom_2308FF)
	.endif
