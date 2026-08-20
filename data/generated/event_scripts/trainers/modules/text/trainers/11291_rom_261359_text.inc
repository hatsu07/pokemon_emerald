	@ data/text/trainers.inc:3017 Route128_Text_AlexaIntro (+1 aliases)
	.globl gText_Rom_261359
gText_Rom_261359: @ 0x08261359
	.string "ポケモンリーグに ちょうせん するため\nいままで がんばって きた……\pここで まけるわけには いかないわ!{EOS}"
	.if (. - gText_Rom_261359) > 0x37
	.error "gText_Rom_261359 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261359) < 0x37
	.space 0x37 - (. - gText_Rom_261359)
	.endif
