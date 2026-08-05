	@ data/text/apprentice.inc:860 gText_ApprenticePickWinSpeech15
	.globl gText_Rom_2737F9
gText_Rom_2737F9: @ 0x082737F9
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんものかな?\l{PLAYER}{KUN} ぬいぐるみ では?\pいや! いやいやいやいや!\nすまない ほんものなら いいんだ\lまあ そう おこらないで くれ!\lそれでもって じょげんを おねがいする\lことばに かんする ことだ!\pもし わたしが しょうぶに かったら\nぜんたい なんと いえば いいかね?$"
	.if (. - gText_Rom_2737F9) > 0xa4
	.error "gText_Rom_2737F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2737F9) < 0xa4
	.space 0xa4 - (. - gText_Rom_2737F9)
	.endif
