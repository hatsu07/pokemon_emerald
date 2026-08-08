	@ data/text/trainers.inc:224 Route104_Text_HaleyDefeat (+1 aliases)
	.globl gText_Rom_259F1B
gText_Rom_259F1B: @ 0x08259F1B
	.string "たたかわなければ よかったかな……"
	.byte EOS
	.if (. - gText_Rom_259F1B) > 0x12
	.error "gText_Rom_259F1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259F1B) < 0x12
	.space 0x12 - (. - gText_Rom_259F1B)
	.endif
