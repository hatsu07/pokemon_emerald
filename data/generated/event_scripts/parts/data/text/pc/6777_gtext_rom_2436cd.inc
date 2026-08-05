	@ data/text/pc.inc:5 gText_WhichPCShouldBeAccessed
	.globl gText_Rom_2436CD
gText_Rom_2436CD: @ 0x082436CD
	.string "どこの パソコンに せつぞく して\nつうしん しますか?$"
	.if (. - gText_Rom_2436CD) > 0x1d
	.error "gText_Rom_2436CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436CD) < 0x1d
	.space 0x1d - (. - gText_Rom_2436CD)
	.endif
