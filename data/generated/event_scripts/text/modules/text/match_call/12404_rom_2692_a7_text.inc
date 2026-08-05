	@ data/text/match_call.inc:499 MatchCall_BattleDomeText4
	.globl gText_Rom_2692A7
gText_Rom_2692A7: @ 0x082692A7
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}で {STR_VAR_3}かいも\nゆうしょう した らしいね\pがんばってる みたいだね\nぼくも まけないように しなきゃ"
	.byte EOS
	.if (. - gText_Rom_2692A7) > 0x43
	.error "gText_Rom_2692A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2692A7) < 0x43
	.space 0x43 - (. - gText_Rom_2692A7)
	.endif
