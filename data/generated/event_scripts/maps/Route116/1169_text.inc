	@ data/maps/Route116/scripts.inc:402 Route116_Text_NewBallAvailableAtMart
	.globl gText_Rom_1EC1A8
gText_Rom_1EC1A8: @ 0x081EC1A8
	.string "あたらしい モンスターボールは\nカナズミの フレンドリィ ショップで\lうってますからね!\pぜひ つかって みてください!\nではでは……$"
	.if (. - gText_Rom_1EC1A8) > 0x44
	.error "gText_Rom_1EC1A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC1A8) < 0x44
	.space 0x44 - (. - gText_Rom_1EC1A8)
	.endif
