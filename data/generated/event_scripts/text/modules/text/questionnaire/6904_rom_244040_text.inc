	@ data/text/questionnaire.inc:34 MysteryGift_Text_TheresATicketForYou
	.globl gText_Rom_244040
gText_Rom_244040: @ 0x08244040
	.string "ふしぎなできごと を ごりよう\nいただき ありがとう ございます!\l{PLAYER}さま ですね\pあなたさま あてに\nこの チケットが\lおくられて きました$"
	.if (. - gText_Rom_244040) > 0x49
	.error "gText_Rom_244040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244040) < 0x49
	.space 0x49 - (. - gText_Rom_244040)
	.endif
