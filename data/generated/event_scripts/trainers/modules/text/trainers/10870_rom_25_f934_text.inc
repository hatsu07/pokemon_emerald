	@ data/text/trainers.inc:2387 Route121_Text_MarcelIntro (+1 aliases)
	.globl gText_Rom_25F934
gText_Rom_25F934: @ 0x0825F934
	.string "わたしの ポケモンは まけしらず!\nこんど かったら つぎは コンテストだ!{EOS}"
	.if (. - gText_Rom_25F934) > 0x27
	.error "gText_Rom_25F934 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F934) < 0x27
	.space 0x27 - (. - gText_Rom_25F934)
	.endif
