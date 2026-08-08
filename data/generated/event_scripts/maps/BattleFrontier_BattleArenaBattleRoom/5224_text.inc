	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:562 BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger
	.globl gText_Rom_230B61
gText_Rom_230B61: @ 0x08230B61
	.string "コゴミ『ウィーッス! よろしくー!!\p…… って あなたが ちょうせんしゃ?"
	.byte EOS
	.if (. - gText_Rom_230B61) > 0x27
	.error "gText_Rom_230B61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230B61) < 0x27
	.space 0x27 - (. - gText_Rom_230B61)
	.endif
