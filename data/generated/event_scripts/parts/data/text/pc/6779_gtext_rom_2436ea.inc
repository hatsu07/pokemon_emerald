	@ data/text/pc.inc:9 gText_AccessedSomeonesPC
	.globl gText_Rom_2436EA
gText_Rom_2436EA: @ 0x082436EA
	.string "だれかの パソコンに せつぞく した!$"
	.if (. - gText_Rom_2436EA) > 0x14
	.error "gText_Rom_2436EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436EA) < 0x14
	.space 0x14 - (. - gText_Rom_2436EA)
	.endif
