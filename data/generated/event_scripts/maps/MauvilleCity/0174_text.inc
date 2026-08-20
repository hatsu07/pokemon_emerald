	@ data/maps/MauvilleCity/scripts.inc:507 MauvilleCity_Text_WallyPleaseBattleMe
	.globl gText_Rom_1DE01F
gText_Rom_1DE01F: @ 0x081DE01F
	.string "ミツル『{PLAYER}さん おねがいです!\nぼくと しょうぶ してください{EOS}"
	.if (. - gText_Rom_1DE01F) > 0x21
	.error "gText_Rom_1DE01F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE01F) < 0x21
	.space 0x21 - (. - gText_Rom_1DE01F)
	.endif
