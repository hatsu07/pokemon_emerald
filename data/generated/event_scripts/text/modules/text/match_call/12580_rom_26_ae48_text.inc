	@ data/text/match_call.inc:745 MatchCall_Text_May6
	.globl gText_Rom_26AE48
gText_Rom_26AE48: @ 0x0826AE48
	.string "ハルカ『あっ {PLAYER}{KUN}!\pさばくに げんえいのとう っていうのが\nたってるの しってる?\pしんきろう みたいに\nみえたり みえなかったり するんだって!\pあたしも みてみたいなー"
	.byte EOS
	.if (. - gText_Rom_26AE48) > 0x5a
	.error "gText_Rom_26AE48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AE48) < 0x5a
	.space 0x5a - (. - gText_Rom_26AE48)
	.endif
