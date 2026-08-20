	@ data/maps/MauvilleCity/scripts.inc:511 MauvilleCity_Text_WallyHereICome
	.globl gText_Rom_1DE040
gText_Rom_1DE040: @ 0x081DE040
	.string "ミツル『ありがとう {PLAYER}さん\pそれでは…… いきますね!{EOS}"
	.if (. - gText_Rom_1DE040) > 0x1d
	.error "gText_Rom_1DE040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE040) < 0x1d
	.space 0x1d - (. - gText_Rom_1DE040)
	.endif
