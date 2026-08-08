	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:364 BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch (+2 aliases)
	.globl gText_Rom_2328AF
gText_Rom_2328AF: @ 0x082328AF
	.string "さきほどの たたかいを\nフロンティアパスに きろく しますか?"
	.byte EOS
	.if (. - gText_Rom_2328AF) > 0x20
	.error "gText_Rom_2328AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2328AF) < 0x20
	.space 0x20 - (. - gText_Rom_2328AF)
	.endif
