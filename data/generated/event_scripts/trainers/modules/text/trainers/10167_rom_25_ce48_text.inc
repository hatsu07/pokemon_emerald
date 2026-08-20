	@ data/text/trainers.inc:1367 Route114_Text_ClaudeDefeat (+1 aliases)
	.globl gText_Rom_25CE48
gText_Rom_25CE48: @ 0x0825CE48
	.string "つりの しょうぶなら かってた……{EOS}"
	.if (. - gText_Rom_25CE48) > 0x12
	.error "gText_Rom_25CE48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CE48) < 0x12
	.space 0x12 - (. - gText_Rom_25CE48)
	.endif
