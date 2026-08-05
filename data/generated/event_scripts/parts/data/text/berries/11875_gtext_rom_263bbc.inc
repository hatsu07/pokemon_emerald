	@ data/text/berries.inc:109 Route123_BerryMastersHouse_Text_HeardAGoodSayingLately
	.globl gText_Rom_263BBC
gText_Rom_263BBC: @ 0x08263BBC
	.string "じいさんの きのみの そだてかたは\nそりゃあ せかいいちじゃ\pわしも はなが たかいわい\pところで あんた\nいい ことばを きいたことが ないかい?$"
	.if (. - gText_Rom_263BBC) > 0x4b
	.error "gText_Rom_263BBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263BBC) < 0x4b
	.space 0x4b - (. - gText_Rom_263BBC)
	.endif
