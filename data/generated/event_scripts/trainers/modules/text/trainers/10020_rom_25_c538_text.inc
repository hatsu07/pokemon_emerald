	@ data/text/trainers.inc:1148 Route112_Text_ShaylaIntro (+1 aliases)
	.globl gText_Rom_25C538
gText_Rom_25C538: @ 0x0825C538
	.string "アラ! すてきな トレーナーさん\nロマンチックな しょうぶを おねがいね!\lマアマア つよいわよ わたし!{EOS}"
	.if (. - gText_Rom_25C538) > 0x36
	.error "gText_Rom_25C538 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C538) < 0x36
	.space 0x36 - (. - gText_Rom_25C538)
	.endif
