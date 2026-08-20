	@ data/maps/SootopolisCity/scripts.inc:1510 SootopolisCity_Text_MaxieArchieLeft
	.globl gText_Rom_1E3726
gText_Rom_1E3726: @ 0x081E3726
	.string "ダイゴ『マツブサと アオギリの ふたりは\nどこかへ いって しまった ようだね\pもしかすると おくりびやまに\nたまを かえしに いったのかも……{EOS}"
	.if (. - gText_Rom_1E3726) > 0x49
	.error "gText_Rom_1E3726 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E3726) < 0x49
	.space 0x49 - (. - gText_Rom_1E3726)
	.endif
