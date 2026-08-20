	@ data/text/trainers.inc:2957 Route127_Text_KojiRematchIntro (+1 aliases)
	.globl gText_Rom_2610E2
gText_Rom_2610E2: @ 0x082610E2
	.string "きょうも はだしで かけまわって\nあしの うらを きたえまくりだ!{EOS}"
	.if (. - gText_Rom_2610E2) > 0x22
	.error "gText_Rom_2610E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2610E2) < 0x22
	.space 0x22 - (. - gText_Rom_2610E2)
	.endif
