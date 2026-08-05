	@ data/text/match_call.inc:538 MatchCall_BattlePikeText3
	.globl gText_Rom_26965A
gText_Rom_26965A: @ 0x0826965A
	.string "よう {PLAYER}!\n{STR_VAR_1}だぞ げんきかー?\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ したって きいたぞ\pつぎも がんばれよなー\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_26965A) > 0x3f
	.error "gText_Rom_26965A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26965A) < 0x3f
	.space 0x3f - (. - gText_Rom_26965A)
	.endif
