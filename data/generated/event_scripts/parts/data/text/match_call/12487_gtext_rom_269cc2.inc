	@ data/text/match_call.inc:607 MatchCall_BattlePyramidText12
	.globl gText_Rom_269CC2
gText_Rom_269CC2: @ 0x08269CC2
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} とかいう ところで\n{STR_VAR_3}だんも かちぬいたとな?\pすごい はなし だのう\nでは またの"
	.byte EOS
	.if (. - gText_Rom_269CC2) > 0x45
	.error "gText_Rom_269CC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269CC2) < 0x45
	.space 0x45 - (. - gText_Rom_269CC2)
	.endif
