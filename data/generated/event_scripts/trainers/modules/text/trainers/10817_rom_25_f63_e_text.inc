	@ data/text/trainers.inc:2309 Route121_Text_JoyDefeat (+1 aliases)
	.globl gText_Rom_25F63E
gText_Rom_25F63E: @ 0x0825F63E
	.string "ユイ『センパイ ごめんなさーい{EOS}"
	.if (. - gText_Rom_25F63E) > 0x10
	.error "gText_Rom_25F63E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F63E) < 0x10
	.space 0x10 - (. - gText_Rom_25F63E)
	.endif
