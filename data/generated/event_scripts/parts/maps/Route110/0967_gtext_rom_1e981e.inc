	@ data/maps/Route110/scripts.inc:768 Route110_Text_MayTakeThis
	.globl gText_Rom_1E981E
gText_Rom_1E981E: @ 0x081E981E
	.string "ハルカ『{PLAYER}{KUN}も\nポケモン そだててるんだね!\pうん じゃあ これは\nあたしからの プレゼントよ!$"
	.if (. - gText_Rom_1E981E) > 0x33
	.error "gText_Rom_1E981E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E981E) < 0x33
	.space 0x33 - (. - gText_Rom_1E981E)
	.endif
