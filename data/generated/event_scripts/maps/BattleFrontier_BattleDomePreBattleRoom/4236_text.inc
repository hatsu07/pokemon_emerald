	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:364 BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch (+2 aliases)
	.globl gText_Rom_2223F2
gText_Rom_2223F2: @ 0x082223F2
	.string "さきほどの たたかいを\nフロンティアパスに きろく しますか?"
	.byte EOS
	.if (. - gText_Rom_2223F2) > 0x20
	.error "gText_Rom_2223F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2223F2) < 0x20
	.space 0x20 - (. - gText_Rom_2223F2)
	.endif

