	@ data/text/apprentice.inc:64 gText_ApprenticeRejectTeaching1
	.globl gText_Rom_26D1B7
gText_Rom_26D1B7: @ 0x0826D1B7
	.string "えー? どうして?\nねーっ いいでしょ いいでしょ\lせんせいに なってよ おねがい!"
	.byte EOS
	.if (. - gText_Rom_26D1B7) > 0x2b
	.error "gText_Rom_26D1B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D1B7) < 0x2b
	.space 0x2b - (. - gText_Rom_26D1B7)
	.endif
