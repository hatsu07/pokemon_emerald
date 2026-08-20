	@ data/maps/MauvilleCity/scripts.inc:467 MauvilleCity_Text_WallyWantToChallengeGym
	.globl gText_Rom_1DDE51
gText_Rom_1DDE51: @ 0x081DDE51
	.string "ミツル『おじさん おねがい だから!\pじぶんが どれくらい つよくなったか\nこのジムで ためして みたいんだ!\pね ね いいでしょう!?{EOS}"
	.if (. - gText_Rom_1DDE51) > 0x45
	.error "gText_Rom_1DDE51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DDE51) < 0x45
	.space 0x45 - (. - gText_Rom_1DDE51)
	.endif
