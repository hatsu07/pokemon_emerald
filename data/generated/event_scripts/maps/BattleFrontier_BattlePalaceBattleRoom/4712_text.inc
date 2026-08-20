	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:482 BattleFrontier_BattlePalaceBattleRoom_Text_RecordLastMatch
	.globl gText_Rom_22B94A
gText_Rom_22B94A: @ 0x0822B94A
	.string "さきほどの たたかいを\nフロンティアパスに きろく するか?{EOS}"
	.if (. - gText_Rom_22B94A) > 0x1f
	.error "gText_Rom_22B94A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B94A) < 0x1f
	.space 0x1f - (. - gText_Rom_22B94A)
	.endif
