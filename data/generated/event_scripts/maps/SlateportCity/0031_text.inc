	@ data/maps/SlateportCity/scripts.inc:994 SlateportCity_Text_EveryoneCallsHimCaptStern
	.globl gText_Rom_1DCC5B
gText_Rom_1DCC5B: @ 0x081DCC5B
	.string "この はくぶつかんを つくったのは\nクスノキさん といって\pかいていを たんさくする せんすいていの\nかんちょう でも あるんだ!\pせんすいていの かんちょうで\nはくぶつかんの かんちょう……\pまあ どっちにせよ\nクスノキかんちょう と よんでおけば\lまちがい ないよな!$"
	.if (. - gText_Rom_1DCC5B) > 0x89
	.error "gText_Rom_1DCC5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCC5B) < 0x89
	.space 0x89 - (. - gText_Rom_1DCC5B)
	.endif
