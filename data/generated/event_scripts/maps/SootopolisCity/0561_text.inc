	@ data/maps/SootopolisCity/scripts.inc:1480 SootopolisCity_Text_GroudonPleaseStop
	.globl gText_Rom_1E335D
gText_Rom_1E335D: @ 0x081E335D
	.string "マツブサ『グ… グラードン……\nたのむから もう やめてくれ!\pおまえの ちからは もう わかった!\pこのままでは ルネ だけじゃない\nホウエンじゅうが\lめちゃめちゃに なってしまう!$"
	.if (. - gText_Rom_1E335D) > 0x5d
	.error "gText_Rom_1E335D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E335D) < 0x5d
	.space 0x5d - (. - gText_Rom_1E335D)
	.endif
