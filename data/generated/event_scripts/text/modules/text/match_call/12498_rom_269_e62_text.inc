	@ data/text/match_call.inc:622 MatchCall_Text_Mom3
	.globl gText_Rom_269E62
gText_Rom_269E62: @ 0x08269E62
	.string "ママ『{PLAYER}……\pおうちの ことなら きにしなくて いいから\nママが あげた ランニングシューズ\lボロボロに なるまで はいてちょうだいね!"
	.byte EOS
	.if (. - gText_Rom_269E62) > 0x46
	.error "gText_Rom_269E62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269E62) < 0x46
	.space 0x46 - (. - gText_Rom_269E62)
	.endif
