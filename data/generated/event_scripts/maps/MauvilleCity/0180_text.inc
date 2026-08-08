	@ data/maps/MauvilleCity/scripts.inc:520 MauvilleCity_Text_WallyIllGoBackToVerdanturf
	.globl gText_Rom_1DE085
gText_Rom_1DE085: @ 0x081DE085
	.string "ミツル『おじさん……\nぼく シダケに もどります$"
	.if (. - gText_Rom_1DE085) > 0x19
	.error "gText_Rom_1DE085 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE085) < 0x19
	.space 0x19 - (. - gText_Rom_1DE085)
	.endif
