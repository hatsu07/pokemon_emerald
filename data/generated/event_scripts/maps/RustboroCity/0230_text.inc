	@ data/maps/RustboroCity/scripts.inc:1037 RustboroCity_Text_YoureNewAroundHere
	.globl gText_Rom_1DF372
gText_Rom_1DF372: @ 0x081DF372
	.string "おや? きみは だれだい?\nこの あたりでは みかけない かお だね\pトレーナーズ スクールの てんこうせい?$"
	.if (. - gText_Rom_1DF372) > 0x38
	.error "gText_Rom_1DF372 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF372) < 0x38
	.space 0x38 - (. - gText_Rom_1DF372)
	.endif
