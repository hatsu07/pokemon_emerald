	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:498 BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer
	.globl gText_Rom_230930
gText_Rom_230930: @ 0x08230930
	.string "しんぱん『しょうしゃーーー!\n{PLAYER}!!"
	.byte EOS
	.if (. - gText_Rom_230930) > 0x14
	.error "gText_Rom_230930 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230930) < 0x14
	.space 0x14 - (. - gText_Rom_230930)
	.endif
