	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:170 LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings
	.globl gText_Rom_205E33
gText_Rom_205E33: @ 0x08205E33
	.string "おや? あなたは\nポケモントレーナーさん みたい ですね\pえにも きょうみが おあり ですか?$"
	.if (. - gText_Rom_205E33) > 0x30
	.error "gText_Rom_205E33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205E33) < 0x30
	.space 0x30 - (. - gText_Rom_205E33)
	.endif
