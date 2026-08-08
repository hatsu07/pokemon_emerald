	@ data/text/trainers.inc:2678 Route124_Text_RoyRematchIntro (+1 aliases)
	.globl gText_Rom_2605C8
gText_Rom_2605C8: @ 0x082605C8
	.string "コウ『まけたら オレが おこられるから\nむちゃくちゃ ほんきで がんばるぞ!$"
	.if (. - gText_Rom_2605C8) > 0x27
	.error "gText_Rom_2605C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2605C8) < 0x27
	.space 0x27 - (. - gText_Rom_2605C8)
	.endif
