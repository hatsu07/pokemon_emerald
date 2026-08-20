	@ data/text/trainers.inc:2969 Route127_Text_AthenaDefeat (+1 aliases)
	.globl gText_Rom_261157
gText_Rom_261157: @ 0x08261157
	.string "せんりゃくを ねる ひまも なかったわ{EOS}"
	.if (. - gText_Rom_261157) > 0x14
	.error "gText_Rom_261157 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261157) < 0x14
	.space 0x14 - (. - gText_Rom_261157)
	.endif
