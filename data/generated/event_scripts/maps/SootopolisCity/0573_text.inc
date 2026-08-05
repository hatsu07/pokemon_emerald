	@ data/maps/SootopolisCity/scripts.inc:1498 SootopolisCity_Text_HereWereAreHelpWallace
	.globl gText_Rom_1E3656
gText_Rom_1E3656: @ 0x081E3656
	.string "ダイゴ『さあ ついた!\pこのおくに ミクリさん という\nひとが いるんだ\pきみなら かれの ちからに\nなって あげられると おもうよ……$"
	.if (. - gText_Rom_1E3656) > 0x45
	.error "gText_Rom_1E3656 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3656) < 0x45
	.space 0x45 - (. - gText_Rom_1E3656)
	.endif
