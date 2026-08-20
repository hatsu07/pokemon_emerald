	@ data/text/trainers.inc:1310 Route114_Text_ShanePostBattle
	.globl gText_Rom_25CBD3
gText_Rom_25CBD3: @ 0x0825CBD3
	.string "ぼくね ポケモンと いっしょに\nキャンプ できるだけで しあわせ だよ{EOS}"
	.if (. - gText_Rom_25CBD3) > 0x24
	.error "gText_Rom_25CBD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CBD3) < 0x24
	.space 0x24 - (. - gText_Rom_25CBD3)
	.endif
