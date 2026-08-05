	@ data/text/match_call.inc:646 MatchCall_Text_Brawly_PostRematch
	.globl gText_Rom_26A156
gText_Rom_26A156: @ 0x0826A156
	.string "トウキ『{PLAYER}{KUN} とは\nなんど しょうぶ しても あきないよ!"
	.byte EOS
	.if (. - gText_Rom_26A156) > 0x20
	.error "gText_Rom_26A156 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A156) < 0x20
	.space 0x20 - (. - gText_Rom_26A156)
	.endif
