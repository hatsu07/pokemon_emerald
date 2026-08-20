	@ data/maps/SeafloorCavern_Room9/scripts.inc:251 SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought
	.globl gText_Rom_218F44
gText_Rom_218F44: @ 0x08218F44
	.string "マツブサ『なんてことだ……\pアオギリよ…… おまえらも\nカイオーガを めざめさせて しまったな!\pこのまま えいえんに\nおおあめが ふりつづけたら\lせかいは いったい どうなる!\pすべての だいちは\nみずの そこに しずむぞ……{EOS}"
	.if (. - gText_Rom_218F44) > 0x73
	.error "gText_Rom_218F44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218F44) < 0x73
	.space 0x73 - (. - gText_Rom_218F44)
	.endif
