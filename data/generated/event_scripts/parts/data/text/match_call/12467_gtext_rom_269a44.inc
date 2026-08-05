	@ data/text/match_call.inc:580 MatchCall_BattlePyramidText3
	.globl gText_Rom_269A44
gText_Rom_269A44: @ 0x08269A44
	.string "よう {PLAYER}!\n{STR_VAR_1}だぞ げんきかー?\p{STR_VAR_2}で {STR_VAR_3}だんも\nのぼったって きいたぞ\pつぎも がんばれよなー\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_269A44) > 0x3d
	.error "gText_Rom_269A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269A44) < 0x3d
	.space 0x3d - (. - gText_Rom_269A44)
	.endif
