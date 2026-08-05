	@ data/maps/Route110/scripts.inc:797 Route110_Text_BrendanTakeThis
	.globl gText_Rom_1E9940
gText_Rom_1E9940: @ 0x081E9940
	.string "ユウキ『{PLAYER}も いつのまにか\nポケモン そだててたのか……\pよし!\nこれを やるよ$"
	.if (. - gText_Rom_1E9940) > 0x2a
	.error "gText_Rom_1E9940 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9940) < 0x2a
	.space 0x2a - (. - gText_Rom_1E9940)
	.endif
