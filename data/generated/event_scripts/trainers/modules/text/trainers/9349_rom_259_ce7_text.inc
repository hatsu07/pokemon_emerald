	@ data/text/trainers.inc:181 Route104_Text_GinaDefeat (+1 aliases)
	.globl gText_Rom_259CE7
gText_Rom_259CE7: @ 0x08259CE7
	.string "ナオ『まけて すごく くやしいです"
	.byte EOS
	.if (. - gText_Rom_259CE7) > 0x12
	.error "gText_Rom_259CE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259CE7) < 0x12
	.space 0x12 - (. - gText_Rom_259CE7)
	.endif
