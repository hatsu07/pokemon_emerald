	@ data/text/trainers.inc:3263 Route132_Text_JonathanPostBattle
	.globl gText_Rom_261D2F
gText_Rom_261D2F: @ 0x08261D2F
	.string "だれかが ぼくの ことを\nみているきが して おちつかないっ!{EOS}"
	.if (. - gText_Rom_261D2F) > 0x20
	.error "gText_Rom_261D2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261D2F) < 0x20
	.space 0x20 - (. - gText_Rom_261D2F)
	.endif
