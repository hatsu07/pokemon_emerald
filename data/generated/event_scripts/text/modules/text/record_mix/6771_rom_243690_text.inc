	@ data/text/record_mix.inc:1 Text_WouldYouLikeToMixRecords
	.globl gText_Rom_243690
gText_Rom_243690: @ 0x08243690
	.string "おともだちと レポートを\nまぜますか?{EOS}"
	.if (. - gText_Rom_243690) > 0x14
	.error "gText_Rom_243690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243690) < 0x14
	.space 0x14 - (. - gText_Rom_243690)
	.endif
