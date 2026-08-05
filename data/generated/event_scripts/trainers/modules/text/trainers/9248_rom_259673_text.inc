	@ data/text/trainers.inc:31 Route102_Text_AllenPostBattle
	.globl gText_Rom_259673
gText_Rom_259673: @ 0x08259673
	.string "まだ 1かいも かってない……\nはやく かちたいなあ……"
	.byte EOS
	.if (. - gText_Rom_259673) > 0x1d
	.error "gText_Rom_259673 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259673) < 0x1d
	.space 0x1d - (. - gText_Rom_259673)
	.endif
