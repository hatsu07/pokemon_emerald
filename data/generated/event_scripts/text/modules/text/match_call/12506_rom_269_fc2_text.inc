	@ data/text/match_call.inc:634 MatchCall_Text_Roxanne_PostRematch
	.globl gText_Rom_269FC2
gText_Rom_269FC2: @ 0x08269FC2
	.string "ツツジ『{PLAYER}さんと\nしょうぶ できたことは\lカナズミ ジムの ほこりですよ!"
	.byte EOS
	.if (. - gText_Rom_269FC2) > 0x27
	.error "gText_Rom_269FC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269FC2) < 0x27
	.space 0x27 - (. - gText_Rom_269FC2)
	.endif
