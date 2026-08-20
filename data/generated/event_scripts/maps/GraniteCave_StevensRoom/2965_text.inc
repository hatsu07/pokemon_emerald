	@ data/maps/GraniteCave_StevensRoom/scripts.inc:82 GraniteCave_StevensRoom_Text_ImStevenLetterForMe
	.globl gText_Rom_214107
gText_Rom_214107: @ 0x08214107
	.string "ボクの なまえは ダイゴ\pめずらしい いしに きょうみが あって\nあちこち たび してるんだよ\pえっ?\nボクに てがみ……?{EOS}"
	.if (. - gText_Rom_214107) > 0x3f
	.error "gText_Rom_214107 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214107) < 0x3f
	.space 0x3f - (. - gText_Rom_214107)
	.endif
