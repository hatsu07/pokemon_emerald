	@ data/text/match_call.inc:547 MatchCall_BattlePikeText6
	.globl gText_Rom_269715
gText_Rom_269715: @ 0x08269715
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で {STR_VAR_3}へやも\lとっぱ したんだってね\pおれも まけないように\nポケモンを そだてなきゃな"
	.byte EOS
	.if (. - gText_Rom_269715) > 0x4d
	.error "gText_Rom_269715 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269715) < 0x4d
	.space 0x4d - (. - gText_Rom_269715)
	.endif
