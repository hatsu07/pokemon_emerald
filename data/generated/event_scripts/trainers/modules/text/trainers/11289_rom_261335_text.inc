	@ data/text/trainers.inc:3014 Route128_Text_KatelynPostRematch
	.globl gText_Rom_261335
gText_Rom_261335: @ 0x08261335
	.string "そろそろ チャンピオンロードに\nちょうせん してみるのも あり かな?{EOS}"
	.if (. - gText_Rom_261335) > 0x24
	.error "gText_Rom_261335 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261335) < 0x24
	.space 0x24 - (. - gText_Rom_261335)
	.endif
