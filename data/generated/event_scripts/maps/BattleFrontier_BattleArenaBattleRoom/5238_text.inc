	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:598 BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain
	.globl gText_Rom_230C8E
gText_Rom_230C8E: @ 0x08230C8E
	.string "コゴミ『ウィーッス! ごぶさたー!\nやーっと ここまで かちぬいて きたね!\pおそいから しんぱい しちゃったよーっ!\nあなたと あえるの もの すっごーくっ!\lたのしみに してたん だからねーっ!!"
	.byte EOS
	.if (. - gText_Rom_230C8E) > 0x65
	.error "gText_Rom_230C8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230C8E) < 0x65
	.space 0x65 - (. - gText_Rom_230C8E)
	.endif
