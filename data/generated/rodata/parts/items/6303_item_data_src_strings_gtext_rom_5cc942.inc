	@ src/strings.c:759 gText_PlayBerryCrushAgain
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC942
gText_Rom_5CC942: @ 0x085CC942
	.string "  きのみクラッシュで もういちど\nあそびますか?$"
	.if (. - gText_Rom_5CC942) != 0x1a
	.error "gText_Rom_5CC942 must retain its original byte length"
	.endif
