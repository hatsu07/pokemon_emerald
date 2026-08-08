	@ data/text/trainers.inc:1034 Route111_Text_CeliaPostBattle
	.globl gText_Rom_25C0C2
gText_Rom_25C0C2: @ 0x0825C0C2
	.string "この すなあらし じゃ\nゴーゴーゴーグルを つけて いても\lおべんとうが ひろげられないんだもん……$"
	.if (. - gText_Rom_25C0C2) > 0x33
	.error "gText_Rom_25C0C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C0C2) < 0x33
	.space 0x33 - (. - gText_Rom_25C0C2)
	.endif
