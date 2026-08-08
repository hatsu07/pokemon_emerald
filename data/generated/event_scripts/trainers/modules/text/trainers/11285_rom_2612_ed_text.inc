	@ data/text/trainers.inc:3008 Route128_Text_KatelynRematchIntro (+1 aliases)
	.globl gText_Rom_2612ED
gText_Rom_2612ED: @ 0x082612ED
	.string "トライアスロンも ながいけど\nポケモン チャンピオンを めざすのも\lながい みちのり なのね!$"
	.if (. - gText_Rom_2612ED) > 0x30
	.error "gText_Rom_2612ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2612ED) < 0x30
	.space 0x30 - (. - gText_Rom_2612ED)
	.endif
