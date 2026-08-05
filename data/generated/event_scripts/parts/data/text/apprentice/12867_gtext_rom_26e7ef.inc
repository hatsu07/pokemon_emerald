	@ data/text/apprentice.inc:220 gText_ApprenticeRejectTeaching14
	.globl gText_Rom_26E7EF
gText_Rom_26E7EF: @ 0x0826E7EF
	.string "こ ことわらないでくれ!\nワシに はじを かかせないで くれ!\pおねがい だから\nワシの せんせいに なってくれ!"
	.byte EOS
	.if (. - gText_Rom_26E7EF) > 0x3a
	.error "gText_Rom_26E7EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E7EF) < 0x3a
	.space 0x3a - (. - gText_Rom_26E7EF)
	.endif
