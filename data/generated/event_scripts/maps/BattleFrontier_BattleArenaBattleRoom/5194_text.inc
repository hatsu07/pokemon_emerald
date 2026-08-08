	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:501 BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent
	.globl gText_Rom_230944
gText_Rom_230944: @ 0x08230944
	.string "しんぱん『しょうしゃーーー!\n{STR_VAR_1}!!"
	.byte EOS
	.if (. - gText_Rom_230944) > 0x14
	.error "gText_Rom_230944 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230944) < 0x14
	.space 0x14 - (. - gText_Rom_230944)
	.endif
