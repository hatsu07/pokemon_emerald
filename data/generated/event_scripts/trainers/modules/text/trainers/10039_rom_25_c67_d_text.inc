	@ data/text/trainers.inc:1175 Route113_Text_MadelineIntro (+1 aliases)
	.globl gText_Rom_25C67D
gText_Rom_25C67D: @ 0x0825C67D
	.string "あたしの ドンメルちゃんに\nかざんばいが かからないように\lパラソルを さしているの$"
	.if (. - gText_Rom_25C67D) > 0x2b
	.error "gText_Rom_25C67D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C67D) < 0x2b
	.space 0x2b - (. - gText_Rom_25C67D)
	.endif
