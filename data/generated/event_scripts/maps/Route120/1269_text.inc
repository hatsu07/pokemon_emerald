	@ data/maps/Route120/scripts.inc:362 Route120_Text_StevenGreeting
	.globl gText_Rom_1EDE10
gText_Rom_1EDE10: @ 0x081EDE10
	.string "ダイゴ『ん? {PLAYER}{KUN}か\nひさしぶり だね\pここに みえない なにかが いるよね?\pで みえない なにかに むかって\nこの どうぐを つかうと……\pちがうな…… せつめい するよりも\nじっさいに つかった ほうが たのしそうだ\p{PLAYER}{KUN} きみの ポケモン\nたたかう じゅんびは できて いるのかい?{EOS}"
	.if (. - gText_Rom_1EDE10) > 0x96
	.error "gText_Rom_1EDE10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EDE10) < 0x96
	.space 0x96 - (. - gText_Rom_1EDE10)
	.endif
