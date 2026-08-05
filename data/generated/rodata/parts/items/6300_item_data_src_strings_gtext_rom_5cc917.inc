	@ src/strings.c:758 gText_RecordingGameResults
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC917
gText_Rom_5CC917: @ 0x085CC917
	.string " ゲームの けっかを\nポケモンレポートに かきこんでいます\lしばらく おまちください$"
	.if (. - gText_Rom_5CC917) != 0x2b
	.error "gText_Rom_5CC917 must retain its original byte length"
	.endif
