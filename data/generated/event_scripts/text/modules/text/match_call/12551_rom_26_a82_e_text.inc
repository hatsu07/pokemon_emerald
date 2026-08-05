	@ data/text/match_call.inc:703 MatchCall_Text_Juan_RematchReady
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26A82E
gText_Rom_26A82E: @ 0x0826A82E
	.string "アダン『ほっほ…… {PLAYER}{KUN}\pわが ルネシティ ジムが\nふたたび オープン したのですよ\pわたくしの すがたを みたくなったら\nまあ いつでも おいでなさい"
	.byte EOS
	.if (. - gText_Rom_26A82E) != 0x4f
	.error "gText_Rom_26A82E must retain its original byte length"
	.endif
