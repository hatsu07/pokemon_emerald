	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:583 BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll
	.globl gText_Rom_230C1C
gText_Rom_230C1C: @ 0x08230C1C
	.string "コゴミ『やだ ちょっとー!\nあなた ぜんぜん つよい じゃんー!\lきにいった! フロンティアパス かしてっ!"
	.byte EOS
	.if (. - gText_Rom_230C1C) > 0x37
	.error "gText_Rom_230C1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230C1C) < 0x37
	.space 0x37 - (. - gText_Rom_230C1C)
	.endif
