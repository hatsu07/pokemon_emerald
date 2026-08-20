	@ data/maps/Route121/scripts.inc:180 Route121_Text_MtPyrePierSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EE388
gText_Rom_1EE388: @ 0x081EE388
	.string "おくりびやま さんばし\p……ながい あいだ つかわれて いないのか\nもじが きえそうに なっている{EOS}"
	.if (. - gText_Rom_1EE388) != 0x32
	.error "gText_Rom_1EE388 must retain its original byte length"
	.endif
