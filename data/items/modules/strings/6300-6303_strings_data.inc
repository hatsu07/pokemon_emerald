	@ src/strings.c:758 gText_RecordingGameResults
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_RecordingGameResults
gText_RecordingGameResults: @ 0x085CC917
	.string " ゲームの けっかを\nポケモンレポートに かきこんでいます\lしばらく おまちください{EOS}"
	.if (. - gText_RecordingGameResults) != 0x2b
	.error "gText_RecordingGameResults must retain its original byte length"
	.endif
	.globl gText_Rom_5CC918
	.set gText_Rom_5CC918, gText_RecordingGameResults + 0x1
	.globl gText_Rom_5CC935
	.set gText_Rom_5CC935, gText_RecordingGameResults + 0x1e

	@ src/strings.c:759 gText_PlayBerryCrushAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PlayBerryCrushAgain
gText_PlayBerryCrushAgain: @ 0x085CC942
	.string "  きのみクラッシュで もういちど\nあそびますか?{EOS}"
	.if (. - gText_PlayBerryCrushAgain) != 0x1a
	.error "gText_PlayBerryCrushAgain must retain its original byte length"
	.endif
