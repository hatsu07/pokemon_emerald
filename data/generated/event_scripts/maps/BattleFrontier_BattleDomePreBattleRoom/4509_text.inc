	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:364 BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch (+2 aliases)
	.globl gText_Rom_228716
gText_Rom_228716: @ 0x08228716
	.string "さきほどの たたかいを\nフロンティアパスに きろく しますか?{EOS}"
	.if (. - gText_Rom_228716) > 0x20
	.error "gText_Rom_228716 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_228716) < 0x20
	.space 0x20 - (. - gText_Rom_228716)
	.endif
