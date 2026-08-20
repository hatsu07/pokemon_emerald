	@ data/maps/Route123/scripts.inc:173 Route123_Text_LoveGrassMonsHaveAny
	.globl gText_Rom_1EE6AD
gText_Rom_1EE6AD: @ 0x081EE6AD
	.string "あたし くさタイプの ポケモン\nだいすき なの！\pあなたは くさタイプの ポケモン\nもって いないの……？{EOS}"
	.if (. - gText_Rom_1EE6AD) > 0x36
	.error "gText_Rom_1EE6AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EE6AD) < 0x36
	.space 0x36 - (. - gText_Rom_1EE6AD)
	.endif
