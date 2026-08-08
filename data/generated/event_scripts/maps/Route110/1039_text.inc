	@ data/maps/Route110/scripts.inc:963 Route110_Text_ImagineSeeingYouHere
	.globl gText_Rom_1EA02B
gText_Rom_1EA02B: @ 0x081EA02B
	.string "オダマキ『おお {PLAYER}{KUN}!\nこんな ところに いたのかい!\pえーと うちの {RIVAL}は……$"
	.if (. - gText_Rom_1EA02B) > 0x2c
	.error "gText_Rom_1EA02B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA02B) < 0x2c
	.space 0x2c - (. - gText_Rom_1EA02B)
	.endif
