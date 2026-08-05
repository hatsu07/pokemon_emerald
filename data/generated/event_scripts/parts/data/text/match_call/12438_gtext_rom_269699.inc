	@ data/text/match_call.inc:541 MatchCall_BattlePikeText4
	.globl gText_Rom_269699
gText_Rom_269699: @ 0x08269699
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ した らしいね\pおれも まけないように\nポケモン そだてなきゃな"
	.byte EOS
	.if (. - gText_Rom_269699) > 0x3c
	.error "gText_Rom_269699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269699) < 0x3c
	.space 0x3c - (. - gText_Rom_269699)
	.endif
