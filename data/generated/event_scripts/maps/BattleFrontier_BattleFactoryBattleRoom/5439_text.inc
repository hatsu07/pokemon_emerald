	@ data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc:295 BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass
	.globl gText_Rom_233023
gText_Rom_233023: @ 0x08233023
	.string "ダツラ『なんだよ! おめえー!!\nすっげぇ ことに なってんじゃ ねぇかよ!\pったく フロンティアパス よこしな!"
	.byte EOS
	.if (. - gText_Rom_233023) > 0x3a
	.error "gText_Rom_233023 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233023) < 0x3a
	.space 0x3a - (. - gText_Rom_233023)
	.endif
