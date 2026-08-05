	@ src/strings.c:758 gText_RecordingGameResults
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC917
gText_Rom_5CC917: @ 0x085CC917
	.string " ゲームの けっかを\nポケモンレポートに かきこんでいます\lしばらく おまちください$"
	.if (. - gText_Rom_5CC917) != 0x2b
	.error "gText_Rom_5CC917 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC918
	.set gText_Rom_5CC918, gText_Rom_5CC917 + 0x1
	.globl gText_Rom_5CC935
	.set gText_Rom_5CC935, gText_Rom_5CC917 + 0x1e

	@ src/strings.c:759 gText_PlayBerryCrushAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC942
gText_Rom_5CC942: @ 0x085CC942
	.string "  きのみクラッシュで もういちど\nあそびますか?$"
	.if (. - gText_Rom_5CC942) != 0x1a
	.error "gText_Rom_5CC942 must retain its original byte length"
	.endif
