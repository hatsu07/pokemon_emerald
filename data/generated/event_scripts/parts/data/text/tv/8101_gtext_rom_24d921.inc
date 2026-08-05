	@ data/text/tv.inc:1078 SlateportCity_OceanicMuseum_1F_Text_LetMeKnowIfYouHaveStory
	.globl gText_Rom_24D921
gText_Rom_24D921: @ 0x0824D921
	.string "そうですか……\pでは また なにか おもしろい はなしが\nあったら きかせて くださいね$"
	.if (. - gText_Rom_24D921) > 0x2d
	.error "gText_Rom_24D921 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D921) < 0x2d
	.space 0x2d - (. - gText_Rom_24D921)
	.endif
