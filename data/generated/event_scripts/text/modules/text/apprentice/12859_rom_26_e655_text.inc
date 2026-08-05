	@ data/text/apprentice.inc:208 gText_ApprenticeRejectTeaching13
	.globl gText_Rom_26E655
gText_Rom_26E655: @ 0x0826E655
	.string "えー なんで!\pそんなに めんどうは かけないからさ\nおねがいだよ!"
	.byte EOS
	.if (. - gText_Rom_26E655) > 0x23
	.error "gText_Rom_26E655 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E655) < 0x23
	.space 0x23 - (. - gText_Rom_26E655)
	.endif
