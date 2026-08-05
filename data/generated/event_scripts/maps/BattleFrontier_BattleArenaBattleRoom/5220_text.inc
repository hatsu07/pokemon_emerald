	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:554 BattleFrontier_BattleArenaBattleRoom_Text_PreparedForTycoon
	.globl gText_Rom_230B18
gText_Rom_230B18: @ 0x08230B18
	.string "アリーナキャプテンとの しょうぶ!\nかくごの ほうは よろしい ですかな?"
	.byte EOS
	.if (. - gText_Rom_230B18) > 0x26
	.error "gText_Rom_230B18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230B18) < 0x26
	.space 0x26 - (. - gText_Rom_230B18)
	.endif
