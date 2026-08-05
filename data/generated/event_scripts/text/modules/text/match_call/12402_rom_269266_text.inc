	@ data/text/match_call.inc:496 MatchCall_BattleDomeText3
	.globl gText_Rom_269266
gText_Rom_269266: @ 0x08269266
	.string "よう {PLAYER}!\n{STR_VAR_1}だぞ げんきかー?\p{STR_VAR_2}で {STR_VAR_3}かいも\nゆうしょう したって きいたぞ\pつぎも がんばれよなー\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_269266) > 0x41
	.error "gText_Rom_269266 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269266) < 0x41
	.space 0x41 - (. - gText_Rom_269266)
	.endif
