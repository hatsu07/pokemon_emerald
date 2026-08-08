	@ data/maps/Route113/scripts.inc:163 Route113_Text_GlassWorkshopSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EB454
gText_Rom_1EB454: @ 0x081EB454
	.string "「ガラスざいくの おみせ」\nかざんばい から ガラスの どうぐ$"
	.if (. - gText_Rom_1EB454) != 0x20
	.error "gText_Rom_1EB454 must retain its original byte length"
	.endif
