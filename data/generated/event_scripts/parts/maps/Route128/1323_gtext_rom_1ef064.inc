	@ data/maps/Route128/scripts.inc:250 Route128_Text_MaxieDoYouUnderstandNow
	.globl gText_Rom_1EF064
gText_Rom_1EF064: @ 0x081EF064
	.string "マツブサ『わかったか アオギリ!\pおまえの……\nいや われわれの したことが\lどれほど おろか だったのか……\pとにかく いそぐんだ!\nこれいじょう ひどく ならぬうちに\lなんとか しないとな!$"
	.if (. - gText_Rom_1EF064) > 0x62
	.error "gText_Rom_1EF064 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EF064) < 0x62
	.space 0x62 - (. - gText_Rom_1EF064)
	.endif
